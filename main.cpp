#include <iostream>
using namespace std;
//hukam class ============================================
class hukam
{
public:
	int number_cards[9] = { 2,3,4,5,6,7,8,9,10 };
	char face_cards[4] = { 'J','Q','K','A' };
	void Display()
	{
		cout << "\nHukam:\n";
		for (int i = 0; i < 9; i++)
		{
			if (number_cards[i] != 0)
				cout << number_cards[i] << " ";
		}
		for (int i = 0; i < 4; i++)
		{
			if (face_cards[i] != NULL)
				cout << face_cards[i] << " ";
		}
		cout << endl;
	}
};
//dil class ================================================
class Dil
{
public:
	int number_cards[9] = { 2,3,4,5,6,7,8,9,10 };
	char face_cards[4] = { 'J','Q','K','A' };
	void Display()
	{
		cout << "\nDil\n";
		for (int i = 0; i < 9; i++)
		{
			if (number_cards[i] != 0)
				cout << number_cards[i] << " ";
		}
		for (int i = 0; i < 4; i++)
		{
			if (face_cards[i] != NULL)
				cout << face_cards[i] << " ";
		}
		cout << endl;
	}
};
//chiri class ================================================
class Chiri
{
public:
	int number_cards[9] = { 2,3,4,5,6,7,8,9,10 };
	char face_cards[4] = { 'J','Q','K','A' };
	void Display()
	{
		cout << "\nChiri:\n";
		for (int i = 0; i < 9; i++)
		{
			if (number_cards[i] != 0)
				cout << number_cards[i] << " ";
		}
		for (int i = 0; i < 4; i++)
		{
			if (face_cards[i] != NULL)
				cout << face_cards[i] << " ";
		}
		cout << endl;
	}
};
//Eint class =================================================
class Eient
{
public:
	int number_cards[9] = { 2,3,4,5,6,7,8,9,10 };
	char face_cards[4] = { 'J','Q','K','A' };
	void Display()
	{
		cout << "\nEient:\n";
		for (int i = 0; i < 9; i++)
		{
			if (number_cards[i] != 0)
				cout << number_cards[i] << " ";
		}
		for (int i = 0; i < 4; i++)
		{
			if (face_cards[i] != NULL)
				cout << face_cards[i] << " ";
		}
		cout << endl;
	}
};
// a function that displays all the remaning cards===============
void full_display(hukam* h, Dil* d, Chiri* c, Eient* e, int n)
{
	system("cls");
	cout << "This is sar number : " << n<<endl<<"These are the remaning cards:";
	h->Display();
	d->Display();
	c->Display();
	e->Display();
}
//this function will remove the cards
void remove_cards(hukam* h, Dil* d, Chiri* c, Eient* e)
{
	int card;
	char family;
	do
	{
		cout << "Enter a card number(1=A to 13=K) to remove: ";
		cin >> card;
		cout << endl;
		cout << "Enter a card family(h,d,c,e) to remove: ";
		cin >> family;
		cout << endl;
		if (family=='h')
		{

		}
	} while (card!=0);
}
// //main function===================================================
int main(int argc, char* argv[])
{
	hukam hh; //hukam obj
	hukam* h=&hh;//pointer to hukam obj
	Dil dd;//obj
	Dil* d=&dd;//pointer
	Chiri cc;//obj
	Chiri* c = &cc;//ptr
	Eient ee;//obj
	Eient* e=&ee;//ptr
	system("cls");
	cout << "===========================================\nThe Game Starts. Every Card is in the Game.\n===========================================\n\n";
	int n = -9;
	while (n!=0)
	{
		//here the player will enter which cards have been taken out
		remove_cards(h, d, c, e);
		full_display(h, d, c, e, n);
		n++;
	}
	return 0;
}
