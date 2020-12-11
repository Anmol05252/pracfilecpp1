// Imagine a publishing company that markets both book and audiocassette versions of its works. Create a class publication that stores the title (a string) and price (type float) of a publication. From this class derive two classes: book, which adds a page count (type int), and tape, which adds a playing time in minutes (type float). Each of these three classes should have a getdata() function to get its data from the user at the keyboard,and a putdata() function to display its data.Write a main() program to test the book and tape classes by creating instances of them, asking the user to fill in data with getdata(), and then displaying the data with putdata().

#include <iostream>
using namespace std;

class Publication
{
protected:
    string title;
    float price;

public:
    void getdata()
	{
        cout<<"\nEnter the title and the price of the book/tape: ";
        cin >>title>>price;
    }
    void putdata()
	{
        cout<<"\nTitle: "<<title;
        cout<<"\nPrice: "<<price;
    }

};

class Book : public Publication
{
    int page_count;

	public:
    void getdata()
	{
        Publication::getdata();
        cout<<"\nEnter the page count of the book: ";
        cin >> page_count;
    }

    void putdata()
	{
        Publication::putdata();
        cout <<"\nPage Count: "<<page_count;
    }
};

class Tape: public Publication
{
    int time;

	public:
   	void getdata()
	{
        Publication::getdata();
        cout<<"\nEnter the playing time of the tape(in minutes): ";
        cin >> time;
   	}
    void putdata()
	{
        Publication::putdata();
        cout<<"\nPlaying time: "<<time;
    }
};
int main()
{
    Book b1;
    b1.getdata();
    b1.putdata();

    cout << endl;

    Tape t1;
    t1.getdata();
    t1.putdata();
    
}


