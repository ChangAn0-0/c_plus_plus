#include <iostream>
#include <string>
#include <cstdio>
#include <cctype>

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
	//string str1 = "hello";
	//string str2("waaaaaaaaa");
	//string str3(10, '0');

	//cout << str1 << '\n'
	//	<< str2 << '\n'
	//	<< str3 << std::endl;

	//string str4 = str1 + str2;
	//string str5 = str1 + " hello";
	//cout << str4 << '\n'
	//	<< str5 << std::endl;
//-----------------------------------------------------------------------

//4----------------------------------------------------------------------
	/*string str("qwertyuiop");
	decltype(str.size()) count = 0;
	for (auto c : str) {
		if (isalpha(c))
			count++;
	}
	cout << count << std::endl;	*/
//------------------------------------------------------------------------

//5-=------------------------------------------------------------------------
	/*string str("hello world");
	for (auto& c : str) {
		c = toupper(c);
	}
	cout << str << std::endl;*/
//-----------------------------------------------------------------------------


//6--------------------------------------------------------------------------
	string str= "ha ha ha";
	if (!str.empty()) {
		str[0] = toupper(str[0]);
	}
	cout << str << std::endl;

	for (decltype(str.size()) i = 0; i != str.size() && !isspace(str[i]); i++) {
		str[i] = toupper(str[i]);
	}
	cout << str << std::endl;

	return 0;
}