/*
    Aljaily-Abdallah
    Computer Engineering

*/
#include<iostream>
#include<string> // to import and use String library 
using namespace std ;
int main()
{    string  section , dgree , Class , name; // variable  String
	int score , ID ;  //  ID integer
	cout<<"Enter Your Name : "; // Dislapy A message on screen 
	cin>>name; 
	cout<<"Enter Your ID : "; cin >> ID ; // Enter student ID
	cout<<"choose A or C or T "<<endl;
	cin >> section ; // choose department
	if (section == "A") // compare deparment
	{
		Class = "Control"; // class Control
	}
	else if (section == "T") {
		Class = "Communication"; // class  Communication
	}
	else if (section == "C"){
		Class = "computer Engneering" ;
	}
    else {
        class = "Not Found";
    }
	cout<<"Enter Your Score : "; cin >> score ; //student Score
	switch(score) // check if score between 90 and 100
	{
	case 90 ... 100 :
	 dgree = "A";
	 break ;
	case 80 ... 89 :
	 dgree = "B";	
	 break ;
	case 70 ... 79 :
	 dgree = "C";
	 break ;
	case 60 ... 69 :
	 dgree = "D";
	 break ;
	case 50 ... 59 : 
	dgree = "F";
	break ;
	default :
	cout << "Invalid Score" ;
	}
	cout<< "\n"<<"Student Information "<<"\n";
	// Show all information that doctor Entered 
	cout << "Name : "<< name << "\n"<<"ID : "<< ID << "\n"<<"Department : "<< Class << "\n"<<"Dgree : "<< dgree << endl ;
    
	return 0;
}