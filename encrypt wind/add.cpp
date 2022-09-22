#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <cmath>
#include <tuple>
using namespace std;
vector <int> strtovec(string str)
{
	vector <int> vec;
	for (int i = 0; i < (int)str.length(); i++)
	{
		switch (str[i])
		{
		case 'a':
			vec.push_back(1);
			break;
		case 'b':
			vec.push_back(2);
			break;
		case 'c':
			vec.push_back(3);
			break;
		case 'd':
			vec.push_back(4);
			break;
		case 'e':
			vec.push_back(5);
			break;
		case 'f':
			vec.push_back(6);
			break;
		case 'g':
			vec.push_back(7);
			break;
		case 'h':
			vec.push_back(8);
			break;
		case 'i':
			vec.push_back(9);
			break;
		case 'j':
			vec.push_back(10);
			break;
		case 'k':
			vec.push_back(11);
			break;
		case 'l':
			vec.push_back(12);
			break;
		case 'm':
			vec.push_back(13);
			break;
		case 'n':
			vec.push_back(14);
			break;
		case 'o':
			vec.push_back(15);
			break;
		case 'p':
			vec.push_back(16);
			break;
		case 'q':
			vec.push_back(17);
			break;
		case 'r':
			vec.push_back(18);
			break;
		case 's':
			vec.push_back(19);
			break;
		case 't':
			vec.push_back(20);
			break;
		case 'u':
			vec.push_back(21);
			break;
		case 'v':
			vec.push_back(22);
			break;
		case 'w':
			vec.push_back(23);
			break;
		case 'x':
			vec.push_back(24);
			break;
		case 'y':
			vec.push_back(25);
			break;
		case 'z':
			vec.push_back(26);
			break;
		case 'A':
			vec.push_back(27);
			break;
		case 'B':
			vec.push_back(28);
			break;
		case 'C':
			vec.push_back(29);
			break;
		case 'D':
			vec.push_back(30);
			break;
		case 'E':
			vec.push_back(31);
			break;
		case 'F':
			vec.push_back(32);
			break;
		case 'G':
			vec.push_back(33);
			break;
		case 'H':
			vec.push_back(34);
			break;
		case 'I':
			vec.push_back(35);
			break;
		case 'J':
			vec.push_back(36);
			break;
		case 'K':
			vec.push_back(37);
			break;
		case 'L':
			vec.push_back(38);
			break;
		case 'M':
			vec.push_back(39);
			break;
		case 'N':
			vec.push_back(40);
			break;
		case 'O':
			vec.push_back(41);
			break;
		case 'P':
			vec.push_back(42);
			break;
		case 'Q':
			vec.push_back(43);
			break;
		case 'R':
			vec.push_back(44);
			break;
		case 'S':
			vec.push_back(45);
			break;
		case 'T':
			vec.push_back(46);
			break;
		case 'U':
			vec.push_back(47);
			break;
		case 'V':
			vec.push_back(48);
			break;
		case 'W':
			vec.push_back(49);
			break;
		case 'X':
			vec.push_back(50);
			break;
		case 'Y':
			vec.push_back(51);
			break;
		case 'Z':
			vec.push_back(52);
			break;
		case '0':
			vec.push_back(53);
			break;
		case '1':
			vec.push_back(54);
			break;
		case '2':
			vec.push_back(55);
			break;
		case '3':
			vec.push_back(56);
			break;
		case '4':
			vec.push_back(57);
			break;
		case '5':
			vec.push_back(58);
			break;
		case '6':
			vec.push_back(59);
			break;
		case '7':
			vec.push_back(60);
			break;
		case '8':
			vec.push_back(61);
			break;
		case '9':
			vec.push_back(62);
			break;
		}
	}
	return vec;
}

