#include "link.h"
#include "book.h"
////////////////////////////////////////////////
	template <class T>
    Linkedlist<T>::Linkedlist()
    {
        start = NULL;
        readdata();
	}
	///////////////////////////////////////////
		template <class T>
	void Linkedlist<T>::readdata()
	{
		ifstream in("bookdetail.dat",ios_base::binary);
		
		if(!in.is_open())
		{
			cout<<"\n\tError opening fiel:";
			return;
		}
		while(true)
		{
			  T readBook;
			  if(!in.read((char*)&readBook,sizeof(readBook)))
			  {
			  	  break;
			  }
			  insertPos(readBook,1);
		}
		in.close();
	}
	///////////////////////////////////////////
			template <class T>

	void Linkedlist<T>::insertPos(T &ele,int pos)
	{
		Node<T>* temp= new Node<T>(ele); 
		if(start == NULL)
		{
			start=temp;
			cout<<"\n\t<-------Book Added-------->";
			return;
		}
		if(pos==1)
		{
			temp->setNext(start);
			start=temp;
//			cout<<"\n\t<-------Book Added-------->";
			return;
		}
		int i=1;
		Node<T> *p=start;
		while(i<pos-1 && p->getNext()!=NULL)
		{
			p=p->getNext();
			i++;
		}
		temp->setNext(p->getNext());
		p->setNext(temp);
		cout<<"\n\t<-----------Book Added---------->";
	}
//////////////////////////////////////////
		template <class T>

	void Linkedlist<T>::deletePos(int pos)
	{
		if(start == NULL)
		{
			cout<<"\n\t!-----No Books to delete--------!";
			return;
		}
		Node<T>* p=start;
		if(pos == 1)
		{
			start=start->getNext();
		    p->getData().display();
			delete p;
			return;
		}
		int i=1;
		while(i<pos-1 && p->getNext()!=NULL)
		{
			p=p->getNext();
			i++;
		}
		if(i==pos-1)
		{
			Node<T>* q=p->getNext();
			p->setNext(q->getNext());
			q->getData().display();
			delete q;
			return ;
			
		}
	}
	/////////////////////////////////
			template <class T>

	void Linkedlist<T>::display()
	{
		if(start == NULL)
		{
			cout<<"\n\t!--------No Books to display-------------!";
			return;
		}
		else
		{
			 cout<<"\n\t <---------Book's --------->";
			 Node<T> *p=start;
			 while(p!=NULL)
			 {
			 	 p->getData().display();
			 	 p=p->getNext();
			 }
		}
	}
	///////////////////////////////////////////////////////////
			template <class T>

	void Linkedlist<T>::UpdateBook(int id)
	{
		if(start == NULL)
		{
			cout<<"\n\tNo books to update:";
			return;
		}
		else
		{
			 Node<T> *p=start;
			 bool found=false;
			 while(p!=NULL)
			 {
			 	   if(id == p->getData().getid())
			 	   {
			 	   	    T &b1 = p->getData();
			 	   	    cout<<"\n\tfound:";
			 	   	    double p;
			 	   	    double r;
			 	   	    cout<<"\n\tEnter new details:";
			 	   	    cout<<"\n\tEnter Book price:";
			 	   	    cin>>p;
			 	   	    cout<<"\n\tEnter Book Rating:";
			 	   	    cin>>r;
			 	   	    b1.setprice(p);
			 	   	    b1.setrating(r);
			 	   	    found = true;
			       }
			       p=p->getNext();
			 }
			 if(found == false)
			 {
			 	cout<<"\n\tBook not found:";
			 }
		}
	}
	///////////////////////////////////////////////////////////////////
			template <class T>

	void Linkedlist<T>::searchBook(int id)
	{
		if(start == NULL)
		{
			cout<<"\n\tNo books to search:";
			return;
		}
		else
		{
			Node<T>* p=start;
			bool found=false;
			while(p!=NULL)
			{
				 if(id == p->getData().getid())
				 {
				 	found=true;
				 	p->getData().display();
				 }
				 p=p->getNext();
			}
			found == false ? cout<<"\n\t:---Book not found---:" : cout<<"\n\t:----Book found----:";
		}
	}
	////////////////////////////////////////////////////////////////////
			template <class T>

	void Linkedlist<T>::TopBook()
	{
		if(start == NULL)
		{
			cout<<"\n\t-----No Books-----";
			return;
		}
		else
		{
			Node<T>* p=start;
			char FM[20];
			char SM[20];
			char TM[20];
		  	double fm=-999;
			double sm=-999;
			double tm=-999;
			while(p!=NULL)
			{
				if(fm  < p->getData().getPrice())
				{
					 tm = sm;
					 sm = fm ;
	  	             fm = p->getData().getPrice();
	  	             strcpy(FM,p->getData().getName());
                }
				else if(sm < p->getData().getPrice())
				{
					tm = sm;
					sm = p->getData().getPrice();
					strcpy(SM,p->getData().getName());
				}
				else if( tm < p->getData().getPrice())
				{
					tm = p->getData().getPrice();
                    strcpy(TM,p->getData().getName());
				}
				p=p->getNext();
			}
			cout<<"\n\t-----------Top Book By Price--------";
			cout<<"\n\t Book: "<<FM<<"\tPrice: "<<fm;
			cout<<"\n\t Book: "<<SM<<"\tPrice: "<<sm;
			cout<<"\n\t Book: "<<TM<<"\tPrice: "<<tm;
		}
	}
	///////////////////////////////////////////////////////////////////
//	void Linkedlist::readFile()
//	{
//		Node* p=start;
//		ifstream in("bookdetail.dat",ios_base::binary);
//		while(!in.eof())
//		{
//		     in.read((char *)(&(p->getData())),sizeof(p->getData()));
//		     if(in.eof())
//		     {
//		     	break;
//			 }
//			 p->getData().display();
//		}
//		in.close();
//	}
//    void Linkedlist::readFile() {
//    ifstream in("bookdetail.dat", ios_base::binary);
//
//    if (!in.is_open()) {
//        cout << "\n\tError opening file.";
//        return;
//    }
//
//    while (true) {
//        Book readBook;
//        if (!in.read((char*)&readBook, sizeof(readBook))) {
//            break;
//        }
//        insertPos(readBook, 1);
//    }
//
//    in.close();
//}

    ///////////////////////////////////////////////////////////////////
		template <class T>

	Linkedlist<T>::~Linkedlist()
	{
         ofstream out("bookdetail.dat",ios_base::binary);
		 while(start!=NULL)
		 {   
		 	  Node<T> *p=start;
		 	  out.write((char *)(&(p->getData())),sizeof(p->getData()));
		 	  start = start->getNext();
		 	  delete p;
		 }
		 out.close();
	}