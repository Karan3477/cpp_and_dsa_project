#include<iostream>
#include<string>
#include <fstream>   
using namespace std;
#ifndef BOOK_H
#define BOOK_H
class Book
{
    int id;
    char name[20];
    char author[20];
    double price;
    double rating;
    
    public:
    Book();
    Book(int,char*,char*,double,double);
    int getid();
	char* getName();
	char* getAuthor();
	double getPrice();
	double getRating();
	void setid(int);
	void setName(char*);
	void setauthor(char*);
	void setprice(double);
	void setrating(double);
	void display();
};
#endif