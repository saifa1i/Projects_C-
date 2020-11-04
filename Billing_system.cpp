  # include <iostream>
  # include <windows.h>
  # include <string.h>
  # include <string>
  # include <fstream>
  //#include <conio.h>
  	using namespace std;
  	double a=0;
  	int id1, quantity1,*hh;
  	double price1, tp1, total1;
  	string name1;
  
 	struct link{
  	int id;
  	double price;
  	int quantity;
  	string name;
  	double tp=0;
  	double total;
  	link *next;
  	
  	
  	}*p,*temp,*cur,*head,*ne,*temp1,*p1,*cur1,*head1;
  
  	
  	class createid{
	protected:
	string di;
	string pass;
	public:
	void creatid(){

	cout<<"create your own login id:"<<endl;
	cout<<endl;
	cout<<"Enter your id"<<endl;
	cin>>di;
	cout<<"Enter your password:(Must be equal to 5 characters)"<<endl;
	cin>>pass;
			
}
};
class login:public createid
{
	public:
	string id;
	void getin()
	{h:
	cout<<endl;
		cout<<"enter your registered id:"<<endl;
		cin>>id;
		cout<<"enter your secret password:"<<endl;
	    char password[5];
		for(int i = 0; i < 5; i++)
		{
		password[i] = getch();
		cout << "*";
		}	
		
		if (di==id && pass==password)
		{ 
		cout<<"welcome Billing system"<<endl;
		}
		else{
		
		cout<<"enter correct id and password"<<endl;
	
		goto h;}
		system("cls");
		}
};


  
  
  
  class que{
  	public:	   
	struct	link *rear;
  	struct link *front;
  	
  		int n;
  		que(){
  		rear=NULL;
  		front =NULL;
		  }
		  
		  void enque(){
		  	cur = new link;	
  if (head==NULL){


	head=cur;
	temp=cur;
	p = cur;
	cout<<endl;
	cout<<endl;
	cout<<"Enter the ID of Item::"<<endl;
	cin>>cur->id;
	cout<<"Enter the Name of Item::"<<endl;
	cin>>cur->name;
	cout<<"Enter the Price of Item::"<<endl;
	cin>>cur->price;
	cout<<"Enter the Qauantity of Item::"<<endl;
	cin>>cur->quantity;
	cur->total = cur->quantity * cur->price;
	head->next=NULL;
	
}
else {

	p->next=cur;
	p=cur;
	cout<<endl;cout<<endl;cout<<endl;
	cout<<"Enter the ID of Item::"<<endl;
	cin>>cur->id;
	cout<<"Enter the Name of Item::"<<endl;
	cin>>cur->name;
	cin.ignore();
	cout<<"Enter the Price of Item::"<<endl;
	cin>>cur->price;
	cout<<"Enter the Qauantity of Item::"<<endl;
	cin>>cur->quantity;
	cur->total = cur->quantity * cur->price;
	cur->next=NULL;
    	
} 
  
		  }
		  
		  	
			 
			  
	
		  void deque()
		  { 


		  	  cout<<endl;cout<<endl;
		  	  front=head;
			  cout<<"\n The ID of item to be recorded is :"<<head->id<<endl;
			  cout<<"The record is successfully recorded::"<<endl;
			  
			  id1 = head->id;
			  name1 = head->name;
			  price1 = head->price;
			  quantity1 = head->quantity;
			  total1 = head->total;
			  tp1 = head->tp;
			 
			  ne=front;
			  head=head->next;
			  	 delete front;	
		  }
		  
		  
		  		  		  void deque1(){

		     cout<<endl;cout<<endl;
		  	 front=head;
			 cout<<"\n The ID of item to be deleted is :"<<head->id<<endl;
			 cout<<"The record is successfully deleted::"<<endl;
			 head=head->next;
			 
			 delete front;

		  }
		  
		  	
		  	
		  	
		  	
		  

			  
			  	  void show(){
			  	  	cout<<endl;
			  	  	cout<<endl;
		  cout<<"The detail of items entered::"<<endl;
			  temp=head;
			  			 			
			
			  while(temp!=NULL ){
			  	cout<<"ID of Item::"<<temp->id<<endl;
	
	cout<<"Name of Item::"<<temp->name<<endl;
	
	cout<<"Price of Item::"<<temp->price<<endl;
	
	cout<<"Qauantity of Item::"<<temp->quantity<<endl;
	temp->tp=temp->price*temp->quantity;
	cout<<"Total price of"<<temp->quantity<<" items::"<<temp->tp<<endl;

			  
			  temp=temp->next;
			  
			  cout<<endl;
			  cout<<endl;
			  }

}

void write(){
que q1; 
  ofstream outfile("Bill.txt" , ios::binary | ios::out | ios::app);
//outfile.open("Bill.txt" , ios::binary | ios::out | ios::app);
//while(outfile.write((char *)&q1 , sizeof(que)))
//{/


q1.enque();
outfile.write((char *)&q1 , sizeof(que));
//}
outfile.close();
  	
	
}
void read(){
que q1;

ifstream infile("Bill.txt" , ios::binary | ios::in | ios::app );
//infile.open("Bill.txt" , ios::binary | ios::out | ios::app);
while(infile.read((char *)&q1 , sizeof(que)))
{
	
	
q1.show();
	
}
infile.close();
}

void bill(){
		
	cout<<endl;
	cout<<endl;
	temp=head;
	p=temp;	 
	while(temp!=NULL){
	temp->tp=temp->price*temp->quantity;
	cout<<"Total price of"<<temp->quantity<<" items::"<<temp->tp<<endl;

	a = a+ temp->total;
			  temp= temp->next;
			  }
	cout<<"The Total BILL:::"<<endl;
	cout<<a;
	cout<<endl;
}

   
   	
   	void search(){
	int ITEM;
	cout<<"Enter the ID of Item you want to search::"<<endl;
	cin>>ITEM;
	link *LOC;
	LOC=NULL;
	temp=head;
	while(temp!=NULL)
	{
	if(ITEM==temp->id){
	LOC=temp;
	cout<<"THE ITEM IS SEARCH SUCCESSFULLY::"<<endl;
	cout<<endl;
	cout<<"ID of Item::"<<temp->id<<endl;
	
	cout<<"Name of Item::"<<temp->name<<endl;
	
	cout<<"Price of Item::"<<temp->price<<endl;
	
	cout<<"Qauantity of Item::"<<temp->quantity<<endl;
	temp->tp=temp->price*temp->quantity;
	cout<<"Total price of"<<temp->quantity<<" items::"<<temp->tp<<endl;
	}
	
	temp=temp->next;
	}
	if(LOC==NULL)
	cout<<"\n ITEM Not Found "<<endl;
}

   

};

