#include<iostream>
#include<cstdlib>
#include<string>
#include<sstream>

using namespace std;

// һ�����ƣ������İ˽��Ƴ˷�����������ϰ���򣬿������׵ĸĳɰ˽��ư汾��
// ������Ч����������Сѧ��Ϊ������������úܼ򵥵ĳ˷��⡣

// ��һ�湦�ܣ������������2λ�˽�����Ҫ�������˻��������û�����𰸺��ж��Ƿ���ȷ
// �������ȷ������GG�͸����𰸲�������һ���⡣����QNMD�˳�����

// �ڶ�����Կ�����ӣ�
// λ����ѡ

// ����������㹻��ʱ��
// ���ǰѴ������ʽ��Ϊ��ʽ������ʽ

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
	cout << "���Ƶİ˽��Ƴ˷���ѧ����" << endl;
	cout << "������ȷ�𰸻�GG������һ�⡣����QNMD��������" << endl;
	cout << "���ֲ����ܴ�д��ĸ��" << endl;
	while (1) {
		x = 0;
		y = 0;
		while (x < 8) x = rand() % 64;
		while (y < 8) y = rand() % 64;
		ss << x * y;
		answer = ss.str();
		num++;
		cout << endl << "��" << num << "��" << endl;
		cout << x << " �� " << y << " = " << endl;
		while (1) {
			cout << ">>";
			cin >> product;
			if (product == "GG") {
				cout << "  ���ˣ���ֺͷ�����������" << x * y << endl;
				break;
			}
			else if (product == "QNMD") {
				cout << "  �������ҿ����㣬����" << x * y << "���㲻������xxs" << endl;
				system("pause");
				return 0;
			}
			else if (product == answer) {
				cout << "  ����������ʲô�˲���" << endl;
				break;
			}
			else {
				cout << "  ɵ��" << endl;
				continue;
			}
		}
		ss.clear();
		ss.str("");
	}
	system("pause");
	return 0;
}