#include <iostream>
#include <fstream>
#include<Windows.h>
using namespace std;




class drob
{
private:
	int x;
	int	y;
public:
	void setDrob() {
		cout << "Enter chislitel\n";
		cin >> x;
		do
		{
			cout << "enter znamenatyel\n";
			cin >> y;
		} while (y==0);

	}
	void cut()
	{
		int remember;
		for (int i = 1; i < 10; i++)
		{
			if (x%i == 0 && y%i == 0)
			{
				remember = i;
			}
			else if (x%y == 0)
			{

				remember = y;
			}
			else if (y%x == 0)
			{
				remember = x;
			}
		}
		x = x / remember;
		y = y / remember;
	}
	void setChisl(int a) {
		cout << "enter chisl" << endl;
		
		x = a;
	}
	void setZnam(int b) {	
		if (b != 0)
		{
			y = b;
		}
		else
			y = 1;
	}
	//setters -- modificators
	void printDrob() {
		cout << x << " / " << y << " = " << (float)x / y<<endl;
	}
	//getters-- inspectors
	int getX() { return x; }
	int getY() { return y; }

};
int main()
{
	drob a;
	int d;
	//cin >> d;
	a.setDrob();
	//a.setChisl(d);
	a.printDrob();
	a.cut();
	a.printDrob();
	system("pause");
	return 0;
}


class clocks
{
private:
	int h;
	int m;
	int s;
public:
	//setters
	void setclocks(){
		do
		{
			cout << "Enter hour\n";
			cin >> h;
			cout << "Enter minutes\n";
			cin >> m;
			cout << "Enter seconds\n";
			cin >> s;
		} while (h < 0 || h >= 23);
		}
	void setHour(int a) {
		
		if (h < 0 || h >= 23)
		h = a;
		else
		h = 0;
		
	}

	void setMinutes(int b) {
		
		if (m<0|| m>=59)
		{
			m = b;
		}
		else
		{
			m = 0;
		}
	}

	void setseconds(int c) {
		
		if (s<0 || s >= 59)
		{
			s = c;
		}
		else
		{
			s = 0;
		}
	}

	void addhour() {
		if (h>22)
		{
			h = 0;
		}
		else h++;
	}
	void addminute() {
		if (m > 58){
			m = 0;
		addhour();
	}
		else
		{
			m++;
		}
	}
	void addsecond() {
		if (s>58)
		{
			s = 0;
			addminute();
		}
		else
		{
			s++;
		}
	}
	//getters
	void showclocks() {
		if (h<10)
		{
			cout << "0"; 
		}
		cout << h << " : ";
		if (m<10)
		{
			cout << "0";
		}
		cout<< m << " : ";
		if (s<10)
		{
			cout <<"0";
		}
		cout << s << endl;
	
	}
	int getH() { return h; }
	int getM() { return m; }
	int geS() { return s; }


};
//int main() 
//{
//	clocks a;
//
//	a.setHour(23);
//	a.setMinutes(59);
//	a.setseconds(40);
//	
//	while (1)
//	{
//		a.showclocks();
//		a.addsecond();
//		Sleep(1000);
//		system("cls");
//
//	}
//
//
//
//
//	system("pause");
//	return 0;
//}




