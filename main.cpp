#include<iostream>
#include<cstdlib>
#include<string>
#include<sstream>

using namespace std;

// 一个友善（？）的八进制乘法初级计算练习程序，可以容易的改成八进制版本。
// 可以有效的让你明白小学生为何做不出你觉得很简单的乘法题。

// 第一版功能：随机给出两个2位八进制数要求计算其乘积，并在用户输入答案后判断是否正确
// 输入答案正确或输入GG就给出答案并给出下一道题。输入QNMD退出程序。

// 第二版可以考虑添加：
// 位数可选

// 如果后面有足够的时间
// 考虑把答案输出方式改为竖式计算形式

int main() {
	srand(time(NULL));
	system("color F0");
	int x, y;
	stringstream ss;
	string answer;
	string product;
	int num = 0;
	cout << oct;
	ss >> oct;
	cout << "友善的八进制乘法教学程序。" << endl;
	cout << "输入正确答案或GG进入下一题。输入QNMD结束程序。" << endl;
	// cout << "数字不接受大写字母。" << endl;
	while (1) {
		num++;
		x = 0;
		y = 0;
		while (x < 8) x = rand() % 64;
		while (y < 8) y = rand() % 64;
		ss << x * y;
		answer = ss.str();
		cout << endl << "第" << num << "题" << endl;
		cout << x << " × " << y << " = " << endl;
		while (1) {
			cout << ">>";
			cin >> product;
			if (product == "GG") {
				cout << "  怂了？脚趾头都能算出来是" << x * y << endl;
				break;
			}
			else if (product == "QNMD") {
				cout << "  别再让我看见你，连个" << x * y << "都算不出来的xxs" << endl;
				system("pause");
				return 0;
			}
			else if (product == answer) {
				if (rand() % 2 == 0) cout << "  按计算器谁不会" << endl;
				else  cout << "  我孙子算的都比你快" << endl;
				break;
			}
			else {
				if(rand() % 2 == 0) cout << "  傻逼" << endl;
				else  cout << "  蠢蛋" << endl;
				continue;
			}
		}
		ss.clear();
		ss.str("");
	}
	system("pause");
	return 0;
}