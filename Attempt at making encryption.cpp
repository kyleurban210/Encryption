//Kyle Urban
//making a cipher using arrays

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//global constants
const int MAX_SIZE = 1000;
const int ENDER = 999;

//function prototypes
void getMessage(char[]);
void displayOldMessage(char[]);
void correspondingValues(char[], int[]);
void returnCmessage(char[], int[]);
char directionChoice();
//int getChangeValue(char);
void doingCipherRight(char[], int[], char[]);
void displayRightCipher(char[], int[]);


int main()
{


	//varibales
	
	char direction_choice;
	int change_value = 0;
	bool again = 0;

	//array decleration
	char original_message[MAX_SIZE];
	int cmessage[MAX_SIZE] = { 0 };
	char new_message[MAX_SIZE];

	//function calls

	getMessage(original_message);
	displayOldMessage(original_message);
	correspondingValues(original_message, cmessage);
	returnCmessage(original_message, cmessage);
	direction_choice = directionChoice();
	//change_value = getChangeValue(direction_choice);
	doingCipherRight(original_message, cmessage, new_message);
	displayRightCipher(new_message, cmessage);

	cout << endl << endl;

	cout << "Would you like to take that message, and move it over again?" << endl;
	cout << "1 for Yes      0 for No   : ";

	cin >> again;

	while (again)
	{
		doingCipherRight(original_message, cmessage, new_message);
		displayRightCipher(new_message, cmessage);
		
		cout << endl << endl;

		cout << "Would you like to take that message, and move it over again?" << endl;
		cout << "1 for Yes      0 for No   : ";

		cin >> again;


	}


}

void getMessage(char original_message[])
{

	cout << "You are going to type a message, with a max of 1000 words\n";
	cout << "ommit punctiation and makes spaces a hyphen\n";
	//telling user sential value is %
	cout << "Enter a % when you wish to terminate your message\n\n";

	for (int j = 0; j < MAX_SIZE ; j++)
	{

		cin >> original_message[j];

		if (original_message[j] == '%')
			break;

	}
}

void displayOldMessage(char original_message[])
{
	cout << endl << "The message you wish to encrypt is: \n";

	for (int j = 0; j < MAX_SIZE; j++)
	{


		if (original_message[j] == '%')
		{
			cout << endl;
			
			break;
		}

		cout << original_message[j];

	}
	cout << endl << endl;

}


void correspondingValues(char original_message[], int cmessage[])
{

	for (int j = 0; cmessage[j] != ENDER; j++)
	{
		if (original_message[j] == '%')
		{
			cout << endl;
			//sential for cmessage array
			cmessage[j] = ENDER;

			break;
		}

		//assinging the corresponding values
		
		//letter A
		if (original_message[j] == 'A' || original_message[j] == 'a')
			cmessage[j] = 1;
		if (original_message[j] == 'B' || original_message[j] == 'b')
			cmessage[j] = 2;
		if (original_message[j] == 'C' || original_message[j] == 'c')
			cmessage[j] = 3;
		if (original_message[j] == 'D' || original_message[j] == 'd')
			cmessage[j] = 4;
		if (original_message[j] == 'E' || original_message[j] == 'e')
			cmessage[j] = 5;
		if (original_message[j] == 'F' || original_message[j] == 'f')
			cmessage[j] = 6;
		if (original_message[j] == 'G' || original_message[j] == 'g')
			cmessage[j] = 7;
		if (original_message[j] == 'H' || original_message[j] == 'h')
			cmessage[j] = 8;
		if (original_message[j] == 'I' || original_message[j] == 'i')
			cmessage[j] = 9;
		if (original_message[j] == 'J' || original_message[j] == 'j')
			cmessage[j] = 10;
		if (original_message[j] == 'K' || original_message[j] == 'k')
			cmessage[j] = 11;
		if (original_message[j] == 'L' || original_message[j] == 'l')
			cmessage[j] = 12;
		if (original_message[j] == 'M' || original_message[j] == 'm')
			cmessage[j] = 13;
		if (original_message[j] == 'N' || original_message[j] == 'n')
			cmessage[j] = 14;
		if (original_message[j] == 'O' || original_message[j] == 'o')
			cmessage[j] = 15;
		if (original_message[j] == 'P' || original_message[j] == 'p')
			cmessage[j] = 16;
		if (original_message[j] == 'Q' || original_message[j] == 'q')
			cmessage[j] = 17;
		if (original_message[j] == 'R' || original_message[j] == 'r')
			cmessage[j] = 18;
		if (original_message[j] == 'S' || original_message[j] == 's')
			cmessage[j] = 19;
		if (original_message[j] == 'T' || original_message[j] == 't')
			cmessage[j] = 20;
		if (original_message[j] == 'U' || original_message[j] == 'u')
			cmessage[j] = 21;
		if (original_message[j] == 'V' || original_message[j] == 'v')
			cmessage[j] = 22;
		if (original_message[j] == 'W' || original_message[j] == 'w')
			cmessage[j] = 23;
		if (original_message[j] == 'X' || original_message[j] == 'x')
			cmessage[j] = 24;
		if (original_message[j] == 'Y' || original_message[j] == 'y')
			cmessage[j] = 25;
		if (original_message[j] == 'Z' || original_message[j] == 'z')
			cmessage[j] = 26;
		if (original_message[j] == '-')
			cmessage[j] = 32;

	}

}
void returnCmessage(char original_message[], int cmessage[])
{

	for (int j = 0; j < MAX_SIZE ; j++)
	{

		if (!(cmessage[j] == 0 || cmessage[j] == ENDER))
		{
			cout << "The Letter " << original_message[j] << " Corresponds to " << cmessage[j] << endl;

		}
		if (cmessage[j] == ENDER)
		{
			cout << "And the termination Corresponds to value " << ENDER << endl;

		}

	}

}

