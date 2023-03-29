#include<iostream>
#include<string>   // библиотека, позволяющая работать со строками языка С++

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	// Строки из языка С
	/*char c_str[]{ 'H','e','l','l','o','\0'};   // в конце нуль-терминатор.
	for (int i = 0; i < 5; i++)
		std::cout << c_str[i];
	std::cout << '\n';

	std::cout << c_str << '\n';

	char c_str2[]{"Hello world!"};
	std::cout << c_str2 << '\n';*/

	// Объекты string
	/*std::string new_str;
	std::cout << new_str << '\n';
	new_str = "Hello world!";
	std::cout << new_str << '\n';
	new_str = "Bye world";
	std::cout << new_str << '\n';

	// Конкатениция строк
	new_str = new_str + " (c)student";
	new_str+= "!!!";
	std::cout << new_str << '\n';*/

	// Ввод строки
	/*std::cout << "Привет! Какое твоё имя?\nВвод : ";
	std::string name;
	std::cin >> name;
	std::cout << "Привет, " << name << "!\n";
	std::cout << "Кем ты работаешь?\nВвод : ";
	std::string job;
	std::cin.ignore();  // иначе getline не работает после cin.
	std::getline(std::cin,job);
	std::cout << "Ого, " << job << "? Круто!\n";
	std::cout << "Сколько тебе лет?\nВвод : ";
	int age;
	std::cin >> age;
	std::cout << "Когда-то и мне было " << age << " лет...\n";*/

	// Методы строк.
	/*std::string str = "Hello world!";

	// Методы length и size, возвращающие длину строки.
	//std::cout << str.size() << '\n';
	//std::cout << str.length() << '\n';

	// Метод insert
	//str.insert(3,"AAA");
	//std::cout << str << '\n';

	// Метод replace    (номер позиции, кол-во удалённых символов, вставка)
	//str.replace(3, 5, "AAA");  // (3,5,"") просто символы удалятся.
	//std::cout << str << '\n';

	// Метод find
	//std::cout << str.find('l') << '\n';
	//std::cout << str.find('l',6) << '\n';

	// Метод rfind
	//std::cout << str.rfind('o') << '\n';
	//std::cout << str.rfind('o',6) << '\n';

	// Метод substr   (индекс, кол-во символов)
	std::cout << str.substr(3) << '\n';
	std::cout << str.substr(3,5) << '\n';*/

	// Функции для работы со строками.
	n = 123;
	std::string num_str = std::to_string(n);
	num_str += '!';
	std::cout << num_str << '\n';

	std::cout << "Введите число : ";
	std::getline(std::cin, num_str);
	n = std::stoi(num_str);
	n++;
	std::cout << n << '\n';

	std::string hello = "Hello";
	// Возведение в нижний регистр.
	for (int i = 0; i < hello.length(); i++)
		hello[i] = std::tolower(hello[i]);
	std::cout << hello << '\n';
	// Возведение в верхний регистр.
	for (int i = 0; i < hello.length(); i++)
		hello[i] = std::toupper(hello[i]);
	std::cout << hello << '\n';


	return 0;
}