string vectostr(vector <int> vec)
{
	string str;
	for (int i = 0; i < (int)vec.size(); i++)
	{
		switch (vec[i])
		{
		case 1:
			str += 'a';
			break;
		case 2:
			str += 'b';
			break;
		case 3:
			str += 'c';
			break;
		case 4:
			str += 'd';
			break;
		case 5:
			str += 'e';
			break;
		case 6:
			str += 'f';
			break;
		case 7:
			str += 'g';
			break;
		case 8:
			str += 'h';
			break;
		case 9:
			str += 'i';
			break;
		case 10:
			str += 'j';
			break;
		case 11:
			str += 'k';
			break;
		case 12:
			str += 'l';
			break;
		case 13:
			str += 'm';
			break;
		case 14:
			str += 'n';
			break;
		case 15:
			str += 'o';
			break;
		case 16:
			str += 'p';
			break;
		case 17:
			str += 'q';
			break;
		case 18:
			str += 'r';
			break;
		case 19:
			str += 's';
			break;
		case 20:
			str += 't';
			break;
		case 21:
			str += 'u';
			break;
		case 22:
			str += 'v';
			break;
		case 23:
			str += 'w';
			break;
		case 24:
			str += 'x';
			break;
		case 25:
			str += 'y';
			break;
		case 26:
			str += 'z';
			break;
		case 27:
			str += 'A';
			break;
		case 28:
			str += 'B';
			break;
		case 29:
			str += 'C';
			break;
		case 30:
			str += 'D';
			break;
		case 31:
			str += 'E';
			break;
		case 32:
			str += 'F';
			break;
		case 33:
			str += 'G';
			break;
		case 34:
			str += 'H';
			break;
		case 35:
			str += 'I';
			break;
		case 36:
			str += 'J';
			break;
		case 37:
			str += 'K';
			break;
		case 38:
			str += 'L';
			break;
		case 39:
			str += 'M';
			break;
		case 40:
			str += 'N';
			break;
		case 41:
			str += 'O';
			break;
		case 42:
			str += 'P';
			break;
		case 43:
			str += 'Q';
			break;
		case 44:
			str += 'R';
			break;
		case 45:
			str += 'S';
			break;
		case 46:
			str += 'T';
			break;
		case 47:
			str += 'U';
			break;
		case 48:
			str += 'V';
			break;
		case 49:
			str += 'W';
			break;
		case 50:
			str += 'X';
			break;
		case 51:
			str += 'Y';
			break;
		case 52:
			str += 'Z';
			break;
		case 53:
			str += '0';
			break;
		case 54:
			str += '1';
			break;
		case 55:
			str += '2';
			break;
		case 56:
			str += '3';
			break;
		case 57:
			str += '4';
			break;
		case 58:
			str += '5';
			break;
		case 59:
			str += '6';
			break;
		case 60:
			str += '7';
			break;
		case 61:
			str += '8';
			break;
		case 0:
			str += '9';
			break;
		}
	}
	return str;
}

vector <int> shifr(vector <int> a, vector <int> b)
{
	int r = 0;
	for (int i = 0; i < (int)a.size(); i++)
	{
		if (r < (int)b.size())
		{
			a[i] *= b[r];
			r += 1;
		}
		else
		{
			r = 0;
			a[i] *= b[r];
			r += 1;
		}
	}
	for (int i = 0; i < (int)a.size(); i++)
	{
		a[i] %= 62;
	}
	return (a);
}

string pis(string a)
{
	int b = 0;
	while ((a.length() % 3) != 0)
	{
		if (b == 0)
		{
			a.erase(a.length() - 1, 1);
			b = 1;
		}
		else
		{
			a.erase(0, 1);
			b = 0;
		}
	}
	return a;
}

vector <int> dis(vector <int> vec)
{
	int a = 0;
	int b = 0;
	int c = 0;
	for (int i = 0; i < (int)vec.size(); i++)
	{
		if (i < (int)vec.size() / 3)
			a += (vec[i]) * (pow(10, ((vec.size() / 3) - i)));
		else if ((i >= (int)vec.size() / 3) & (i < (int)(vec.size() / 3) * 2))
			b += (vec[i]) * (pow(10, ((vec.size() / 3) * 2 - i)));
		else
			c += (vec[i]) * (pow(10, (vec.size() - i)));
	}
	int diskr = b * b - 4 * a * c;
	if (diskr < 0)
		return (vector <int> { a, b, c });
	else if (diskr == 0)
		return (vector <int> { a, -b / (a * 2), c });
	else
		return (vector <int> { ((-b - (int)round(sqrt(diskr))) / (a * 2)), b, ((-b + (int)round(sqrt(diskr))) / (a * 2))});
}

vector <int> exp(string a)
{
	std::string p;
	vector <int> b;
	while (a.find('0') != -1)
		a.erase(a.find('0'), 1);
	if (a.length() % 2 != 0)
		a.erase(a.length() - 1, 1);
	for (int i = 0; i < (int)a.length(); i += 2)
	{
		p.assign(a, i, 2);
		b.push_back(stoi(p));
	}
	return b;
}

