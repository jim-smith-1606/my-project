#include <iostream>
using namespace std;
//class string {};
int main() {
	// 1 byte = 8 bits
	// integer
	int a = 3; // initialize
	char c = 'c'; // character 1 byte
	short zby; // short integer 2 bytes
	int i = 2; // 4 bytes
	long l; // x86: 4 bytes, x64: 8bytes
	long long ll;
	unsigned int ui = -2; // �޷��� + - ++++
	signed int si;
	float f;
	double d;
	cout << ui << endl;
	// �����ռ���Ⱦ
	string s1 = "zby hao shuai"; // �� �ַ���
	char s2[] = "a"; // �ַ��� �ȼ��� �ַ�����

	// variable ����
	// constant ����
	// keyword
	const float pi = 3.14f;
	cout << pi;

	int NTMD;
	//int 123;
	int jia_ling;
	int jia_LinG;
	int JIA_LING;

	// ת���ַ�
	char s3 = '\'';
	string s4 = "\n \\ \" \' \t  \0";

	// boolean
	bool b; // 1 bit
	bool b1=true, b2=false, b3;

	string s5;
	int i1;

	// c in
	std::cin >> i1;

	//::string;
	// ע��: ��ע��
	//		 ��ע��
	// c out    end line
	cout << "Hello " << i1 << "!" << std::endl;
	return 0;
}
