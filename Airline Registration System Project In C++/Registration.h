#pragma once
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
void mainMenu();
class Management
{public:
	Management() {
		mainMenu();
	}
};

class Details {
public:
	static string name , gendre;
	int phoneNo;
	int age;
	string add;
	static int cId;
	char arr[100];


	void information(){
		cout << "\nEnter the customer ID: ";
		cin >> cId;
		cout << "\nEnter the name :";
		cin >> name;
		cout << "\n Address :";
		cin >> add;
		cout << "\nEnter the age :";
		cin >> age;
		cout << "\n Gender :";
		cin >> gendre;
		cout << "\nYour details are saved with us\n" << endl;
	}
};
int Details::cId;
string Details::name;
string Details::gendre;

class rogistration {
public:
	static int choice;
	int choice1;
	int back;
	static float charges;
	void flights() {
		string flightN[] = { "Dubai","Egypt","Canada","UK","USA","Australia","Europe" };
		for (int a = 0; a < 7; a++) {
			cout << (a+1) << "flight to" << flightN[a] << endl;
		}
		cout << "\nWelcome to the Airlines!" << endl;
		cout << "Prress ther number of the country of which you want to book the flight:";
		cin >> choice;

		switch (choice) {
		case 1: {
			cout << "_____________________Welcome to  Dubai Emirates______________\n" << endl;
			cout << "Your comfort is our priority. enjoy the journey!" << endl;
			cout << "Following are the flights \n" << endl;
			cout << "1. DUB - 498" << endl;
			cout << "\t08-01-2022 8:00AM 10hrs RS. 14000" << endl;
			cout << "1. DUB - 658" << endl;
			cout << "\t09-01-2022 4:00AM 12hrs RS. 10000" << endl;
			cout << "1. DUB - 508" << endl;
			cout << "\t11-01-2022 11:00AM 11hrs RS. 9000" << endl;

			cout << "\nSeloct the flight you want to book :";
			cin >> choice1;
			if (choice1 == 1) {
				charges = 14000;
				cout << "\nYou have successfully booked the flight dub . 498" << endl;
				cout << "you can go bacl to manu and take the ticket " << endl;
			}
			else if (choice1 == 2) {
				charges = 10000;
				cout << "\nYou have successfully booked the flight dub . 658" << endl;
				cout << "you can go bacl to manu and take the ticket " << endl;
			}
			else if (choice1 == 3) {
				charges = 9000;
				cout << "\nYou have successfully booked the flight dub . 508" << endl;
				cout << "you can go bacl to manu and take the ticket " << endl;
			}
			else {
				cout << "Invalid input , shifting to the previous menu  " << endl;
				flights();
			}

			cout << "Press any key to go to the main menu" << endl;
			cin >> back;
			if (back == 1) {
				mainMenu();
			}
			else {

				mainMenu();

			}
		}
		case 2: {
			cout << "_____________________Welcome to  Egypt Emirates______________\n" << endl;
			cout << "Your comfort is our priority. enjoy the journey!" << endl;
			cout << "Following are the flights \n" << endl;
			cout << "1. EG - 498" << endl;
			cout << "\t08-01-2022 8:00AM 10hrs RS. 14000" << endl;
			cout << "1. EG - 658" << endl;
			cout << "\t09-01-2022 4:00AM 12hrs RS. 10000" << endl;
			cout << "1. EG - 508" << endl;
			cout << "\t11-01-2022 11:00AM 11hrs RS. 9000" << endl;

			cout << "\nSeloct the flight you want to book :";
			cin >> choice1;
			if (choice1 == 1) {
				charges = 14000;
				cout << "\nYou have successfully booked the flight EG . 498" << endl;
				cout << "you can go bacl to manu and take the ticket " << endl;
			}
			else if (choice1 == 2) {
				charges = 10000;
				cout << "\nYou have successfully booked the flight EG . 658" << endl;
				cout << "you can go bacl to manu and take the ticket " << endl;
			}
			else if (choice1 == 3) {
				charges = 9000;
				cout << "\nYou have successfully booked the flight EG . 508" << endl;
				cout << "you can go bacl to manu and take the ticket " << endl;
			}
			else {
				cout << "Invalid input , shifting to the previous menu  " << endl;
				flights();
			}

			cout << "Press any key to go to the main menu" << endl;
			cin >> back;
			if (back == 1) {
				mainMenu();
			}
			else {

				mainMenu();

			}
		}
		case 3: {
			cout << "_____________________Welcome to  Canada Emirates______________\n" << endl;
			cout << "Your comfort is our priority. enjoy the journey!" << endl;
			cout << "Following are the flights \n" << endl;
			cout << "1. CAN - 498" << endl;
			cout << "\t08-01-2022 8:00AM 10hrs RS. 14000" << endl;
			cout << "1. CAN - 658" << endl;
			cout << "\t09-01-2022 4:00AM 12hrs RS. 10000" << endl;
			cout << "1. CAN - 508" << endl;
			cout << "\t11-01-2022 11:00AM 11hrs RS. 9000" << endl;

			cout << "\nSeloct the flight you want to book :";
			cin >> choice1;
			if (choice1 == 1) {
				charges = 14000;
				cout << "\nYou have successfully booked the flight CAN . 498" << endl;
				cout << "you can go bacl to manu and take the ticket " << endl;
			}
			else if (choice1 == 2) {
				charges = 10000;
				cout << "\nYou have successfully booked the flight CAN . 658" << endl;
				cout << "you can go bacl to manu and take the ticket " << endl;
			}
			else if (choice1 == 3) {
				charges = 9000;
				cout << "\nYou have successfully booked the flight CAN . 508" << endl;
				cout << "you can go bacl to manu and take the ticket " << endl;
			}
			else {
				cout << "Invalid input , shifting to the previous menu  " << endl;
				flights();
			}

			cout << "Press any key to go to the main menu" << endl;
			cin >> back;
			if (back == 1) {
				mainMenu();
			}
			else {

				mainMenu();

			}

		}
		case 4: {
			cout << "_____________________Welcome to  UK Emirates______________\n" << endl;
			cout << "Your comfort is our priority. enjoy the journey!" << endl;
			cout << "Following are the flights \n" << endl;
			cout << "1. UK - 498" << endl;
			cout << "\t08-01-2022 8:00AM 10hrs RS. 14000" << endl;
			cout << "1. UK - 658" << endl;
			cout << "\t09-01-2022 4:00AM 12hrs RS. 10000" << endl;
			cout << "1. UK - 508" << endl;
			cout << "\t11-01-2022 11:00AM 11hrs RS. 9000" << endl;

			cout << "\nSeloct the flight you want to book :";
			cin >> choice1;
			if (choice1 == 1) {
				charges = 14000;
				cout << "\nYou have successfully booked the flight UK . 498" << endl;
				cout << "you UK go bacl to manu and take the ticket " << endl;
			}
			else if (choice1 == 2) {
				charges = 10000;
				cout << "\nYou have successfully booked the flight UK . 658" << endl;
				cout << "you can go bacl to manu and take the ticket " << endl;
			}
			else if (choice1 == 3) {
				charges = 9000;
				cout << "\nYou have successfully booked the flight UK . 508" << endl;
				cout << "you can go bacl to manu and take the ticket " << endl;
			}
			else {
				cout << "Invalid input , shifting to the previous menu  " << endl;
				flights();
			}

			cout << "Press any key to go to the main menu" << endl;
			cin >> back;
			if (back == 1) {
				mainMenu();
			}
			else {

				mainMenu();

			}

		}
		case 5: {
			cout << "_____________________Welcome to  USA Emirates______________\n" << endl;
			cout << "Your comfort is our priority. enjoy the journey!" << endl;
			cout << "Following are the flights \n" << endl;
			cout << "1. USA - 498" << endl;
			cout << "\t08-01-2022 8:00AM 10hrs RS. 14000" << endl;
			cout << "1. USA - 658" << endl;
			cout << "\t09-01-2022 4:00AM 12hrs RS. 10000" << endl;
			cout << "1. USA - 508" << endl;
			cout << "\t11-01-2022 11:00AM 11hrs RS. 9000" << endl;

			cout << "\nSeloct the flight you want to book :";
			cin >> choice1;
			if (choice1 == 1) {
				charges = 14000;
				cout << "\nYou have successfully booked the flight USA . 498" << endl;
				cout << "you UK go bacl to manu and take the ticket " << endl;
			}
			else if (choice1 == 2) {
				charges = 10000;
				cout << "\nYou have successfully booked the flight USA . 658" << endl;
				cout << "you can go bacl to manu and take the ticket " << endl;
			}
			else if (choice1 == 3) {
				charges = 9000;
				cout << "\nYou have successfully booked the flight USA . 508" << endl;
				cout << "you can go bacl to manu and take the ticket " << endl;
			}
			else {
				cout << "Invalid input , shifting to the previous menu  " << endl;
				flights();
			}

			cout << "Press any key to go to the main menu" << endl;
			cin >> back;
			if (back == 1) {
				mainMenu();
			}
			else {

				mainMenu();

			}

		}
		case 6: {
			cout << "_____________________Welcome to  Australia Emirates______________\n" << endl;
			cout << "Your comfort is our priority. enjoy the journey!" << endl;
			cout << "Following are the flights \n" << endl;
			cout << "1. Australia - 498" << endl;
			cout << "\t08-01-2022 8:00AM 10hrs RS. 14000" << endl;
			cout << "1. Australia - 658" << endl;
			cout << "\t09-01-2022 4:00AM 12hrs RS. 10000" << endl;
			cout << "1. Australia - 508" << endl;
			cout << "\t11-01-2022 11:00AM 11hrs RS. 9000" << endl;

			cout << "\nSeloct the flight you want to book :";
			cin >> choice1;
			if (choice1 == 1) {
				charges = 14000;
				cout << "\nYou have successfully booked the flight v . 498" << endl;
				cout << "you UK go bacl to manu and take the ticket " << endl;
			}
			else if (choice1 == 2) {
				charges = 10000;
				cout << "\nYou have successfully booked the flight Australia . 658" << endl;
				cout << "you can go bacl to manu and take the ticket " << endl;
			}
			else if (choice1 == 3) {
				charges = 9000;
				cout << "\nYou have successfully booked the flight Australia . 508" << endl;
				cout << "you can go bacl to manu and take the ticket " << endl;
			}
			else {
				cout << "Invalid input , shifting to the previous menu  " << endl;
				flights();
			}

			cout << "Press any key to go to the main menu" << endl;
			cin >> back;
			if (back == 1) {
				mainMenu();
			}
			else {

				mainMenu();

			}

		}
		case 7: {
			cout << "_____________________Welcome to  Europe Emirates______________\n" << endl;
			cout << "Your comfort is our priority. enjoy the journey!" << endl;
			cout << "Following are the flights \n" << endl;
			cout << "1. Europe - 498" << endl;
			cout << "\t08-01-2022 8:00AM 10hrs RS. 14000" << endl;
			cout << "1. Europe - 658" << endl;
			cout << "\t09-01-2022 4:00AM 12hrs RS. 10000" << endl;
			cout << "1. Europe - 508" << endl;
			cout << "\t11-01-2022 11:00AM 11hrs RS. 9000" << endl;

			cout << "\nSeloct the flight you want to book :";
			cin >> choice1;
			if (choice1 == 1) {
				charges = 14000;
				cout << "\nYou have successfully booked the flight Europe. 498" << endl;
				cout << "you UK go bacl to manu and take the ticket " << endl;
			}
			else if (choice1 == 2) {
				charges = 10000;
				cout << "\nYou have successfully booked the flight Europe . 658" << endl;
				cout << "you can go bacl to manu and take the ticket " << endl;
			}
			else if (choice1 == 3) {
				charges = 9000;
				cout << "\nYou have successfully booked the flight Europe . 508" << endl;
				cout << "you can go bacl to manu and take the ticket " << endl;
			}
			else {
				cout << "Invalid input , shifting to the previous menu  " << endl;
				flights();
			}

			cout << "Press any key to go to the main menu" << endl;
			cin >> back;
			if (back == 1) {
				mainMenu();
			}
			else {

				mainMenu();

			}

		}
		default:
		{
			cout << "Invalid input, shifting you to the main menu ! " << endl;
			mainMenu();
			break;
		}

		}
	}
};
float rogistration::charges;
int rogistration::choice;

