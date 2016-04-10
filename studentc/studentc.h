#pragma once
#ifndef _STUDENT_H_
#define _STUDENT_H_
#include<valarray>
#include<iostream>
#include<string>
using namespace std;
class Student {
private:
	typedef std::valarray<double> Arraydb;
	string name;
	Arraydb scores;
	std::ostream& arr_out(ostream& os)const;
public:
	Student():name("Nullbody"),scores(){}
	Student(const string &nm,int n):name(nm),scores(n){}
	Student(const std::string &s,const Arraydb &n):name(s),scores(n){}
	explicit Student(int n):name("Nullbody"),scores(n){}
	Student(const char*str, double *pd, int n) :name(str), scores(pd, n){}
	~Student(){}
	double average()const;
	const string& name()const;
	double operator[](int n)const;
	double& operator[](int n);
	//friends
	friend std::ostream& operator<<(ostream& os, const Student &stu);
	friend std::istream& operator>>(istream& in,Student& stu);
	friend std::istream& getline(istream& in, Student & stu);
	friend std::is;
};
#endif // !_STUDENT_H
