#include <iostream>
using namespace std;
 class book{
	string title,author,category;
	int publishYear;
	public :
	book(string t,string a,string c,int p){
		title=t;
		author=a;
		category=c;
		publishYear=p;
	}
	string getTitle(){
		return title;
	}
	string getAuthor(){
		return author;
	}
	string getCategory(){
		return category;
	}
	int getPublishYear(){
		return publishYear;
	}
	void setTitle(string t){
		title=t;
	}
	void setAuthor(string a){
		author=a;
	}
	void setCategory(string c){
		category=c;
	}
	void setPublishYear(int p){
		publishYear=p;
	}
	void display(){
	 	cout<<"----------------------------------------"<<endl;
	 	cout<<" Book Details "<<endl;
		cout<<"Book Title : "<<title<<endl;
		cout<<"Book Author : "<<author<<endl;
		cout<<"Book Category : "<<category<<endl;
		cout<<"Book Publishing Year : "<<publishYear<<endl;	
		cout<<"----------------------------------------"<<endl;
 }
friend class Algo;	
	
};
struct node{
	book *B;
	node *next;
	friend class Algo;
};

class Algo{
	node *head,*temp;
	int choice,create;
	string title,author,category;
	int pYear;
	public :
	Algo(){
		cout<<"Hello"<<endl;
		creating();
	}
	void creating(){
		cout<<"\nHow many Books do you want to create in your library?";
		cin>>create;
			for (int i=0;i<create;i++){	
				cout<<"Book "<<i+1<<endl;
				cout<<"----------------------------------------"<<endl;
				fflush(stdin);
				cout<<"Title:"<<endl;
				getline(cin,title);
				fflush(stdin);
				cout<<"Author of "<<title<<" : "<<endl;
				getline(cin,author);
				fflush(stdin);
				cout<<"Category of "<<title<<" : "<<endl;
				getline(cin,category);
				cout<<"Publishing Year of "<<title<<" : "<<endl;
				cin>>pYear;
				fflush(stdin);
				cout<<i;
			if (i==0){
				firstNode();
			}
			else {
				addNode();
			}
		}
		action();
	}
	
	void action(){
		cout<<"\nWhat do you want to do next? \n [ 1=Display,2=Add,3=Edit,4=Delete,5=Searching,0=Exit the program ]";
		cin>>choice;
		switch (choice){
		case 1:
			cout<<"dis" ;
			display();
		///	A.Display();
			break;
		case 2:
			//call function add
			break;
		case 3:
			//call function edit optional
			break;
		case 4: 
			//call function delete optional
			//inside delete func, call display(brief one)
			//then ask user to key in which book to delete,store it inside a int var;
			//then we loop through the linked list ,i++ after going to another node,
			//stop when i=var ,then delete that node
			break;
		case 5:
		
			//call function Searching
			break;
		case 0:
			//exit the program ,call destructor ,thank you etc
			break;
	}
}
	void firstNode(){
		cout<<"first";
			head= new node;
			head->B=new book(title,author,category,pYear);
			head->next=NULL;
			temp=head;
			cout<<"was here ";
	}
	void addNode(){
		cout<<"other";
		temp->next=new node ;
		temp= temp->next;
		temp->B= new book(title,author,category,pYear);
		temp->next=NULL;
	}
	void display(){
		//to display each nodes
		temp=head;
		while(temp!=NULL){
			temp->B->display();
			temp=temp->next;
		}
	}
	
	
	
};
int main(){
	Algo A;
	
}