class ticket : public rogistration, Details
{
public:
	void Bill() {
		string destination = "";
		ofstream outf("records.txt");
		{
			outf << "_________________xyz Airlines_______________" << endl;			outf << "_________________xyz Airlines_______________" << endl;
			outf << "_________________ticket_____________________" << endl;
			outf << "____________________________________________" << endl;


			outf << "Customer ID" << Details::cId << endl;
			outf << "Customer Name" << Details::name << endl;
			outf << "Customer Gender" << Details::gendre << endl;
			outf << "\tDescription" << endl<< endl;

			if (rogistration::choice == 1) {
				destination = "Dunai";
			}
			else if (rogistration::choice == 2) {
				destination = "Egypt";
			}
			else if (rogistration::choice == 3) {
				destination = "Canada";
			}
			else if (rogistration::choice == 4) {
				destination = "UK";
			}
			else if (rogistration::choice == 5) {
				destination = "USA";
			}
			else if (rogistration::choice == 6) {
				destination = "Australia";
			}
			else if (rogistration::choice == 7) {
				destination = "Europe";
			}
			outf << "destination\t\t" << destination << endl;
			outf << "Flight cost :\t\t" << rogistration::charges << endl;

		}
		outf.close();
	}
	void  dispBill() {
		ifstream ifs("records.txt");
		{
			if (!ifs) {
				cout << "File errpr!" << endl;
			}
			while (!ifs.eof()) {
				ifs.getline(arr, 100);
				cout << arr << endl;
			}
			ifs.close();

		}
	}


};




