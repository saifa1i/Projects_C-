#include<iostream>
#include<windows.h>
using namespace std;
int s;

struct student 
{
int rollno;
string name;
string fname;
string email;
long  cnic;


void add()
{
	cout<<"Enter roll no : "<<endl;
	cin>>rollno;
		cout<<"Enter Name : "<<endl;
	cin>>name;
		cout<<"Enter Fname : "<<endl;
	cin>>fname;
		cout<<"EnterEmail : "<<endl;
	cin>>email;
		cout<<"Enter CNIC : "<<endl;
	cin>>cnic;
	
	cout<<endl;
}

	
void display()
{cout<<"\n\n\t\t"<<"   \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB";
        cout<<"\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB"<<endl;
        cout<<"\t\t   \xDB\xDB                                                        \xDB\xDB";
		cout<<"\n\t\t   \xDB\xDB         """"STUDENT RECORD""""                                 \xDB\xDB";
		cout<<"\n\t\t                                                                   ";
		cout<<"\n\t\t                RollNo of the student:"<< rollno;                           
		cout<<"\n\t\t                Name of the student:"<<name;                             
		cout<<"\n\t\t                Fname of the student:"<<fname;                             
		cout<<"\n\t\t                E-mail of the student:"<<email;                     
		cout<<"\n\t\t                CNIC of the student:"<<cnic;
		cout<<"\n\t\t   \xDB\xDB                                                        \xDB\xDB";

		cout<<"\n\t\t"<<"   \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB";
        cout<<"\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB"<<endl;	 	
	  
        
}

void search()
{
	
	  	cout<<"\n RollNo of the student:"<< rollno; 
	  	cout<< "\n Name of the student:"<<name; 
	  	cout<< "\n Fname of the student:"<<fname;
	  	cout<<"\n E-mail of the student:"<<email;
	  	cout<< "\n CNIC of the student:"<<cnic;
	  
	  }
 	

void edit()
{
	cout<<"\n Enter new roll no:";
	cin>>rollno;
	cout<<"\n Enter new name: ";
	cin>>name;
	cout<<"\n Enter new fname:";
	cin>>fname;
	cout<<"\n Enter new E-mail: ";
	cin>>email;
	cout<<"\n Enter new  C.N.I.C:";
	cin>>cnic;
}
};

int main()
{
		int n;
	    cout<<"\n\n\t\t"<<"\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB";
	     cout<<"\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB";
        cout<<"\n                   How many students record you want to enter : ";
				                    cin>>s;
				                student obj[s];
                                        
		
	
	while(1)
	{
	
        cout<<"\n\n\t\t"<<"   \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB";
        cout<<"\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB"<<endl;
        cout<<"\t\t   \xDB\xDB                                    \xDB\xDB";
		cout<<"\n\t\t   \xDB\xDB         """"STUDENT RECORD""""             \xDB\xDB";
		cout<<"\n\t\t   \xDB\xDB                                    \xDB\xDB";
		cout<<"\n\t\t   \xDB\xDB       1.)To Add New student Record \xDB\xDB";
		cout<<"\n\t\t   \xDB\xDB       2.)To display Record         \xDB\xDB";
		cout<<"\n\t\t   \xDB\xDB       3.)To Search A Record        \xDB\xDB";
		cout<<"\n\t\t   \xDB\xDB       4.)To Edit A Record          \xDB\xDB";
		cout<<"\n\t\t   \xDB\xDB       5.)QUIT                      \xDB\xDB";
		cout<<"\n\t\t   \xDB\xDB                                    \xDB\xDB";

		cout<<"\n\t\t"<<"   \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB";
        cout<<"\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB"<<endl;	 	
	  
	  cout<<"\n\t\t\t  ENTER YOUR CHOICE (1-5) : ";
	  cin>>n;
    system("cls");
	switch(n)
	{
		case 1:
			
			{
				
				for(int i =0;i<s;i++)
				{
					obj[i].add();
				}
				system("cls");
				break;
			}
			
			case 2 :
			
				{
				cout<<"Student Record:\n";
						for(int i =0;i<s;i++)
				{
						if(	obj[i].rollno == NULL)
						{
							cout<<"No Record Found";
							break;
						}
						else
						{
							obj[i].display();
						}
						

					
			}
				break;	
				}
				
				case 3:
					
					{
						int x;
						cout<<"enter Roll NO to search:";
						cin>>x;
					
				
				for(int i =1;i<=x;i++)
				{
					
						if(	obj[i].rollno == x)
						{
							obj[i].search();
							//obj[s].display();
	break ;					
						}
						else
						{
							cout<<"no record found";
				break;
						}
				}
				//system("cls");
				break;
			}	
							
				
					
					case 4:
						{
									int x;
					 cout<<"Enter Roll No. to edit : ";
					 cin>>x;
					 	for(int i=1;i<=x;i++)
				{
						if(	obj[i].rollno == x)
						{
							obj[i].edit();
						break ;
						}
						else
						{
							cout<<"no record found";
				break;
						}
						}break;
					}
						case 5:
						{
							cout<<"QUIT";
							
						break;	
						}
						
					default:
					{
						cout<<"Wrong choice";
						break;
					}
	}
}
	
}
