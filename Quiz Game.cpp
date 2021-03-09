#include <iostream>
#include <windows.h>
#include <conio.h>
#include <cstdlib>
#include <string>
#include <fstream>
using namespace std;

int main();
char name[20];
bool ask[10] = {true , true , true , true, true , true , true , true , true };
int correct=0;
int wrong=0;
void score();
int points=1;
void startgame();
void storedscores();
void color(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
}
void arrow_keys(int x, int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
void Logo(){
cout<<"\t\t\t\t\t\t**************\n\t\t\t\t\t\t* C++ Quiz Game *\n\t\t\t\t\t\t**************\n\n";
cout<<"\t\t\t\t\t\t##############\n\t\t\t\t\t\t* By Mustafa *\n\t\t\t\t\t\t##############\n\n";
	    cout<<"\n\t\t\t\tUSE ARROW KEYS FOR SWITCHING BETWEEN OPTIONS";
}
void easy()
{
	system("cls");
	int answer;
	bool is_question_remaining = true;
	int escape;

    while(is_question_remaining)
    {
    	 is_question_remaining = false;
    for(int i=0; i<10; i++)
    {
        if(ask[i])
        {
            is_question_remaining = true;
            break;
        }
        
    }
    	
        int no = rand() % 10+0;
        if(ask[no])
        {
        ask[no] = false;
    	switch(no)
            {
            case 0 :
                cout<<"================================================================================================="
                <<endl<<"================================================================================================="
				<<endl<<"\t\t\tWhich operator has more precedance  in below list?\n\t\t\t1.+\n\t\t\t2.-\n\t\t\t3.++\n\t\t\t4.*\n"
				<<endl<<"================================================================================================="
				<<endl<<"================================================================================================= ";
                cin>>answer;
                if(answer==2)
                {
                	cout<<"\t\t\tCORRECT\n";
                	correct++;
                	points=correct*2;
                	system("pause");
					system("cls");
				}
				else
				{
					cout<<"\t\t\t\tWRONG\n";
					wrong++	;
					system("pause");
					system("cls");
				}
                         break;
            case 1 :
                cout<<"===========================================================================================\n"
				<<endl<<"==========================================================================================="
				<<endl<<"\t\t\tWhat is a variable?\n\t\t\t1.A empty container in which we store data\n\t\t\t2.box\n\t\t\t3.Data type\n\t\t\t4.language\n"
				<<endl<<"=========================================================================================="
				<<endl<<"=========================================================================================== ";
                cin>>answer;
                if(answer==3)
                {
                	cout<<"\t\t\t\tCORRECT\n";
                	correct++;
                	points=correct*2;
                	system("pause");
					system("cls");
				}
				else
				{
					cout<<"\t\t\t\tWRONG\n";
					wrong++;
					system("pause");
					system("cls");
				}
                         break;
            case 2 :
                cout<<"=========================================================================================="
                <<endl<<"==========================================================================================="
				<<endl<<"\t\t\tWhich language circuit simulation Programming Technique?\n\t\t\t1.Assembly language\n\t\t\t2.C++ language\n\t\t\t3.Matlab language\n\t\t\t4.Fortran Language\n"
				<<endl<<"=========================================================================================="
				<<endl<<"=========================================================================================== ";
                cin>>answer;
                if(answer=2)
                {
                	cout<<"\t\t\t\tCORRECT\n";
                	correct++;
                	points=correct*2;
                	system("pause");
					system("cls");
				}
				else
				{
					cout<<"\t\t\t\tWRONG\n";
					wrong++;
					system("pause");
					system("cls");
				}
                         break;
        	case 3 :
        		cout<<"=================================================================================================="
        		<<endl<<"================================================================================================="
				<<endl<<"\t\t\twho is creator of c++\n\t\t\t1.charles babbage\n\t\t\t2.james bond\n\t\t\t3.bjourne stroustrap\n\t\t\t4.bill gates\n"
				<<endl<<"================================================================================================="
				<<endl<<"================================================================================================= ";
        		cin>>answer;
        		if(answer==3)
				{
					cout<<"\t\t\t\tCORRECT\n";
        			correct++;
        			points=correct*2;
        			system("pause");
					system("cls");
				}
				else{
					cout<<"\t\t\t\tWRONG\n";
					wrong++;
					system("pause");
					system("cls");
				}
				break;
			case 4:
				cout<<"================================================================================================="
				<<endl<<"================================================================================================="
				<<endl<<"\t\t\tCan any function call itself?\n\t\t\t1.No\n\t\t\t2.Yes\n\t\t\t3.compilation error\n\t\t\t4.Runtime Error\n"
				<<endl<<"================================================================================================="
				<<endl<<"================================================================================================= ";
				cin>>answer;
				if(answer==2)
				{
					cout<<"\t\t\t\tCORRECT\n";
					correct++;
					points=correct*2;
					system("pause");
					system("cls");
				}
				else
				{
					cout<<"\t\t\t\tWRONG\n";
					wrong++;
					system("pause");
					system("cls");
				}
				break;
			case 5:
				cout<<"================================================================================================="
				<<endl<<"================================================================================================="
				<<endl<<"\t\t\tWhat is size of void in bytes?\n\t\t\t1.1byte\n\t\t\t2.2bytes\n\t\t\t3.3bytes\n\t\t\t4.4bytes\n"
				<<endl<<"================================================================================================="
				<<endl<<"================================================================================================= ";
				cin>>answer;
				if(answer == 2)
				{
					cout<<"\t\t\t\tCORRECT\n";
					correct++;
					points=correct*2;
					system("pause");
					system("cls");
				}
				else
				{
					cout<<"\t\t\t\tWRONG\n";
					wrong++;
					system("pause");
					system("cls");
				}
				break;
				
			case 6:
				cout<<"================================================================================================="
				<<endl<<"================================================================================================="
				<<endl<<"\t\t\tWhich operator can not be overloaded?\n\t\t\t1.+\n\t\t\t2.-\n\t\t\t3.++\n\t\t\t4.::\n"
				<<endl<<"================================================================================================="
				<<endl<<"================================================================================================= ";
				cin>>answer;
				if(answer == 1)
				{
					cout<<"\t\t\t\tCORRECT\n";
					correct++;
					points=correct*2;
					system("pause");
					system("cls");
				}
				else
				{
					cout<<"\t\t\t\tWRONG\n";
					wrong++;
					system("pause");
					system("cls");
				}
				break;
			case 7:
				cout<<"================================================================================================="
				<<endl<<"================================================================================================="
				<<endl<<"\t\t\tCan a for loop contain another for loop?\n\t\t\t1.Yes\n\t\t\t2.No\n\t\t\t3.compilation Error\n\t\t\t4.Runtime Error\n"
				<<endl<<"================================================================================================="
				<<endl<<"================================================================================================= ";
				cin>>answer;
				if(answer==1)
				{
					cout<<"\t\t\t\tCORRECT\n";
					correct++;
					points=correct*2;
					system("pause");
					system("cls");
				}
				else
				{
					cout<<"\t\t\t\tWRONG\n";
					wrong++;
					system("pause");
					system("cls");
				}
			case 8:
				cout<<"================================================================================================="
				<<endl<<"================================================================================================="
				<<endl<<"\t\t\tWhat is the full form of OOP?\n\t\t\t1.Object oriented process\n\t\t\t2.Object observation Programming\n\t\t\t3.Object oriented programming\n\t\t\t4.Office objective Programming\n"
				<<endl<<"================================================================================================="
				<<endl<<"================================================================================================= ";
				cin>>answer;
				if(answer==3)
				{
					cout<<"\t\t\t\tCORRECT\n";
					correct++;
					points=correct*2;
					system("pause");
					system("cls");
				}
				else
				{
					cout<<"\t\t\t\tWRONG\n";
					wrong++;
					system("pause");
					system("cls");
				}
				break;
			case 9:
				cout<<"================================================================================================="
				<<endl<<"================================================================================================="
				<<endl<<"\t\t\tWhich operator has highest precedence in * / % ?\n\t\t\t1.()\n\t\t\t2.%\n\t\t\t3./\n\t\t\t4.all have same precedence\n"
				<<endl<<"================================================================================================="
				<<endl<<"================================================================================================= ";
				cin>>answer;
				if(answer==4)
				{
					cout<<"\t\t\t\tCORRECT\n";
					correct++;
					points=correct*2;
					system("pause");
					system("cls");
				}
				else
				{
					cout<<"\t\t\t\tWRONG\n";
					wrong++;
					system("pause");
					system("cls");
				}
				break;
			case 10:
				cout<<"================================================================================================="
				<<endl<<"================================================================================================="
				<<endl<<"\t\t\tHow to access and edit data in data file handling using structures?\n\t\t\t1.read()\n\t\t\t2.write()\n\t\t\t3.Both 1 and 2\n\t\t\t4.without read\n"
				<<endl<<"================================================================================================="
				<<endl<<"================================================================================================= ";
				cin>>answer;
				if(answer==3)
				{
					cout<<"\t\t\t\tCORRECT\n";
					correct++;
					points=correct*2;
					system("pause");
					system("cls");
				}
				else
				{
					cout<<"\t\t\t\tWRONG\n";
					wrong++;
					system("pause");
					system("cls");
				}
				break;	
			}
			
			cout<<"\n";
			
    	}
    }score();
}
void normal()
{
	system("cls");
	int answer;
	int escape;
	bool is_question_remaining = true;
    while(is_question_remaining)
    {
    	is_question_remaining = false;
    for(int i=0; i<10; i++)
    {
        if(ask[i])
        {
            is_question_remaining = true;
            break;
        }
        
    }
    	
        int no = rand() % 10+0;
        if(ask[no])
        {
            ask[no] = false;
            switch(no)
            {
            case 0 :
                cout<<"================================================================================================="
                <<endl<<"================================================================================================="
				<<endl<<"\t\t\tWhat is size of int data type in cpp?\n\t\t\t1.1byte\n\t\t\t2.2bytes\n\t\t\t3.4bytes\n\t\t\t4.8bytes\n"
				<<endl<<"================================================================================================="
				<<endl<<"================================================================================================= ";
                cin>>answer;
                if(answer==2)
                {
                	cout<<"\t\t\tCORRECT\n";
                	correct++;
                	points=correct*4;
                	system("pause");
					system("cls");
				}
				else
				{
					cout<<"\t\t\t\tWRONG\n";
					wrong++	;
					system("pause");
					system("cls");
				}
                         break;
            case 1 :
                cout<<"===========================================================================================\n"
				<<endl<<"==========================================================================================="
				<<endl<<"\t\t\tWhat is currect syntax of for loop?\n\t\t\t1.for(initialization;condition; increment/decrement)\n\t\t\t2.for(increment/decrement; initialization; condition)\n\t\t\t3.for(initialization, condition, increment/decrement\n\t\t\t4.None of these"
				<<endl<<"=========================================================================================="
				<<endl<<"=========================================================================================== ";
                cin>>answer;
                if(answer==1)
                {
                	cout<<"\t\t\t\tCORRECT\n";
                	correct++;
                	points=correct*4;
                	system("pause");
					system("cls");
				}
				else
				{
					cout<<"\t\t\t\tWRONG\n";
					wrong++;
					system("pause");
					system("cls");
				}
                         break;
            case 2 :
                cout<<"=========================================================================================="
                <<endl<<"==========================================================================================="
				<<endl<<"\t\t\tWhich language circuit simulation Programming Technique?\n\t\t\t1.C language\n\t\t\t2.C++ language\n\t\t\t3.Matlab language\n\t\t\t4.Spice\n"
				<<endl<<"=========================================================================================="
				<<endl<<"=========================================================================================== ";
                cin>>answer;
                if(answer=4)
                {
                	cout<<"\t\t\t\tCORRECT\n";
                	correct++;
                	points=correct*4;
                	system("pause");
					system("cls");
				}
				else
				{
					cout<<"\t\t\t\tWRONG\n";
					wrong++;
					system("pause");
					system("cls");
				}
                         break;
        	case 3 :
        		cout<<"=================================================================================================="
        		<<endl<<"================================================================================================="
				<<endl<<"\t\t\twho is creator of c++\n\t\t\t1.Charles babbage\n\t\t\t2.Steve Jobs\n\t\t\t3.Bjarne Stroustrup\n\t\t\t4.Bill gates\n"
				<<endl<<"================================================================================================="
				<<endl<<"================================================================================================= ";
        		cin>>answer;
        		if(answer==3)
				{
					cout<<"\t\t\t\tCORRECT\n";
        			correct++;
        			points=correct*4;
        			system("pause");
					system("cls");
				}
				else{
					cout<<"\t\t\t\tWRONG\n";
					wrong++;
					system("pause");
					system("cls");
				}
				break;
			case 4:
				cout<<"================================================================================================="
				<<endl<<"================================================================================================="
				<<endl<<"\t\t\tCan any function call itself?\n\t\t\t1.No\n\t\t\t2.Yes\n\t\t\t3.compilation error\n\t\t\t4.Runtime Error\n"
				<<endl<<"================================================================================================="
				<<endl<<"================================================================================================= ";
				cin>>answer;
				if(answer==2)
				{
					cout<<"\t\t\t\tCORRECT\n";
					correct++;
					points=correct*4;
					system("pause");
					system("cls");
				}
				else
				{
					cout<<"\t\t\t\tWRONG\n";
					wrong++;
					system("pause");
					system("cls");
				}
				break;
			case 5:
				cout<<"================================================================================================="
				<<endl<<"================================================================================================="
				<<endl<<"\t\t\tWhat is size of void in bytes?\n\t\t\t1.1byte\n\t\t\t2.2bytes\n\t\t\t3.3bytes\n\t\t\t4.4bytes\n"
				<<endl<<"================================================================================================="
				<<endl<<"================================================================================================= ";
				cin>>answer;
				if(answer == 4)
				{
					cout<<"\t\t\t\tCORRECT\n";
					correct++;
					points=correct*4;
					system("pause");
					system("cls");
				}
				else
				{
					cout<<"\t\t\t\tWRONG\n";
					wrong++;
					system("pause");
					system("cls");
				}
				break;
				
			case 6:
				cout<<"================================================================================================="
				<<endl<<"================================================================================================="
				<<endl<<"\t\t\tCan a Structure contain pointer to itself?\n\t\t\t1.Yes\n\t\t\t2.No\n\t\t\t3.Compilation Error\n\t\t\t4.Runtime Error\n"
				<<endl<<"================================================================================================="
				<<endl<<"================================================================================================= ";
				cin>>answer;
				if(answer == 1)
				{
					cout<<"\t\t\t\tCORRECT\n";
					correct++;
					points=correct*4;
					system("pause");
					system("cls");
				}
				else
				{
					cout<<"\t\t\t\tWRONG\n";
					wrong++;
					system("pause");
					system("cls");
				}
				break;
			case 7:
				cout<<"================================================================================================="
				<<endl<<"================================================================================================="
				<<endl<<"\t\t\tCan a for loop contain another for loop?\n\t\t\t1.Yes\n\t\t\t2.No\n\t\t\t3.compilation Error\n\t\t\t4.Runtime Error\n"
				<<endl<<"================================================================================================="
				<<endl<<"================================================================================================= ";
				cin>>answer;
				if(answer==1)
				{
					cout<<"\t\t\t\tCORRECT\n";
					correct++;
					points=correct*4;
					system("pause");
					system("cls");
				}
				else
				{
					cout<<"\t\t\t\tWRONG\n";
					wrong++;
					system("pause");
					system("cls");
				}
			case 8:
				cout<<"================================================================================================="
				<<endl<<"================================================================================================="
				<<endl<<"\t\t\tWhat is the full form of oop?\n\t\t\t1.Object oriented process\n\t\t\t2.Object observation Programming\n\t\t\t3.Object oriented programming\n\t\t\t4.Office objective Programming\n"
				<<endl<<"================================================================================================="
				<<endl<<"================================================================================================= ";
				cin>>answer;
				if(answer==3)
				{
					cout<<"\t\t\t\tCORRECT\n";
					correct++;
					points=correct*4;
					system("pause");
					system("cls");
				}
				else
				{
					cout<<"\t\t\t\tWRONG\n";
					wrong++;
					system("pause");
					system("cls");
				}
				break;
			case 9:
				cout<<"================================================================================================="
				<<endl<<"================================================================================================="
				<<endl<<"\t\t\tWhich operator has highest precedence in * / % ?\n\t\t\t1.()\n\t\t\t2.%\n\t\t\t3./\n\t\t\t4.all have same precedence\n"
				<<endl<<"================================================================================================="
				<<endl<<"================================================================================================= ";
				cin>>answer;
				if(answer==4)
				{
					cout<<"\t\t\t\tCORRECT\n";
					correct++;
					points=correct*4;
					system("pause");
					system("cls");
				}
				else
				{
					cout<<"\t\t\t\tWRONG\n";
					wrong++;
					system("pause");
					system("cls");
				}
				break;
			case 10:
				cout<<"================================================================================================="
				<<endl<<"================================================================================================="
				<<endl<<"\t\t\tHow to access and edit data in data file handling using structures?\n\t\t\t1.read()\n\t\t\t2.write()\n\t\t\t3.Both 1 and 2\n\t\t\t4.without read\n"
				<<endl<<"================================================================================================="
				<<endl<<"================================================================================================= ";
				cin>>answer;
				if(answer==3)
				{
					cout<<"\t\t\t\tCORRECT\n";
					correct++;
					points=correct*4;
					system("pause");
					system("cls");
				}
				else
				{
					cout<<"\t\t\t\tWRONG\n";
					wrong++;
					system("pause");
					system("cls");
				}
					break;
			}	
				cout<<"\n";
								
        }
    }score();
    
	
}
void difficult()
{
	system("cls");
	int answer;
	int escape;
	bool is_question_remaining = true;
    while(is_question_remaining)
    {
    	is_question_remaining = false;
    for(int i=0; i<10; i++)
    {
        if(ask[i])
        {
            is_question_remaining = true;
            break;
        }
        
    }	
        int no = rand() % 10+0;
        if(ask[no])
        {
            ask[no] = false;
            switch(no)
            {
            case 0 :
                cout<<"================================================================================================="
                <<endl<<"================================================================================================="
				<<endl<<"\t\t\tWhat is size of int data type in cpp?\n\t\t\t1.1byte\n\t\t\t2.2bytes\n\t\t\t3.4bytes\n\t\t\t4.8bytes\n"
				<<endl<<"================================================================================================="
				<<endl<<"================================================================================================= ";
                cin>>answer;
                if(answer==2)
                {
                	cout<<"\t\t\tCORRECT\n";
                	correct++;
                	points=correct*8;
                	system("pause");
					system("cls");
				}
				else
				{
					cout<<"\t\t\t\tWRONG\n";
					wrong++	;
					system("pause");
					system("cls");
				}
                         break;
            case 1 :
                cout<<"===========================================================================================\n"
				<<endl<<"==========================================================================================="
				<<endl<<"\t\t\tCan we overload functions in C++?\n\t\t\t1.Yes\n\t\t\t2.No\n\t\t\t3.Runtime Error\n\t\t\t4.Compilation Error\n"
				<<endl<<"=========================================================================================="
				<<endl<<"=========================================================================================== ";
                cin>>answer;
                if(answer==1)
                {
                	cout<<"\t\t\t\tCORRECT\n";
                	correct++;
                	points=correct*8;
                	system("pause");
					system("cls");
				}
				else
				{
					cout<<"\t\t\t\tWRONG\n";
					wrong++;
					system("pause");
					system("cls");
				}
                         break;
            case 2 :
                cout<<"=========================================================================================="
                <<endl<<"==========================================================================================="
				<<endl<<"\t\t\tCan we typecast void * into int *?\n\t\t\t1.Yes\n\t\t\t2.No\n\t\t\t3.Undefined\n\t\t\t4.Depends on Compiler\n"
				<<endl<<"=========================================================================================="
				<<endl<<"=========================================================================================== ";
                cin>>answer;
                if(answer=1)
                {
                	cout<<"\t\t\t\tCORRECT\n";
                	correct++;
                	points=correct*8;
                	system("pause");
					system("cls");
				}
				else
				{
					cout<<"\t\t\t\tWRONG\n";
					wrong++;
					system("pause");
					system("cls");
				}
                         break;
        	case 3 :
        		cout<<"=================================================================================================="
        		<<endl<<"================================================================================================="
				<<endl<<"\t\t\twho is creator of c++\n\t\t\t1.Charles babbage\n\t\t\t2.Steve Jobs\n\t\t\t3.Bjarne Stroustrup\n\t\t\t4.Bill gates\n"
				<<endl<<"================================================================================================="
				<<endl<<"================================================================================================= ";
        		cin>>answer;
        		if(answer==3)
				{
					cout<<"\t\t\t\tCORRECT\n";
        			correct++;
        			points=correct*8;
        			system("pause");
					system("cls");
				}
				else{
					cout<<"\t\t\t\tWRONG\n";
					wrong++;
					system("pause");
					system("cls");
				}
				break;
			case 4:
				cout<<"================================================================================================="
				<<endl<<"================================================================================================="
				<<endl<<"\t\t\tCan any function call itself?\n\t\t\t1.No\n\t\t\t2.Yes\n\t\t\t3.compilation error\n\t\t\t4.Runtime Error\n"
				<<endl<<"================================================================================================="
				<<endl<<"================================================================================================= ";
				cin>>answer;
				if(answer==1)
				{
					cout<<"\t\t\t\tCORRECT\n";
					correct++;
					points=correct*8;
					system("pause");
					system("cls");
				}
				else
				{
					cout<<"\t\t\t\tWRONG\n";
					wrong++;
					system("pause");
					system("cls");
				}
				break;
			case 5:
				cout<<"================================================================================================="
				<<endl<<"================================================================================================="
				<<endl<<"\t\t\tWhat is size of void in bytes?\n\t\t\t1.1byte\n\t\t\t2.2bytes\n\t\t\t3.3bytes\n\t\t\t4.4bytes\n"
				<<endl<<"================================================================================================="
				<<endl<<"================================================================================================= ";
				cin>>answer;
				if(answer == 4)
				{
					cout<<"\t\t\t\tCORRECT\n";
					correct++;
					points=correct*8;
					system("pause");
					system("cls");
				}
				else
				{
					cout<<"\t\t\t\tWRONG\n";
					wrong++;
					system("pause");
					system("cls");
				}
				break;
				
			case 6:
				cout<<"================================================================================================="
				<<endl<<"================================================================================================="
				<<endl<<"\t\t\tCan a Structure contain pointer to itself?\n\t\t\t1.Yes\n\t\t\t2.No\n\t\t\t3.Compilation Error\n\t\t\t4.Runtime Error\n"
				<<endl<<"================================================================================================="
				<<endl<<"================================================================================================= ";
				cin>>answer;
				if(answer == 1)
				{
					cout<<"\t\t\t\tCORRECT\n";
					correct++;
					points=correct*8;
					system("pause");
					system("cls");
				}
				else
				{
					cout<<"\t\t\t\tWRONG\n";
					wrong++;
					system("pause");
					system("cls");
				}
				break;
			case 7:
				cout<<"================================================================================================="
				<<endl<<"================================================================================================="
				<<endl<<"\t\t\tCan a for loop contain another for loop?\n\t\t\t1.Yes\n\t\t\t2.No\n\t\t\t3.compilation Error\n\t\t\t4.Runtime Error\n"
				<<endl<<"================================================================================================="
				<<endl<<"================================================================================================= ";
				cin>>answer;
				if(answer==1)
				{
					cout<<"\t\t\t\tCORRECT\n";
					correct++;
					points=correct*8;
					system("pause");
					system("cls");
				}
				else
				{
					cout<<"\t\t\t\tWRONG\n";
					wrong++;
					system("pause");
					system("cls");
				}
			case 8:
				cout<<"================================================================================================="
				<<endl<<"================================================================================================="
				<<endl<<"\t\t\tWhat is the full form of oop?\n\t\t\t1.Object oriented process\n\t\t\t2.Object observation Programming\n\t\t\t3.Object oriented programming\n\t\t\t4.Office objective Programming\n"
				<<endl<<"================================================================================================="
				<<endl<<"================================================================================================= ";
				cin>>answer;
				if(answer==3)
				{
					cout<<"\t\t\t\tCORRECT\n";
					correct++;
					points=correct*8;
					system("pause");
					system("cls");
				}
				else
				{
					cout<<"\t\t\t\tWRONG\n";
					wrong++;
					system("pause");
					system("cls");
				}
				break;
			case 9:
				cout<<"================================================================================================="
				<<endl<<"================================================================================================="
				<<endl<<"\t\t\tWhich operator has highest precedence in * / % ?\n\t\t\t1.()\n\t\t\t2.%\n\t\t\t3./\n\t\t\t4.all have same precedence\n"
				<<endl<<"================================================================================================="
				<<endl<<"================================================================================================= ";
				cin>>answer;
				if(answer==4)
				{
					cout<<"\t\t\t\tCORRECT\n";
					correct++;
					points=correct*8;
					system("pause");
					system("cls");
				}
				else
				{
					cout<<"\t\t\t\tWRONG\n";
					wrong++;
					system("pause");
					system("cls");
				}
				break;
			case 10:
				cout<<"================================================================================================="
				<<endl<<"================================================================================================="
				<<endl<<"\t\t\tHow to access and edit data in data file handling using structures?\n\t\t\t1.read()\n\t\t\t2.write()\n\t\t\t3.Both 1 and 2\n\t\t\t4.without read\n"
				<<endl<<"================================================================================================="
				<<endl<<"================================================================================================= ";
				cin>>answer;
				if(answer==3)
				{
					cout<<"\t\t\t\tCORRECT\n";
					correct++;
					points=correct*8;
					system("pause");
					system("cls");
				}
				else
				{
					cout<<"\t\t\t\tWRONG\n";
					wrong++;
					system("pause");
					system("cls");
				}
					break;
			}	
			cout<<"\n";
								
        }
    }score();
    
	
}
void startgame()
{	
	system("cls");
	cout<<"==================================================================="
	<<endl<<"\n                   ENTER YOUR NAME\n"
	<<endl<<"===================================================================\n                   ";
	cin>>name;
	system("cls");
	int choice;
	char answer;
	cout<<"    \t\t*$*$*$*$*$*$*$*$*$*$*$**$*$*$*$*$*$*$**$*$*$*$*$*$*$*$**$*$*$*$*$*$*$*$*$**$*$*$*$*$*\n"
	<<endl<<"      \t\t |                          Select difficulty Level                          |"
	<<endl<<"      \t\t |                             1. Easy                                       |" 
	<<endl<<"      \t\t |                             2. Normal                                     |"
	<<endl<<"      \t\t |                             3. difficult                                  |\n"<<
	endl<<"   \t\t*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$**$*$*$*$*$*$**$*$*$*$*$**$$*$**$*$*$**$*$**$*$\n"<<
	endl<<"     \t\t  |                         Enter number of your choice                       |\n";
	cin>>choice;
	switch(choice)
	{
		case 1:
			easy();
			break;
		case 2:
			normal();
			break;
		case 3:
			difficult();
			break;
	}
	system("pause");
	system("cls");
	}
void instructions(){
	system("cls");
	cout<<"Choose the correct answer by entering the correct Letter for MCQ";
		cout<<endl<<endl;
	system("pause");
	system("cls");
}
void storedscores()
{
	ifstream file;
	string line;
	system("cls");
	file.open("scores.txt");
	if(!file.eof())
	{
		while(getline(file,line))
		
		cout<<line<<endl;
	}
	system("pause");
	file.close();
	system("cls");
}
void score()
{
	system("cls");
	fstream scores;
	scores.open("scores.txt", ios::out | ios::app);
	cout<<name<<"   correct answers = "<<correct<<"/10"<<"  wrong answers = "<<wrong<<" Points = "<<points;
	scores<<name<<"   correct answers = "<<correct<<"/10"<<"  wrong answer = "<<wrong<<" Points = "<<points<<endl;
	scores.close();
	
}
int main()
{
	Logo();
    int colours[] = {7,7,7,7};
    int option = 4;
    char key;
    for(int i=0;;)
    {
        arrow_keys(10,5);
        color(colours[0]);
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t **Start Game**";

        arrow_keys(10,6);
        color(colours[1]);

        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t **Instructions**";

        arrow_keys(10,7);
        color(colours[2]);
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t **scores**";

        arrow_keys(10,8);
        color(colours[3]);
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t **Exit**";

        key = getch();

        if(key == 72 && (option >=2 && option <= 5))
        {
            option--;
        }
        if(key == 80 && (option >=1 && option <= 4))
        {
            option++;
        }
        if(key == '\r')
        {
            if(option == 1)
            {
              
                startgame();
            }
            if(option == 2)
            {
        		instructions();
            }
            if(option == 3)
            {
               storedscores();
            }
            if(option == 4)
            exit(0);
            
        }

        colours[0] = 7;
        colours[1] = 7;
        colours[2] = 7;
        colours[3] = 7;
        

        if(option == 1)
        {
            colours[0] = 12;
        }
        if(option == 2)
        {
            colours[1] = 12;
        }
        if(option == 3)
        {
            colours[2] = 12;
        }
        if(option == 4)
        {
            colours[3] = 12;
        }
        if(option == 5)
        {
            colours[4] = 12;
        }
    }
return 0;
}