char directionChoice()
{
	//variables

	char direction_choice = 'R';


	cout << endl << endl;

	cout << "Do you wish to move the cipher to the left (subtract from corresponding number values)\n"; 
	cout << "Or the right (addition on the corresponding number values)? \n\n";
	cout << "Please type L for left, or R for Right:  ";

	do
	{
		cin >> direction_choice;

		if (!(direction_choice == 'L' || direction_choice == 'R' || direction_choice == 'l' || direction_choice == 'r'))
		{
			cout << endl << "ERROR!!! invalid selection\n\n";
			cout << "Please renter a valid choice!!:   ";

		}
		//remember to remove later when code is done
		if (direction_choice == 'L' || direction_choice == 'l')
		{

			cout << "I haven't coded for the left slide yet.. sorry, gonna force you to take the right side \n\n";

			direction_choice = 'R';


		}
	} while (!(direction_choice == 'L' || direction_choice == 'R' || direction_choice == 'l' || direction_choice == 'r'));


	return direction_choice;

}
/*int getChangeValue(char direction_choice)
{

	""
	//you could loop the doingCipherRight call function if you want to move over multiple directions
	// just do it with the new values

}*/

void doingCipherRight(char original_message[], int cmessage[], char new_message[])
{


	cout << "\n\n\n\nNow the all the letters will move over by one, thus, A now equals B, B now equals C, etc.\n";

	for (int j = 0; cmessage[j] != ENDER; j++)
	{
		if (!(cmessage[j] == ENDER || cmessage[j] == 0 || cmessage[j] == 27 || cmessage[j] == 32))
		{
			cmessage[j] = cmessage[j] + 1;
		}
		//wrap around incase someone enters the letter Z
		if (cmessage[j] == 27)
		{
			cmessage[j] = 1;

		}
		//keeps spaces the same
		if (cmessage[j] == 32)
		{

			cmessage[j] = 32;


		}

	}

	cout << endl << endl << "Now, things should have moved over by one\n\n";

	for (int j = 0; j < MAX_SIZE; j++)
	{

		if (!(cmessage[j] == 0 || cmessage[j] == ENDER))
		{
			cout << "The Letter " << original_message[j] << " Corresponds to " << cmessage[j] << endl;

			

		}
		if (cmessage[j] == ENDER)
		{
			cout << "And the termination Corresponds to value " << ENDER << endl;

		}

	}
	
	//setting new values to letters
	
	for (int p = 0; cmessage[p] != ENDER; p++)
	{
		//I switched to using loop control variable being p

		if (cmessage[p] == ENDER)
		{
			new_message[p] = '%';
			
			cout << endl;
			break;

		}

		//assinging the corresponding letters

		if (cmessage[p] == 1)
			new_message[p] = 'a';
		if (cmessage[p] == 2)
			new_message[p] = 'b';
		if (cmessage[p] == 3)
			new_message[p] = 'c';
		if (cmessage[p] == 4)
			new_message[p] = 'd';
		if (cmessage[p] == 5)
			new_message[p] = 'e';
		if (cmessage[p] == 6)
			new_message[p] = 'f';
		if (cmessage[p] == 7)
			new_message[p] = 'g';
		if (cmessage[p] == 8)
			new_message[p] = 'h';
		if (cmessage[p] == 9)
			new_message[p] = 'i';
		if (cmessage[p] == 10)
			new_message[p] = 'j';
		if (cmessage[p] == 11)
			new_message[p] = 'k';
		if (cmessage[p] == 12)
			new_message[p] = 'l';
		if (cmessage[p] == 13)
			new_message[p] = 'm';
		if (cmessage[p] == 14)
			new_message[p] = 'n';
		if (cmessage[p] == 15)
			new_message[p] = 'o';
		if (cmessage[p] == 16)
			new_message[p] = 'p';
		if (cmessage[p] == 17)
			new_message[p] = 'q';
		if (cmessage[p] == 18)
			new_message[p] = 'r';
		if (cmessage[p] == 19)
			new_message[p] = 's';
		if (cmessage[p] == 20)
			new_message[p] = 't';
		if (cmessage[p] == 21)
			new_message[p] = 'u';
		if (cmessage[p] == 22)
			new_message[p] = 'v';
		if (cmessage[p] == 23)
			new_message[p] = 'w';
		if (cmessage[p] == 24)
			new_message[p] = 'x';
		if (cmessage[p] == 25)
			new_message[p] = 'y';
		if (cmessage[p] == 26)
			new_message[p] = 'z';
		if (cmessage[p] == 32)
			new_message[p] = '-';

	}


}

void displayRightCipher(char new_message[], int cmessage[])
{


	cout << endl << endl << endl;
	cout << "The Scrabbled Message should be: \n\n\n";

	cout << "  \" ";

	for (int j = 0; j < MAX_SIZE; j++)
	{
		if(!(cmessage[j] == ENDER || cmessage[j] == 0 || cmessage[j] == 32))
		{
			cout << new_message[j]; 
		}
		if (cmessage[j] == 32)
		{

			cout << " ";

		}

	}

	cout << "  \" \n\n\n ";

}