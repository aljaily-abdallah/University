/*
    Aljaily-Abdallah
    Computer Engineering

*/
#include<iostream>
#include<string> // to import and use String library 
using namespace std ;
int main()
{  
	char classment [10] , dgree[10] ; 
	int everage[10] , dgrees = 0 , ID [10],material [8];
	string stop , student [10] ,  Class [10]; //Array of a numbers of Students and classment
	string materials [8] = {"English :","Arabic :","Isalim :","Chemical :","Physics : ","Accountent : ","Security :","IT: "};
	
	do{
	
	for ( int i = 0; i < 10; i++) // for loop to Enter information of Students
	{
	cout<<"Enter Student Name : "; //Students name
	    cin >> student[i] ;  
	cout<<"Enter Student ID : "; // ask  to Enter Student ID
		cin >> ID[i] ;
	cout<<"Select : A or T or C Class .....";
		cin >> classment[i] ; // For input the Section
	if (classment[i] == 'A')
	{ 
		Class[i] = "Control"; //  A class will be Control
	} 
	else if (classment[i] == 'T')
	{
		Class[i] = "Communication"; // here if user input something else class will be Communication
	}
	else if(classment[i] == 'C')
	{
		Class [i] = "computer Engneering" ;
	}
	cout<<" Enter Score Of Material"<<endl;
		for ( int j = 0; j < 8; j++) //for loop to Entered score of 8 Materails 
	{
		cout<<materials[j];
		cin>>material[j];
	}
		for(int k = 0 ; k<8;k++)
		{
		dgrees += material[k]; //dgrees = the Sum of all Materials
		}
		for (int i = 0; i < 10; i++)
		{
		everage[i] = dgrees/8 ; //Everage of Materails
		}
		switch(everage[i])
		{
		case 90 ... 100 :
		dgree[i] = 'A';
		break ;
		case 80 ... 89 :
		dgree[i] = 'B'; 
		break ;
		case 70 ...79 :
		dgree [i]= 'C';
		break ;
		case 60 ... 69 :
		dgree [i]= 'D';
		break ;
		case 50 ... 59 : 
		dgree [i]= 'F';
		break ;
		default :
		dgree [i]= 'N' ;
	    }

	}	
	cout<< "\n"<<"        Information        "<<"\n";
	
	for (int i = 0; i <= 10; i++)
	{
	    cout <<"Name :"<< student[i] <<"\t"<<"ID: "<<ID[i]<<"\t"<<"Department: "<< Class [i]<<"\t"<<"Everage: "<<everage[i]<<"\t"<<"Dgree: "<< dgree[i]<<endl;
	}
    
	cout<<"Enter 'y' to Exit! or 'n' to Continue... "<<endl;cin >> stop ;

	}while ( stop != "y" );

	return 0;

}
