#include<iostream>
#include<string>   // ����������, ����������� �������� �� �������� ����� �++

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	// ������ �� ����� �
	/*char c_str[]{ 'H','e','l','l','o','\0'};   // � ����� ����-����������.
	for (int i = 0; i < 5; i++)
		std::cout << c_str[i];
	std::cout << '\n';

	std::cout << c_str << '\n';

	char c_str2[]{"Hello world!"};
	std::cout << c_str2 << '\n';*/

	// ������� string
	/*std::string new_str;
	std::cout << new_str << '\n';
	new_str = "Hello world!";
	std::cout << new_str << '\n';
	new_str = "Bye world";
	std::cout << new_str << '\n';

	// ������������ �����
	new_str = new_str + " (c)student";
	new_str+= "!!!";
	std::cout << new_str << '\n';*/

	// ���� ������
	/*std::cout << "������! ����� ��� ���?\n���� : ";
	std::string name;
	std::cin >> name;
	std::cout << "������, " << name << "!\n";
	std::cout << "��� �� ���������?\n���� : ";
	std::string job;
	std::cin.ignore();  // ����� getline �� �������� ����� cin.
	std::getline(std::cin,job);
	std::cout << "���, " << job << "? �����!\n";
	std::cout << "������� ���� ���?\n���� : ";
	int age;
	std::cin >> age;
	std::cout << "�����-�� � ��� ���� " << age << " ���...\n";*/

	// ������ �����.
	/*std::string str = "Hello world!";

	// ������ length � size, ������������ ����� ������.
	//std::cout << str.size() << '\n';
	//std::cout << str.length() << '\n';

	// ����� insert
	//str.insert(3,"AAA");
	//std::cout << str << '\n';

	// ����� replace    (����� �������, ���-�� �������� ��������, �������)
	//str.replace(3, 5, "AAA");  // (3,5,"") ������ ������� ��������.
	//std::cout << str << '\n';

	// ����� find
	//std::cout << str.find('l') << '\n';
	//std::cout << str.find('l',6) << '\n';

	// ����� rfind
	//std::cout << str.rfind('o') << '\n';
	//std::cout << str.rfind('o',6) << '\n';

	// ����� substr   (������, ���-�� ��������)
	std::cout << str.substr(3) << '\n';
	std::cout << str.substr(3,5) << '\n';*/

	// ������� ��� ������ �� ��������.
	n = 123;
	std::string num_str = std::to_string(n);
	num_str += '!';
	std::cout << num_str << '\n';

	std::cout << "������� ����� : ";
	std::getline(std::cin, num_str);
	n = std::stoi(num_str);
	n++;
	std::cout << n << '\n';

	std::string hello = "Hello";
	// ���������� � ������ �������.
	for (int i = 0; i < hello.length(); i++)
		hello[i] = std::tolower(hello[i]);
	std::cout << hello << '\n';
	// ���������� � ������� �������.
	for (int i = 0; i < hello.length(); i++)
		hello[i] = std::toupper(hello[i]);
	std::cout << hello << '\n';


	return 0;
}