string vectostrws(vector <int> vec)
{
	string str;
	for (int i = 0; i < (int)vec.size(); i++)
	{
		switch (vec[i])
		{
		case 1:
			str += 'a';
			break;
		case 2:
			str += 'b';
			break;
		case 3:
			str += 'c';
			break;
		case 4:
			str += 'd';
			break;
		case 5:
			str += 'e';
			break;
		case 6:
			str += 'f';
			break;
		case 7:
			str += 'g';
			break;
		case 8:
			str += 'h';
			break;
		case 9:
			str += 'i';
			break;
		case 10:
			str += 'j';
			break;
		case 11:
			str += 'k';
			break;
		case 12:
			str += 'l';
			break;
		case 13:
			str += 'm';
			break;
		case 14:
			str += 'n';
			break;
		case 15:
			str += 'o';
			break;
		case 16:
			str += 'p';
			break;
		case 17:
			str += 'q';
			break;
		case 18:
			str += 'r';
			break;
		case 19:
			str += 's';
			break;
		case 20:
			str += 't';
			break;
		case 21:
			str += 'u';
			break;
		case 22:
			str += 'v';
			break;
		case 23:
			str += 'w';
			break;
		case 24:
			str += 'x';
			break;
		case 25:
			str += 'y';
			break;
		case 26:
			str += 'z';
			break;
		case 27:
			str += 'A';
			break;
		case 28:
			str += 'B';
			break;
		case 29:
			str += 'C';
			break;
		case 30:
			str += 'D';
			break;
		case 31:
			str += 'E';
			break;
		case 32:
			str += 'F';
			break;
		case 33:
			str += 'G';
			break;
		case 34:
			str += 'H';
			break;
		case 35:
			str += 'I';
			break;
		case 36:
			str += 'J';
			break;
		case 37:
			str += 'K';
			break;
		case 38:
			str += 'L';
			break;
		case 39:
			str += 'M';
			break;
		case 40:
			str += 'N';
			break;
		case 41:
			str += 'O';
			break;
		case 42:
			str += 'P';
			break;
		case 43:
			str += 'Q';
			break;
		case 44:
			str += 'R';
			break;
		case 45:
			str += 'S';
			break;
		case 46:
			str += 'T';
			break;
		case 47:
			str += 'U';
			break;
		case 48:
			str += 'V';
			break;
		case 49:
			str += 'W';
			break;
		case 50:
			str += 'X';
			break;
		case 51:
			str += 'Y';
			break;
		case 52:
			str += 'Z';
			break;
		case 53:
			str += '0';
			break;
		case 54:
			str += '1';
			break;
		case 55:
			str += '2';
			break;
		case 56:
			str += '3';
			break;
		case 57:
			str += '4';
			break;
		case 58:
			str += '5';
			break;
		case 59:
			str += '6';
			break;
		case 60:
			str += '7';
			break;
		case 61:
			str += '8';
			break;
		case 62:
			str += '9';
			break;
		case 63:
			str += '!';
			break;
		case 64:
			str += '@';
			break;
		case 65:
			str += '#';
			break;
		case 66:
			str += '$';
			break;
		case 67:
			str += '%';
			break;
		case 68:
			str += '&';
			break;
		case 69:
			str += '*';
			break;
		case 70:
			str += '(';
			break;
		case 71:
			str += ')';
			break;
		case 72:
			str += '-';
			break;
		case 73:
			str += '+';
			break;
		case 74:
			str += '=';
			break;
		case 75:
			str += ':';
			break;
		case 76:
			str += ',';
			break;
		case 77:
			str += '.';
			break;
		case 0:
			str += '?';
			break;
		}
	}
	return str;
}

