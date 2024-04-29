#include "book.h"
    Book::Book()
    {
        id = 0;
        strcpy(name, "not given");
        strcpy(author,"not given");
        price = 0;
        rating = 0;
    }
    //////////////////////////////////////////
    Book::Book(int id,char* name,char* author,double price,double rating)
    {
        this->id=id;
        strcpy(this->name,name);
        strcpy(this->author,author);
        this->price = price;
        this->rating = rating;
    }
    /////////////////////////////////////////
    int Book::getid()
    {
    	return id;
	}
	/////////////////////////////////////////
	char* Book::getName()
	{
		return this->name;
		
	}
		/////////////////////////////////////////
	char* Book::getAuthor()
	{
		return author;
		
	}
		/////////////////////////////////////////
	double Book::getPrice()
	{
		return price;
	}
	/////////////////////////////////////////	
	double Book::getRating()
	{
		return rating;
	}
	/////////////////////////////////////////
	void Book::setid(int bookid)
    {
    	this->id=bookid;
	}
	/////////////////////////////////////////
	void Book::setName(char* bookname)
	{
		 strcpy(this->name,bookname);
	}
	/////////////////////////////////////////	
	void Book::setauthor(char* authorname)
	{
		strcpy(this->author,authorname);
	}
	/////////////////////////////////////////	
	void Book::setprice(double bookprice)
	{
		this->price=bookprice;
	}
	/////////////////////////////////////////	
	void Book::setrating(double bookrating)
	{
		this->rating=bookrating;
	}
	/////////////////////////////////////////
	void Book::display()
	{
		
		cout<<"\n\tBook id is:"<<this->getid();
		cout<<"\n\tBook name :"<<this->getName();
		cout<<"\n\tBook author name is:"<<this->getAuthor();
		cout<<"\n\tBook price is:"<<this->getPrice();
		cout<<"\n\tBook rating is:"<<this->getRating();
		cout<<"\n\t";
	}
	/////////////////////////////////////////