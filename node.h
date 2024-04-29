//#include "book.h"
using namespace std;
//////////////////////////
template <class T>
class Node
{
//	Book data;
    T data;
	Node* next;
	
	public:
	Node(T&);
	void setData(T&);
	void setNext(Node*);
	T& getData();
	Node* getNext();
};