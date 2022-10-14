#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;

int main(void)
{
//1---------------------------------------------------------
	//string s;
	//cin >> s;
	//cout << s << '\n';
	//cout << s << std::endl;
//-------------------------------------------------------------


//2--------------------------------------------------------------
//	string line;
//	while(getline(cin, line)) {
//		if (!line.empty())
//			if (line.size() > 5)
//				cout << line << '\n';
//}
//---------------------------------------------------------------

//3----------------------------------------------------------------
	string str1 = "hello";
	string str2("waaaaaaaaa");
	string str3(10, '0');

	cout << str1 << '\n'
		<< str2 << '\n'
		<< str3 << std::endl;

	string str4 = str1 + str2;
	string str5 = str1 + " hello";
	cout << str4 << '\n'
		<< str5 << std::endl;
//-----------------------------------------------------------------------
	return 0;
}