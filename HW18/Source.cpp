/*������ 1
�������� ����������� �������, ������� ��������� 
��� ����� � ���������� �� ������� ��������������.
������ 2
���������� ������������� ������� ��� ���������� 
������������� �� ��� ���������. ������� ������ 
������������ ���� int, float � double.
������ 3
�������� ��������� ������� ��� ���������� 
������������� �������� �������. ������� ������ 
�������� � ����� ����� ������.
*/

#include <iostream>
#include<stdlib.h>
#include<time.h>
#include<algorithm>
using namespace std;

inline double srArifm(double x, double y);

int maxEl(int arr[], int leng = 3) {
	int max = arr[0];
	for (int i = 0; i < 3; i++)
		max = max > arr[i] ? max : arr[i];
	cout << "\nfor int = ";
	return int(max);
}

float maxEl(float arr[], int leng = 3) {
	float max = arr[0];
	for (int i = 0; i < 3; i++)
		max = max > arr[i] ? max : arr[i];
	cout << "\nfor float = ";
	return float(max);

}
double maxEl(double arr[], int leng = 3) {
	double max = arr[0];
	for (int i = 0; i < 3; i++)
		max = max > arr[i] ? max : arr[i];
	cout << "\nfor double = ";
	return  double(max);
}
template<typename T>T MaxArr(T Arr[], int Leng) {
	T max = Arr[0];
	for (int i = 0; i < Leng; i++)
	
	max = max > Arr[i] ? max : Arr[i];
	
	return max;
}

int main() {
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
/*
	cout << "Zadacha 1.C������ ��������������,������� ��� ����� :\n";
	double x, y;
	cin >> x >> y;
	cout << "������� �������������� = " << srArifm(x,y) << endl;
*/
/*	cout << "Zadacha 2.���������� �������.\n";
	int x[] = { 5,71,3 };
	float f[] = { 0.4,5.12,7.1 };
	double d[] = { 0.012,7.895,8.02478 };
	cout << "MAX ELEMENT (x,3) = " << maxEl(x, 3)<<endl;
	cout << "MAX ELEMENT (f,3) = " << maxEl(f, 3)<<endl;
	cout << "MAX ELEMENT (d,3) = " << maxEl(d, 3)<<endl;
*/
	cout << "Zadacha 3.��������� ������� ��������� MAX �������� �������\n";
	double Arr[3] = {5.25,6.97,0.9};
	cout << "massiv\n";
	for (int i = 0; i < 3; i++)
		cout << Arr[i] << "  ";
	cout << endl;
	cout << "MAX = " << MaxArr(Arr, 3);



	return 0;
}

inline double srArifm(double x, double y) {

	return ((x + y) / 2);
}

