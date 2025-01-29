#include<iostream>
#include <string>
using namespace std;

class Aluminium {
public:
	virtual float bill() = 0;
};

class Gold:public Aluminium {
private:
	float length, width, b, perPrice = 80, total;

public:
	Gold(float l, float w)
	{
		length = l;
		width = w;
	}

	float bill() override {
		b = width * length;
		total = b * perPrice;
		return total;
	}

};

class White :public Aluminium {
private:
	float length, width, b, perPrice = 50, total;

public:
	White(float l, float w)
	{
		length = l;
		width = w;
	}

	float bill() override {
		b = width * length;
		total = b * perPrice;
		return total;
	}
};

class Glass {
public:
	virtual float bill() = 0;
};

class Tempered : public Glass {
private:
	float length, width, b, perPrice = 150, total;

public:
	Tempered(float l, float w)
	{
		length = l;
		width = w;
	}

	float bill() override {
		b = width * length;
		total = b * perPrice;
		return total;
	}

};

class Float : public Glass {
private:
	float length, width, b, perPrice = 120, total;

public:
	Float(float l, float w)
	{
		length = l;
		width = w;
	}

	float bill() override {
		b = width * length;
		total = b * perPrice;
		return total;
	}

};

int main()
{
	int num; float bill,b;
	int flag = 0;

	while (flag != 1)
	{
		cout << "Enter number of windows you want to order : ";
		cin >> num;
		while (num <= 0)
		{
			cout << "Invalid Entry!!Enter a valid number: "; cin >> num;
		}
		int choice, ch2, l, w;
		cout << "Press 1 for Aluminium window and Press 2 for Glass windows : "; cin >> choice;
		while (choice != 1 && choice != 2)
		{
			cout << "Invalid entry! Enter again : "; cin >> choice;
		}

		if (choice == 1)
		{
			cout << "Press 1 for White or 2 for Gold : "; cin >> ch2;
			while (choice != 1 && choice != 2)
			{
				cout << "Invalid Entry!!Enter a valid number: "; cin >> ch2;
			}
			cout << "Enter length: "; cin >> l;
			cout << "Enter width : "; cin >> w;

			if (ch2 == 1)
			{
				White white(l, w);
				b = white.bill();
				bill = num * b;
				cout << "Total bill : " << bill << endl;
			}
			else if (ch2 == 2)
			{
				Gold gold(l, w);
				b = gold.bill();
				bill = num * b;
				cout << "Total bill : " << bill << endl;
			}
		}
		else if (choice == 2)
		{
			cout << "Press 1 for Tempered or 2 for Float : "; cin >> ch2;
			while (choice != 1 && choice != 2)
			{
				cout << "Invalid Entry!!Enter a valid number: "; cin >> ch2;
			}
			cout << "Enter length: "; cin >> l;
			cout << "Enter width : "; cin >> w;

			if (ch2 == 1)
			{
				Tempered temp(l, w);
				b = temp.bill();
				bill = num * b;
				cout << "Total bill : " << bill << endl;
			}
			else if (ch2 == 2)
			{
				Float fl(l, w);
				b = fl.bill();
				bill = num * b;
				cout << "Total bill : " << bill << endl;
			}
		}
		int ch3;
		cout << "Do you want to change material? Press 1 if yes or press 2 if no : "; cin >> ch3;
		while (ch3 != 1 && ch3 != 2)
		{
			cout << "Invalid entry! Enter again : "; cin >> ch3;
		}

		if (ch3 == 1)
		{
			flag = 0;
		}

		else 
		{
			flag = 1;
		}
	}
	cout << endl;
	cout << "Thanks for visting" << endl;
	return 0;
}