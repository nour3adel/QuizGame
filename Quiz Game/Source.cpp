#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
using namespace std;
void clean();
void storeScore(int h);
void viewUsername();
void viewScore();
void storeUsername();
struct tool
{
	string name;
	string score;
	int test;
	int count;
};
int main()
{
	int arr[3] = { 1,2,3 };
	tool x, y;
	x.test = 0;
	y.count = 0;
	while (1)
	{
		int field, high = 0;
		cout << "*Welcome to the Quiz Game*" << endl << flush;
		clean();

		if (y.count == 0)
			storeUsername();
		else
			viewUsername();

		cout << "Please choose the field." << endl;
		cout << "For Science, press 1" << endl;
		cout << "For Sports, press 2" << endl;
		cout << "For Movies, press 3" << endl;
		cout << "For checking your Highscore or resetting it, press any other number" << endl;
		cin >> field;
		cout << flush;
		clean();
		if (field == 1) {

			int ans1, money = 0;
			//This is the first question(First Field);
			cout << "Welcome to field number : " << arr[0] << endl << flush;
			clean();
			cout << "First question: " << endl;
			cout << "What is the largest organ in the human body ?" << endl;
			cout << "1- The Heart" << endl << "2- The Liver" << endl << "3- The Skin" << endl << "4- The Stomach" << endl;
			cin >> ans1;
			if (ans1 == 3)
			{
				high++;
				money += 200;
				cout << "Correct! You have won " << money << " pounds!" << endl << flush;
				clean();
			}
			else
			{
				cout << "Wrong Answer, better luck next question" << endl << flush;
				clean();
			}
			//This is the second question(First Field);
			cout << "Second question: " << endl;
			cout << "An unlit match has what form of energy ?" << endl;
			cout << "1- electric energy" << endl << "2- Kinetic energy" << endl << "3- Potential energy" << endl << "4- Chemical energy" << endl;
			cin >> ans1;
			if (ans1 == 4)
			{
				high++;
				money += 200;
				cout << "Correct! Your total is now " << money << " pounds!" << endl << flush;
				clean();
			}
			else
			{
				cout << "Wrong Answer, better luck next question" << endl << flush;
				clean();
			}

			//This is the third question(First Field);
			cout << "Third question: " << endl;
			cout << "What is the hottest planet in the solar system ?" << endl;
			cout << "1- Venus" << endl << "2- Earth" << endl << "3- Jupiter" << endl << "4- Mars" << endl;
			cin >> ans1;
			if (ans1 == 1)
			{
				high++;
				money += 200;
				cout << "Correct! You are a smart person:) and your total is " << money << " pounds!" << endl << flush;
				clean();
			}
			else
			{
				cout << "Wrong Answer, better luck next question" << endl << flush;
				clean();
			}

			//This is the fourth question(First Field);
			cout << "Fourth question: " << endl;
			cout << "How long does a human red blood cell survive ?" << endl;
			cout << "1- 15 days" << endl << "2- 45 days" << endl << "3- 120 days" << endl << "4- 100 days" << endl;
			cin >> ans1;
			if (ans1 == 3)
			{
				high++;
				money += 200;
				cout << "Correct! You have won a total of " << money << " pounds!" << endl;
				cout << "And your score is :" << high << "/4" << endl << flush;
				clean();
			}
			else
			{
				cout << "Wrong Answer, your total winnings is " << money << " pounds!" << endl;
				cout << "And your score is :" << high << "/4" << endl << flush;
				clean();
			}
			if (high >= x.test) {
				x.test = high;
			}
			storeScore(x.test);
		}
		else if (field == 2) {
			int ans1, money = 0;

			//This is the first question(Second Field);
			cout << "Welcome to field number : " << arr[1] << endl << flush;
			clean();
			cout << "First question: " << endl;
			cout << "Which coutry's national team was the winner of the first world cup ?" << endl;
			cout << "1- Brazil" << endl << "2- Uruguay" << endl << "3- Germany" << endl << "4- England" << endl;
			cin >> ans1;
			if (ans1 == 2)
			{
				high++;
				money += 200;
				cout << "Correct! You have won " << money << " pounds!" << endl << flush;
				clean();
			}
			else
			{
				cout << "Wrong Answer, better luck next question" << endl << flush;
				clean();
			}
			//This is the second question(Second Field);
			cout << "Second question: " << endl;
			cout << "Who is the most scoring Arabic player in the English Premier League ?" << endl;
			cout << "1- Riyad Mahrez" << endl << "2- Hakim Ziyech" << endl << "3- Mohammed Salah" << endl << "4- Achraf Hakimi" << endl;
			cin >> ans1;
			if (ans1 == 3)
			{
				high++;
				money += 200;
				cout << "Correct! Your total is now " << money << " pounds!" << endl << flush;
				clean();
			}
			else
			{
				cout << "Wrong Answer, better luck next question" << endl << flush;
				clean();
			}

			//This is the third question(Second Field);
			cout << "Third question: " << endl;
			cout << "Who is the greatest boxer of all time ?" << endl;
			cout << "1- Mohammed Ali" << endl << "2- Joe Frazier" << endl << "3- Floyd Mayweather" << endl << "4- Manny Pacquiao" << endl;
			cin >> ans1;
			if (ans1 == 1)
			{
				high++;
				money += 200;
				cout << "Correct! You know a thing or two about sports(; and your total is " << money << " pounds!" << endl << flush;
				clean();
			}
			else
			{
				cout << "Wrong Answer, better luck next question" << endl << flush;
				clean();
			}

			//This is the fourth question(Second Field);
			cout << "Fourth question: " << endl;
			cout << "Who won the European Ballon d'or most times ?" << endl;
			cout << "1- Cristiano Ronaldo" << endl << "2- Roberto Carlos" << endl << "3- Ronaldinho" << endl << "4- Lionel Messi" << endl;
			cin >> ans1;
			if (ans1 == 4)
			{
				high++;
				money += 200;
				cout << "Correct! You have won a total of " << money << " pounds!" << endl;
				cout << "And your score is :" << high << "/4" << endl << flush;
				clean();
			}
			else
			{
				cout << "Wrong Answer, your total winnings is " << money << " pounds!" << endl;
				cout << "And your score is :" << high << "/4" << endl << flush;
				clean();
			}
			if (high >= x.test) {
				x.test = high;
			}
			storeScore(x.test);

		}
		else if (field == 3) {
			int ans1, money = 0;

			//This is the first question(Third Field);
			cout << "Welcome to field number : " << arr[2] << endl << flush;
			clean();
			cout << "First question: " << endl;
			cout << "One of these actors is an Academy award(Oscar) winner, which is he ?" << endl;
			cout << "1- Johnny Depp" << endl << "2- Brad Pitt" << endl << "3- Tom Cruise" << endl << "4- Chris Pratt" << endl;
			cin >> ans1;
			if (ans1 == 2)
			{
				high++;
				money += 200;
				cout << "Correct! You have won " << money << " pounds!" << endl << flush;
				clean();
			}
			else
			{
				cout << "Wrong Answer, better luck next question" << endl << flush;
				clean();
			}
			//This is the second question(Third Field);
			cout << "Second question: " << endl;
			cout << "Who was the director of this movie : The Prestige ?" << endl;
			cout << "1- Zack Snyder" << endl << "2- Martin Scorcese" << endl << "3- Christopher Nolan" << endl << "4- David Fincher" << endl;
			cin >> ans1;
			if (ans1 == 3)
			{
				high++;
				money += 200;
				cout << "Correct! Your total is now " << money << " pounds!" << endl << flush;
				clean();
			}
			else
			{
				cout << "Wrong Answer, better luck next question" << endl << flush;
				clean();
			}

			//This is the third question(Third Field);
			cout << "Third question: " << endl;
			cout << "Which actress played the role of Hermione Granger in the Harry Potter movie series ?" << endl;
			cout << "1- Emily Blunt" << endl << "2- Zoe Saldana" << endl << "3- Zendaya" << endl << "4- Emma Watson" << endl;
			cin >> ans1;
			if (ans1 == 4)
			{
				high++;
				money += 200;
				cout << "Correct! You know your movies:) and your total is " << money << " pounds!" << endl << flush;
				clean();
			}
			else
			{
				cout << "Wrong Answer, better luck next question" << endl << flush;
				clean();
			}

			//This is the fourth question(Third Field);
			cout << "Fourth question: " << endl;
			cout << "Which movie in this list is the higest grossing film of all time ?" << endl;
			cout << "1- Avatar" << endl << "2- Avengers Endgame" << endl << "3- Titanic" << endl << "4- The Dark Knight" << endl;
			cin >> ans1;
			if (ans1 == 1)
			{
				high++;
				money += 200;
				cout << "Correct! You have won a total of " << money << " pounds!" << endl;
				cout << "And your score is :" << high << "/4" << endl << flush;
				clean();
			}
			else
			{
				cout << "Wrong Answer, your total winnings is " << money << " pounds!" << endl;
				cout << "And your score is :" << high << "/4" << endl << flush;
				clean();
			}
			if (high >= x.test) {
				x.test = high;
			}
			storeScore(x.test);
		}
		y.count++;
		cout << "Press 1 to show highscore and end" << endl;
		cout << "Press 2 to show highscore and start again" << endl;
		cout << "Press 3 to reset highscore and start agian" << endl;
		cout << "Press 4 to start again" << endl;
		cout << "Press 5 to end" << endl;
		int Last;
		cin >> Last;
		if (Last == 1) {
			viewScore();
			cout << "Thank you for playing our Quiz game (:" << endl;
			break;
		}
		else if (Last == 2) {
			viewScore();
		}
		else if (Last == 3) {
			x.test = 0;
			storeScore(0);
			cout << "Your Highscore is now reset to 0/4" << endl << flush;
			clean();
		}
		else if (Last == 4) {
			cout << "Let's begin !" << endl << flush;
			clean();
		}
		else if (Last == 5) {
			cout << "Thank you for playing our Quiz game (:" << endl;
			break;
		}

	}
	return 0;
}

void clean()
{
	system("PAUSE");
	system("CLS");
}

void storeScore(int h)
{
	ofstream output;
	output.open("highscore.txt");
	output << h << "/4" << endl;
	output.close();
}

void viewUsername()
{
	string s;
	ifstream readName;
	readName.open("username.txt");
	getline(readName, s);
	cout << "Hello " << s << endl << flush;
	clean();
}

void viewScore()
{
	tool s;
	ifstream show;
	show.open("highscore.txt");
	getline(show, s.score);
	cout << "Your Highscore = " << s.score << endl << flush;
	clean();

}

void storeUsername()
{
	cout << "Please Enter your name: " << endl;
	tool x;
	getline(cin, x.name);
	ofstream nameoutput;
	nameoutput.open("username.txt");
	nameoutput << "User : " << x.name << endl;
	nameoutput.close();
	cout << "Hello User : " << x.name << endl << flush;
	clean();
}
