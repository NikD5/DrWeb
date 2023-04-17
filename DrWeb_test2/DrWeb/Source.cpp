#include<iostream>
using namespace std;
void TrimRight(char* s) {
	char* ptr = nullptr;
	char c;
	while ((c = *s++) != '\0') {
		if (c == ' ') {
			if (!ptr) {
				ptr = s - 1;
			}
		}
		else {
			ptr = nullptr;
		}
	}
	if (ptr) {
		*ptr = '\0';
	}
}
void _TEST(char* s) {
	TrimRight(s);
	cout << s << "<---END\n";
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	char s1[] = "     doctor   wweb     ";
	char s2[] = "          ";
	char s3[] = "doctor   web     ";
	char s4[] = "doctorweb     ";
	char s5[] = "doctorweb";
	_TEST(s1);
	_TEST(s2);
	_TEST(s3);
	_TEST(s4);
	_TEST(s5);
	return 0;
}