#pragma once
#ifndef Point
template<typename T>
class Point { //klasa bazowa, klasa "rodzic", superklasa

protected: //bo nie mozna dziedziczyc private
	T x;
public:
	Point(T = 0);
	virtual ~Point();
	T getX();
	void setX(T);

};

template <typename T>
Point<T>::Point(T x) {

	//std::cout << "Constructor Point has been awake" << std::endl;
	this->x = x;

}
template <typename T>
Point<T>::~Point() {

	//std::cout << "Destructor Point has been awake" << std::endl;
}
template <typename T>
T Point<T>::getX() {

	return this->x;
}
template <typename T>
void Point<T>::setX(T x) {

	this->x = x;
}
template <typename T>
class Point2D : public Point<T> { //dziedziczenie w sposob publiczny
	//Klasa pochodna, klasa "dziecko", subklasa

	T y;
public:
	Point2D(T = 0, T = 0);
	~Point2D();
	T getY();
	void setY(T);
	void setXY(T, T);
	Point2D operator+(Point2D);
};
template <typename T>
Point2D<T>::Point2D(T x, T y) : Point<T>(x) { //wywolywanie konstruktora Point dla Point2D -> kolejnosc matka->dziecko

	//std::cout << "Constructor Point2 has been awake" << std::endl;
	this->y = y;
}
template <typename T>
Point2D<T>::~Point2D() { //kolejnosc dziecko->matka, najpierw niszczy najnizszy element

	//std::cout << "Destructor Point2 has been awake" << std::endl;
}
template <typename T>
T Point2D<T>::getY() {

	return this->y;

}
template <typename T>
void Point2D<T>::setY(T y) {

	this->y = y;
}
template <typename T>
void Point2D<T>::setXY(T x, T y) {

	setX(x);
	setY(y);

}
template <typename T>
Point2D<T> Point2D<T>::operator+ (Point2D obj) {
	Point2D temp;

	temp.setX(this->getX() + obj.getX()); //this->: aktualny obiekt
	temp.setY(this->getY() + obj.getY());
	return temp;
}

/*
class Point3D : public Point2D {

	int z;
public:
	Point3D(int = 0, int = 0, int = 0);
	~Point3D();
	int getZ();
	void setZ(int);
	void setYZ(int, int);
	void setXYZ(int, int, int);
};
*/
#endif