vector <int> strtovecws(string str)
{
	vector <int> vec;
	for (int i = 0; i < (int)str.length(); i++)
	{
		switch (str[i])
		{
		case 'a':
			vec.push_back(1);
			break;
		case 'b':
			vec.push_back(2);
			break;
		case 'c':
			vec.push_back(3);
			break;
		case 'd':
			vec.push_back(4);
			break;
		case 'e':
			vec.push_back(5);
			break;
		case 'f':
			vec.push_back(6);
			break;
		case 'g':
			vec.push_back(7);
			break;
		case 'h':
			vec.push_back(8);
			break;
		case 'i':
			vec.push_back(9);
			break;
		case 'j':
			vec.push_back(10);
			break;
		case 'k':
			vec.push_back(11);
			break;
		case 'l':
			vec.push_back(12);
			break;
		case 'm':
			vec.push_back(13);
			break;
		case 'n':
			vec.push_back(14);
			break;
		case 'o':
			vec.push_back(15);
			break;
		case 'p':
			vec.push_back(16);
			break;
		case 'q':
			vec.push_back(17);
			break;
		case 'r':
			vec.push_back(18);
			break;
		case 's':
			vec.push_back(19);
			break;
		case 't':
			vec.push_back(20);
			break;
		case 'u':
			vec.push_back(21);
			break;
		case 'v':
			vec.push_back(22);
			break;
		case 'w':
			vec.push_back(23);
			break;
		case 'x':
			vec.push_back(24);
			break;
		case 'y':
			vec.push_back(25);
			break;
		case 'z':
			vec.push_back(26);
			break;
		case 'A':
			vec.push_back(27);
			break;
		case 'B':
			vec.push_back(28);
			break;
		case 'C':
			vec.push_back(29);
			break;
		case 'D':
			vec.push_back(30);
			break;
		case 'E':
			vec.push_back(31);
			break;
		case 'F':
			vec.push_back(32);
			break;
		case 'G':
			vec.push_back(33);
			break;
		case 'H':
			vec.push_back(34);
			break;
		case 'I':
			vec.push_back(35);
			break;
		case 'J':
			vec.push_back(36);
			break;
		case 'K':
			vec.push_back(37);
			break;
		case 'L':
			vec.push_back(38);
			break;
		case 'M':
			vec.push_back(39);
			break;
		case 'N':
			vec.push_back(40);
			break;
		case 'O':
			vec.push_back(41);
			break;
		case 'P':
			vec.push_back(42);
			break;
		case 'Q':
			vec.push_back(43);
			break;
		case 'R':
			vec.push_back(44);
			break;
		case 'S':
			vec.push_back(45);
			break;
		case 'T':
			vec.push_back(46);
			break;
		case 'U':
			vec.push_back(47);
			break;
		case 'V':
			vec.push_back(48);
			break;
		case 'W':
			vec.push_back(49);
			break;
		case 'X':
			vec.push_back(50);
			break;
		case 'Y':
			vec.push_back(51);
			break;
		case 'Z':
			vec.push_back(52);
			break;
		case '0':
			vec.push_back(53);
			break;
		case '1':
			vec.push_back(54);
			break;
		case '2':
			vec.push_back(55);
			break;
		case '3':
			vec.push_back(56);
			break;
		case '4':
			vec.push_back(57);
			break;
		case '5':
			vec.push_back(58);
			break;
		case '6':
			vec.push_back(59);
			break;
		case '7':
			vec.push_back(60);
			break;
		case '8':
			vec.push_back(61);
			break;
		case '9':
			vec.push_back(62);
			break;
		case '!':
			vec.push_back(63);
			break;
		case '@':
			vec.push_back(64);
			break;
		case '#':
			vec.push_back(65);
			break;
		case '$':
			vec.push_back(66);
			break;
		case '%':
			vec.push_back(67);
			break;
		case '&':
			vec.push_back(68);
			break;
		case '*':
			vec.push_back(69);
			break;
		case '(':
			vec.push_back(70);
			break;
		case ')':
			vec.push_back(71);
			break;
		case '-':
			vec.push_back(72);
			break;
		case '+':
			vec.push_back(73);
			break;
		case '=':
			vec.push_back(74);
			break;
		case ':':
			vec.push_back(75);
			break;
		case ',':
			vec.push_back(76);
			break;
		case '.':
			vec.push_back(77);
			break;
		case '?':
			vec.push_back(78);
			break;
		}
	}
	return vec;
}

vector <int> shifrws(vector <int> a, vector <int> b)
{
	int r = 0;
	for (int i = 0; i < (int)a.size(); i++)
	{
		if (r < (int)b.size())
		{
			a[i] *= b[r];
			r += 1;
		}
		else
		{
			r = 0;
			a[i] *= b[r];
			r += 1;
		}
	}
	for (int i = 0; i < (int)a.size(); i++)
	{
		a[i] %= 78;
	}
	return (a);
}