class que1{
  	public:

struct	link *rear;
  	struct link *front1;
  	struct link *front;
  		
  		que1(){
  		rear=NULL;
  		front1 =NULL;
		front = NULL;
		  }
		  
		  void enque1(){
		  	
		  	cout<<"The record has been successfully recorded::"<<endl;
		  	
  if (head1==NULL){
head1= new link;
	head1 =ne;
	cur1=head;
	temp1=head;
	p1=head1;
	cout<<endl;
	cout<<endl;
	
	head1->id=id1;
	
	head1->name=name1;
	
	head1->price=price1;
	
	head1->quantity=quantity1;
	head1->next=NULL;
	
}
else {
	cur1= new link;
	cur1 = ne;
	p1->next=cur1;
	p1=cur1;
	cout<<endl;cout<<endl;cout<<endl;
	cur1->id=id1;
	
	cur1->name=name1;
	
	cur1->price=price1;
	
	cur1->quantity=quantity1;
	cur1->next=NULL;
	
} 

		  }

      		  	  void show1(){
			  	  	cout<<endl;
			  	  	cout<<endl;
		  			cout<<"The detail of item entered::"<<endl;
			 	
				 
				 
				 	temp1= head1;
				 	temp1=cur1;
			  			 			
			
			  		while(temp1!=NULL ){
			  		cout<<"ID of Item::"<<temp1->id<<endl;
	
					cout<<"Name of Item::"<<temp1->name<<endl;
	
					cout<<"Price of Item::"<<temp1->price<<endl;
	
					cout<<"Quantity of Item::"<<temp1->quantity<<endl;
					temp1->tp=temp1->price*temp1->quantity;
					cout<<"Total price of"<<temp1->quantity<<" items::"<<temp1->tp<<endl;

			  
			  		temp1=temp1->next;
//			  cur=cur->next;
			  		cout<<endl;
			  		cout<<endl;
			  }
			  
}
		  
		  };
  





int main(){
    login l;	que q; que1 qq;int counter=0;
    l.creatid();
system ("cls");
	l.getin();
	system ("cls");	
	system ("pause");
	system ("cls");
	char ch;
	while(1){
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
cout<<".......WELCOME TO BILLING SYSTEM..........\n";
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
cout<<"^^^^^^^^^^^^^^^^^^^^^^MAIN MENU^^^^^^^^^^^^^^^^^^^^\n";


	cout<<"\t1.ADD DETAILS OF ITEM\n";
	cout<<"\t2.BILL GENERATION\n\t3.TO VIEW ALL UNSTORED RECORDS\n";
	cout<<"\t4.SEARCH ITEM RECORD \n\t5.RECORD LAST ITEM RECORD INTO NEW QUE\n\t6.TO VIEW ALL STORED RECORDS\n\t7.TO DELETE FIRST ITEM RECORDS\n \n\t8.EXIT ";
	cout<<"\t\nEnter your choice:";
	cin>> ch;

	system ("cls");	

	switch (ch){
		case '1':{char n;
		do {
	q.write();
	cout<<endl;
		cout<<"Do you want to enter more records press Y for 'Yes'::: \n  PRESS ANY KEY TO GET BACK TO MAIN MENU:::"<<endl;
		cin>>n;	
		counter++;
	}while(n=='Y' || n=='y');
		
	system ("cls");	
	system ("pause");	
			break;
		}
		case '2':{
			cout<<"The total number of items are ="<<counter<<endl;
			q.bill();
			cout<<endl;
			cout<<"\t\t\t\t\tTHANKS FOR COMING::"<<endl;
		
	system ("pause");
		system ("cls");
			break;
		}
		
		case '3':{
			q.show();
	system ("pause");
		system ("cls");
			break;
		}
		
		case '4':{
			q.search();
	system ("pause");
		system ("cls");
			break;
		}
		
		case '5':{
			q.deque();
			qq.enque1();
	system ("pause");
		system ("cls");
			break;
		}
			case '6':{
			qq.show1();
	system ("pause");
		system ("cls");
			break;
		}
			case '7':{
			q.deque1();
	system ("pause");
		system ("cls");
			break;
		}
		case '8':{
		
			cout<<"THANKS FOR USING MY PROGRAM :-)"<<endl;
			exit(1);
			break;
		}
		default :{
			cout<<"Kindly enter the correct number between 1 and 8:: THANKS!"<<endl;
			break;
		}
	
	}

	}

	return 0;
}
