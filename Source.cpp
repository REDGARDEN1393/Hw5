#include<iostream>

int main() {
	setlocale(LC_ALL, "rus");
	int a, b, c, d;

	std::cout << "task 1\n";
	std::cout << "Enter distance to the airport: ";
	double distance;
	std::cin >> distance;
	std::cout << "Enter time: ";
	double time;
	std::cin >> time;
	std::cout << "Enter speed: ";
	double speed;
	std::cin >> speed;
	double realTime = distance / speed;
	if (time <= realTime)
		std::cout << "You are not late!\n\n";
	else
		std::cout << "You are late!\n\n";

	std::cout << "task 2\n";
	std::cout << "Введите 4 числa:\n";
	std::cin >> a >> b >> c >> d;
	int max;
	max = a;
	if (max <= b && b >= c && b >= d)
		max = b;
	if (max <= c && c >= d)
		max = c;
	if (max <= d)
		max = d;
	std::cout << "MAX = " << max;

	int Ab, Bc, Gr1, Gr2, EndGr, Speed1 = 0, Speed2 = 0;
	int  TimeAC, TimeAb = 0, TimeBc = 0, TimeStop;
	std::cout << " Расстояния от пункта A до В:";
	std::cin >> Ab;
	std::cout << " Расстояния от пункта B до C:";
	std::cin >> Bc;
	std::cout << "Hачальный груз курьера:";
	std::cin >> Gr1;
	std::cout << "Kоличество сброшенного в пункте B груза:";
	std::cin >> Gr2;
	std::cout << "Bремя остановки в пункте B :";
	std::cin >> TimeStop;
	if (Gr1 >= 15)
		Speed1 = 1;//km/h;
	if (Gr1 >= 8 && Gr1 <= 14)
		Speed1 = 2;
	if (Gr1 < 8)
		Speed1 = 3;

	TimeAb = Ab / Speed1;
	EndGr = Gr1 - Gr2;

	if (EndGr >= 15)
		Speed2 = 1;//km/h;
	if (EndGr >= 8 && EndGr <= 14)
		Speed2 = 2;
	if (EndGr < 8)
		Speed2 = 3;

	TimeBc = Bc / Speed2;
	TimeAC = TimeAb + TimeBc + TimeStop;
	std::cout << " Bремя потраченное на весь путь из пункта A в пункт С:" << TimeAC << "\n\n";







	return 0;
}