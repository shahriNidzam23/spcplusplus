#include <iostream>
#include <string>
using namespace std;

//function prototype
void addRecord();
void deleteRecord();
void searchRecord();
void editRecord();
void displayRecord();
void backFunction();

//struct declaration
struct detail {
	long id;
	string name;
	string category;
	string location;
	string date;
	string language;
};

//variable declaration
detail dat[10];
int i = 0, num;
char back;
bool k;
int opt;

//main menu
int main (){
	do{
		k = true;
		
		//Main menu interface
		cout <<"\t"<<"\t"<< "ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿" << endl;
	    cout <<"\t"<<"\t"<< "þþþþ   WELCOME TO THE LIBRARY BOOKS RECORD     þþþþ" << endl;
	    cout <<"\t"<<"\t"<< "ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ" << endl << endl;
	        
	    cout <<"\t"<< "\t"<<  "ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿" << endl;
		cout <<"\t"<< "\t"<<  "³       1. Input New Record        ³" << endl;
		cout <<"\t"<< "\t"<<  "³       2. Delete Record           ³" << endl;
		cout <<"\t"<< "\t"<<  "³       3. Search Record           ³" << endl;
		cout <<"\t"<< "\t"<<  "³       4. Edit Record             ³" << endl;
	    cout <<"\t"<< "\t"<<  "³       5. Display All Record      ³" << endl;
		cout <<"\t"<< "\t"<<  "³       6. Quit                    ³" << endl;
		cout <<"\t"<< "\t"<<  "ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ" << endl;
		cout <<"\t"<< "\t"<<            "Enter option: ";
		cin >> opt;
	
		switch(opt){
			case 1:
				addRecord();
				break;
			case 2:
				deleteRecord();
				break;
			case 3:
				searchRecord();
				break;
			case 4:
				editRecord();
				break;
			case 5:
				displayRecord();
				break;
			case 6:
				return 0;
				break;
			default:
			cout << "Not Valid";
			break;
		}
	} while(opt !=0);
}

void addRecord(){
	system("CLS");
			do{
				//Input interface
				cout <<"\t"<<"\t"<<"\t"<< "ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿" << endl;
	            cout <<"\t"<<"\t"<<"\t"<< "þþþþ   NEW BOOK DETAILS    þþþþ" << endl;
	            cout <<"\t"<<"\t"<<"\t"<< "ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ" << endl << endl << endl;
				
				//Input record
				cout << "Enter Book Id: ";
				cin >> dat[i].id;
				cout << "Enter Book Name: ";
				cin >> dat[i].name;
				cout << "Enter Book Category: ";
				cin >> dat[i].category;
				cout << "Enter Book Language: ";
				cin >> dat[i].language;
				cout << "Enter Book Location: ";
				cin >> dat[i].location;
				cout << "Enter Book Entry Date(dd/mm/yy): ";
				cin >> dat[i].date;
				cout<< endl << endl;
				
				//New record confirmation
				cout << " Enter new record(Y or N): ";
				
				cin >> back;
				
				
				//Back function
				if(back == 'Y' || back == 'y'){
				system("CLS"); 
				i = i + 1;
				} else if(back == 'N' || back == 'n') {
					i = i + 1;
					system("CLS");
					k = false;
				}
				
			}while(k == true);
}

void deleteRecord(){
	system("CLS");
	
		        //Delete interface
				cout <<"\t"<<"\t"<<"\t"<< "ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿" << endl;
	            cout <<"\t"<<"\t"<<"\t"<< "þþþþ    DELETE A RECORD    þþþþ" << endl;
	            cout <<"\t"<<"\t"<<"\t"<< "ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ" << endl << endl;
	
	//Display all record
	for(int a=0;a<10;a++){
		
		//Break loop if no value in array
		if(dat[a].name == ""){
			break;
		} else {
			int b = a + 1;
			cout <<"\t" << "ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿" << endl;
			cout <<"\t" << "³#" << b <<  " " << "Record   " << "                    "<<"³"     << endl;
			cout <<"\t" << "ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ" << endl;
			cout <<"\t"<< "Book Id: " << dat[a].id << endl;
			cout <<"\t"<< "Book Name: " << dat[a].name << endl;
			cout <<"\t"<< "Book Category: " << dat[a].category << endl;
			cout <<"\t"<< "Book Language: " << dat[a].language << endl;
			cout <<"\t"<< "Book Location: " << dat[a].location << endl;
			cout <<"\t"<< "Book Entry Date: " << dat[a].date << endl;
			cout << endl;
		}
	}
	
	cout << endl;
	
	//User input for delete
	cout <<"\t"<< "Enter Number of Record to Delete: ";
	cin >> num;
	cout<< endl << endl;
	num = num - 1;

	//Delete data in array
	for(int j = num; j<10; j++){
			//Clear data in 9th index of array
			if(j == 9){
				dat[j].id = 0;
				dat[j].name = "";
				dat[j].category = "";
				dat[j].language = "";
				dat[j].location = "";
				dat[j].date = "";
			} else {
				//Replace deleted data in array
				dat[j].id = dat[j + 1].id;
				dat[j].name = dat[j + 1].name;
				dat[j].category = dat[j + 1].category;
				dat[j].language = dat[j + 1].language;
				dat[j].location = dat[j + 1].location;
				dat[j].date = dat[j + 1].date;
			}
		//}
	}
		
	//Shows confirmation updated message
	cout <<"\t" << "ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿" << endl;
	cout <<"\t" << "³ Your Record Has Been Updated ! ³" << endl;
	cout <<"\t" << "ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ" << endl << endl;
	cout<< endl << endl;
	backFunction();
	
	
}

