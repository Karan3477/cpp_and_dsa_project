#include "link.cpp"
#include "book.h"
int main() 
{
	int choice;
	Linkedlist<Book> l;
    do
	{
		
        cout<<"\n\t<---Book Menu--->";
	    cout<<"\n\t1.Add the Book:";
	    cout<<"\n\t2.Display The Book:";
	    cout<<"\n\t3.Delete the Book:";
	    cout<<"\n\t4.Update the Book:";
	    cout<<"\n\t5.Search the Book:";
	    cout<<"\n\t6.Top Book's:";
//	    cout<<"\n\t7.Read data from file:";
	    cout<<"\n\t8.Exits:";
	    cout<<"\n\tEnter your choice:";
        cin>>choice;

        switch (choice) 
		{
            case 1:
            {
			    int id,pos;
		        char name[20];
		        char author[20];
		        double price;
		        double rating;
		       
			    cout<<"\n\tEnter Book id:";
			    cin>>id;
			    cout<<"\n\tEnter Book name:";
			    cin>>name;
			    cout<<"\n\tEnter Book author name:";
			    cin>>author;
			    cout<<"\n\tEnter Book price:";
			    cin>>price;
			    cout<<"\n\tEnter Book rating:";
			    cin>>rating;
			    cout<<"\n\tEnter Position:";
			    cin>>pos;
			    Book b1(id,name,author,price,rating);
			    l.insertPos(b1,pos);
            }
            break;
            case 2:
            {	
                l.display();
                cout<<"\n\t ";
            }
            break;
            case 3:
				{
					int pos;
					cout<<"\n\tEnter the possition:";
					cin>>pos;
				    l.deletePos(pos);	
				}
			break;
			case 4:
				{
					int id;
					cout<<"\n\tEnter the Book id:";
					cin>>id;
				    l.UpdateBook(id);	
				}
			break;
			case 5:
				{
					int id;
					cout<<"\n\tEnter the Book id:";
					cin>>id;
				    l.searchBook(id);	
				}
			break;
			case 6:
				{
				    l.TopBook();	
				}
			break;
//			case 7:
//				{
//				    l.readFile();	
//				}
//			break;
            default:
			cout<<"\n\tInvalid choice. Please try again.\n";
        }
    }while(choice!=8);
	return 0;
}