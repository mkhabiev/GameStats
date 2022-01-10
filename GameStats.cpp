// Программа Game Stats 
// Демонстрирует объявление и инициализацию переменных

#include <iostream>
using namespace std;

int main()
{
	int score;
	double distance;
	char PlayAgain;
	bool ShieldsUp;
	short Lives, AliensKilled;
	score = 0;
	distance = 1200.76;
	PlayAgain = 'y';
	ShieldsUp = true;
	Lives = 3;
	AliensKilled = 10;
	double EngineTemp = 6689.35;

	cout << "Score: " << score << endl;
	cout << "Distance: " << distance << endl;
	cout << "Play Again: " << PlayAgain << endl;
	//пропускаем ShieldsUp, т.к bool не выводится на экран
	cout << "Lives: " << Lives << endl;
	cout << "Engine temp: " << EngineTemp << endl;
	cout << "Aliens killed: " << AliensKilled << endl;

	int fuel;
	cout << "\nHow much fuel? ";
	cin >> fuel;
	cout << "fuel: " << fuel << endl;

	typedef unsigned short int ushort;
	ushort bonus = 10;
	cout << "\nbonus: " << bonus << endl;
	return 0;
}