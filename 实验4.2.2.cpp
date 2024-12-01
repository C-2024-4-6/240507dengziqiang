#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int parseHex(const char* const hexString)
{
	string hexStr(hexString);
	int decimalValue = 0;
	int hexLength = hexStr.length();
	for (int i = 0; i < hexLength; ++i)
	{
		char c = hexStr[i];
		int digitValue;
		if (c >= '0' && c <= '9')
		{
			digitValue = c - '0';
		}
		else if (c >= 'A' && c <= 'F')
		{
			digitValue = c - 'A' + 10;
		}
		else if (c >= 'a' && c <= 'f')
		{
			digitValue = c - 'a' + 10;
		}
		decimalValue += digitValue * static_cast<int>(pow(16, hexLength - 1 - i));
	}
	return decimalValue;
}
int main() {
	const char* hexadecimal = "A5";
	int result = parseHex(hexadecimal);
	cout << "十六进制 " << hexadecimal << " 转换为十进制是 " << result << std::endl;
	return 0;
}