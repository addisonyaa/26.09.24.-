#include <iostream>
#include <string>
using namespace std;
int main()
// Задание 1
{
	setlocale(LC_ALL, "Russian");
	int x, y, z;
	string TriangleType;

	cout << "Введите 1 угол треугольника: " << endl; cin >> x;
	cout << "Введите 2 угол треугольника: " << endl; cin >> y;
	cout << "Введите 3 угол треугольника: " << endl; cin >> z;
	TriangleType = (x == 60 && y == 60 && z == 60) ? "Равносторонний" : (x == y || y == z || x == z) ? "Равнобедренный" : (x == 90 || y == 90 || z == 90) ? "Прямоугольный" : "Разносторонний";
	cout << "Вид треугольника: " << TriangleType << endl; 


// Задание 2

	setlocale(LC_ALL, "Russian");
	int q, w, e, r;
	string shape;

	cout << "Введите длины сторон (для треугольника 3 стороны, а для квадрата/прямоугольника 4 стороны): " << endl;
	cout << "1 сторона: " << endl;
	cin >> q;
	cout << "2 сторона: " << endl;
	cin >> w;
	cout << "3 сторона: " << endl;
	cin >> e;
	cout << "4 сторона (если есть, если нет - введите 0) : " << endl;
	cin >> r;

	shape = (q == w && w == e && q == r) ? "Квадрат" : (q == e && w == r && q != w) ? "Прямоугольник" : (q + w > e && q + e > w && w + e > q) ? "Треугольник" : "Неопознанная фигура";
	cout << "Фигура: " << shape << endl;
}