void mainMenu() {

	int lchoice=0;
	int schoice=0;
	int back=0;


	cout << "\t                  XYZ Airlines \n " << endl;
	cout << "\t__________________Main menu______________" << endl;
	cout << "\t_________________________________________" << endl;
	cout << "\t\t\t\t\t\t\t\t" << endl;
	cout << "\t|\t Press 1 to add the customer Details    \t |" << endl;
	cout << "\t|\t Press 2 for Flight Registration        \t |" << endl;
	cout << "\t|\t Press 3 to for Ticket and Charges      \t |" << endl;
	cout << "\t|\t Press 4 to to Exit                     \t |" << endl;
	cout << "\t\t\t\t\t\t\t\t" << endl;
	cout << "\t_________________________________________" << endl;

	cout << "Enter the choice : " << endl;
	cin >> lchoice;
	   
	Details d;
	rogistration r;
	ticket t;


	switch (lchoice)
	{
	case 1:
	{
		cout << "________________Customers______________\n" << endl;
		d.information();
		cout << "Press any key to go back to main menu ";
		if (back == 1)
		{
			mainMenu();

		}
		else
		{
			mainMenu();
		}
		break;

	}
	case 2:
	{
		cout << "_____________Book a flight using this systom__________\n" << endl;
		r.flights();
		break;

	}
	case 3:
	{
		cout << "_____GET YOUR TICKET_____\n" << endl;
		t.Bill();
		cout << "Your ticket is printed , you can collect it \n" << endl;
		cout << "Press 1 to display your ticket ";
		cin >> back;
		if (back == 1) {
			t.dispBill();
			cout << "Press any key  to go back to main menu: ";
			cin >> back;
			if (back == 1) {
				mainMenu();

			}
			else {
				mainMenu();

			}
		}
		else
		{
			mainMenu();
		}
		break;

	}
	case 4:
	{
		cout << "\n\n\t________Thank you________" << endl;
		break;
	}
	default: {
		cout << "Invalid input, Please try again!\n" << endl;
		break;
	}

	}
	

}