void searchRecord(){
	string type, input, c;
	int b;
	
	system("CLS");
	            //Search Interface
				cout <<"\t"<<"\t"<<"\t"<< "ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿" << endl;
	            cout <<"\t"<<"\t"<<"\t"<< "þþþþ     SEARCH RECORD     þþþþ" << endl;
	            cout <<"\t"<<"\t"<<"\t"<< "ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ" << endl << endl;
	
	//User choose record type to search	
	cout <<"\t" << "Search Record By:- " << endl << endl;
	cout <<"\t" <<"1. Id" << endl;
	cout <<"\t" <<"2. Name" << endl;
	cout <<"\t" <<"3. Category" << endl;
	cout <<"\t" <<"4. Language" << endl;
	cout <<"\t" <<"5. Location" << endl;
	cout <<"\t" <<"6. Entry Date" << endl << endl;
	cout <<"\t" <<"Enter option: ";
	cin >> opt;
	
	
	//To identify record type
	switch(opt){
		case 1:
			type = "Id";
			break;
		case 2:
			type = "Name";
			break;
		case 3:
			type = "Category";
			break;
		case 4:
			type = "Language";
			break;
		case 5:
			type = "Location";
			break;
		case 6:
			type = "Entry Date";
			break;
		default:
			cout << "Not Valid";
			break;
	}
	
	cout << endl <<"\t"<< "Enter Book " << type << ":" ;
	cin >> input;
	cout << endl ;
	
	for(int j=0; j<10; j++){
		
		//To identifiy record location
		switch(opt){
		case 1:
			c = dat[j].id;
			break;
		case 2:
			c = dat[j].name;
			break;
		case 3:
			c = dat[j].category;
			break;
		case 4:
			c = dat[j].language;
			break;
		case 5:
			c = dat[j].location;
			break;
		case 6:
			c = dat[j].date;
			break;
		default:
			cout << "Not Valid";
			break;
		}
		
		
		if(input == c){
			
			b = j + 1;
			cout <<"\t" << "ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿" << endl;
			cout <<"\t" << "³#" << b <<  " " << "Record   " << "   "<<"³"     << endl;
	    	cout <<"\t" << "ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ" << endl ;
	    	
			//Show all record which shares same record name
	    	cout <<"\t" << "Book Id: " << dat[j].id << endl;
			cout <<"\t" << "Book Name: " << dat[j].name << endl;
			cout <<"\t" << "Book Category: " << dat[j].category << endl;
			cout <<"\t" << "Book Language: " << dat[j].language << endl;
			cout <<"\t" << "Book Location: " << dat[j].location << endl;
			cout <<"\t" << "Book Entry Date: " << dat[j].date << endl;
			cout << endl;
		}
		
	}
	
	backFunction();	
}

