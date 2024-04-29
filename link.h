#include "node.cpp"

template <class T>
class Linkedlist
{
	Node<T>* start;
	
	public:
	Linkedlist();
//	Linkedlist(string& filename);
	void insertPos(T&,int);
	void deletePos(int);
	void UpdateBook(int);
	void searchBook(int);
	void TopBook();
	void display();
//	void readFile();
	void readdata();
	~Linkedlist();
};