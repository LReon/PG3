#include <iostream>
using namespace std;


// 自作クラス
class MyClass {
public:
	void Update();
	void Approach();
	void Attack();
	void Escape();

	// メンバ関数ポインタのテーブル
	static void (MyClass::* table[])();

private:
	// メンバ関数ポインタのテーブルを参照するインデックス
	int index = 0;
};

void MyClass::Approach() {
	cout << "敵の接近！" << endl;
}

void MyClass::Attack() {
	cout << "敵の攻撃！" << endl;
}

void MyClass::Escape() {
	cout << "敵の離脱！" << endl;
}

void MyClass::Update() {

	// 関数ポインタのテーブルから関数を実行
	(this->*table[index])();
	index++;
	if (index >= 3) {
		index = 0;
	}

}

// static宣言したメンバ関数ポインタテーブルの実体
void (MyClass::* MyClass::table[])() = {
  &MyClass::Approach,	// インデックス番号0
  &MyClass::Attack,	// インデックス番号1
  &MyClass::Escape	// インデックス番号2
};


int main()
{
	MyClass my;
	int number = 0;
	
	while (number == 0) {
		my.Update();
		printf("0なら継続、2なら終了\n");
		scanf_s("%d", &number);
	}
	return 0;
}