void editRecord(){
	system("CLS");
	            //Edit Interface
				cout <<"\t"<<"\t"<<"\t"<< "ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿" << endl;
	            cout <<"\t"<<"\t"<<"\t"<< "þþþþ      EDIT RECORD      þþþþ" << endl;
	            cout <<"\t"<<"\t"<<"\t"<< "ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ" << endl << endl << endl;
	
	
	for(int a=0;a<10;a++){
		
		//Break loop if no value in array
		if(dat[a].name == ""){
			break;
		} else {
			//Shows all record
			int b = a + 1;
			cout <<"\t" << "ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿" << endl;
			cout <<"\t" << "³#" << b <<  " " << "Record   " << "   "<<"³"     << endl;
		    cout <<"\t" << "ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ" << endl ;
		    cout <<"\t" "Book Id: " << dat[a].id << endl;
			cout <<"\t" "Book Name: " << dat[a].name << endl;
			cout <<"\t" "Book Category: " << dat[a].category << endl;
			cout <<"\t" "Book Language: " << dat[a].language << endl;
			cout <<"\t" "Book Location: " << dat[a].location << endl;
			cout <<"\t" "Book Entry Date: " << dat[a].date << endl;
			cout << endl;			
		}	
	}
	
	cout << endl;
	
	//User choose which record to edit
	cout <<"\t" << "Enter Number of Record to Edit: ";
	cin >> num;
	cout << endl;
	
	//To locate number of array index
	num = num - 1;
	
	if(num < 10){
		system("CLS");
		cout << endl;
		cout <<"\t" << "ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿" << endl;
	    cout <<"\t" << "³Please enter the updated information of the book records³"<< endl;
		cout <<"\t" << "ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ" << endl; 
        cout << endl << endl;
        
		//Shows existing record data for user to avoid confusion
		cout <<"\t" <<"Existing Book Id: " << dat[num].id << endl;	
		cout <<"\t" <<"Existing Book Name: " << dat[num].name << endl;				
        cout <<"\t" <<"Existing Book Category: " << dat[num].category << endl;
		cout <<"\t" <<"Existing Book Language: " << dat[num].language << endl;			   
        cout <<"\t" <<"Existing Book Location: " << dat[num].location << endl;	
		cout <<"\t" <<"Existing Book Entry Date(dd/mm/yy): " << dat[num].date << endl;
		cout<< endl;
		
		//User choose record type to edit
		cout <<"\t" << "Edit Record By:- " << endl << endl;
		cout <<"\t" << "1. Id" << endl;
		cout <<"\t" << "2. Name" << endl;
		cout <<"\t" << "3. Category" << endl;
		cout <<"\t" << "4. Language" << endl;
		cout <<"\t" << "5. Location" << endl;
		cout <<"\t" << "6. Entry Date" << endl << endl;
		cout <<"\t" << "Enter option: ";
		cin >> opt;
		cout << endl ;
		
		//User edit the record
		switch(opt){
		case 1:
			cout<<"\t"<<"Enter Book Id: ";
			cin >> dat[num].id;
			break;
		case 2:
			cout<<"\t"<<"Enter Book Name: ";
			cin >> dat[num].name;
			break;
		case 3:
			cout<<"\t"<<"Enter Book Category: ";
			cin >> dat[num].category;
			break;
		case 4:
			cout<<"\t"<<"Enter Book Language: ";
			cin >> dat[num].language;
			break;
		case 5:
			cout<<"\t"<<"Enter Book Location: ";
			cin >> dat[num].location;
			break;
		case 6:
			cout<<"\t"<<"Enter Book Entry Date: " ;
			cin >> dat[num].date;
			break;
		default:
			cout <<"\t"<< "Not Valid" << endl;
			break;
	}
		//Message shows record has been updated
		cout << endl;
		cout <<"\t" << "ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿" << endl;
		cout <<"\t" << "³ Your Record Has Been Updated ! ³" << endl;
		cout <<"\t" << "ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ" << endl << endl;
		backFunction();
	} else {
	  cout <<"\t" << "Invalid" << endl;
	}
}

void displayRecord(){
	system("CLS");
	cout << endl;
				//Display interface
	            cout <<"\t"<<"\t"<<"\t"<< "ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿" << endl;
	            cout <<"\t"<<"\t"<<"\t"<< "þþþþ    DISPLAY ALL RECORD    þþþþ" << endl;
	            cout <<"\t"<<"\t"<<"\t"<< "ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ" << endl << endl << endl;
	
	//Show all record
	for(int a=0;a<10;a++){
		
		//Break loop if array holds no value
		if(dat[a].name == ""){
			break;
		} else {
			int b = a + 1;
			cout <<"\t" << "ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿" << endl;
			cout <<"\t" << "³#" << b <<  " " << "Record   " << "   "<<"³"     << endl;
		    cout <<"\t" << "ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ" << endl ;
		    cout <<"\t"<< "Book Id: " << dat[a].id <<endl;
			cout <<"\t"<< "Book Name: " << dat[a].name <<endl;
			cout <<"\t"<< "Book Category: " << dat[a].category <<endl;
			cout <<"\t"<< "Book Language: " << dat[a].language <<endl;
			cout <<"\t"<< "Book Location: " << dat[a].location <<endl;
			cout <<"\t"<< "Book Entry Date: " << dat[a].date << endl;
		
			cout << endl;		
		}
	}
	
	cout << endl;	
	backFunction();
}

//Back function for all menu to back to main menu
void backFunction(){
	cout << "Back(Y): ";
	cin >> back;
		
		if(back == 'Y' || back == 'y'){
			system("CLS");
		} else {
			cout << "Not Valid";
		}
}
