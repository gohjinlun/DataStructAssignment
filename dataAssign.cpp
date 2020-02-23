#include <iostream>
using namespace std;

public class book{
	string title,author,category;
	int publishYear	;
	public :
	book(string t,string a,string c,int p){
		this.title=t;
		this.author=a;
		this.category=c;
		this.publishYear=p;
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
	void setTitle(String t){
		this.title=t;
	}
	void setAuthor(String a){
		this.author=a;
	}
	void setCategory(String c){
		this.category=c;
	}
	void setPublishYear(int p){
		this.publishYear=p;
	}
	void setTitle(String t){
		this.title=t;
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
	
	
};
struct node{
	book B;
	node *next;
}*head,*temp;

public class Algo{
 //can become friend with book class, so that algo class can set book class
};
int main(){
	int choice;
	int create;
	string title,author,category;
	int pYear;
	//algorithm class that stores all the algorithm /action functio
	//call each function when user ask to 
	Algo func;
	
	//can say welcome to system kind of function , 
	//maybe can create outside function or system class to store related methods
	
	//get user input for initialise creation
	cout<<"How many Books do you want to create in your library?"<<endl;
	cin>>create;
	
	//get user input for book details then create it 
	for (int i=0;i<create;i++){
		cout<<"Please key in the details of the book you want to create in your library : "<<endl;
		cout<<"Book "<<i+1<<endl;
		cout<<"----------------------------------------"<<endl;
		cout<<"Title:"<<endl;
		cin>>title;
		cout<<"Author of "<<title<<" : "<<endl;
		cin>>author;
		cout<<"Category of "<<title<<" : "<<endl;
		cin>>category;
		cout<<"Publishing Year of "<<title<<" : "<<endl;
		cin>>pYear;
		
		//create each book object
		book B(title,author,category,pYear); 
		//then create node to store each books , linked list
//		if book =first book i=0;
//		call create first node function,else call create more note function;
//		use outer,single function
	}
	//after creating all books , ask user for next action
	cout<<"What do you want to do next? 1=Edit,2=Delete,3=Display,4=Add,5=Sorting,6=Searching";
	cin>>choice;
	switch (choice){
		case 1:
			//call function Edit
			break;
		case 2:
			//call function Delete
			break;
		case 3:
			//call function Display
			break;
		case 4: 
			//call function Add
			break;
		case 5:
			//call function Searching
			break;
	}
	//edit/delete/display,add
	//sorting,searching
	//hashing don't need ,since we don't have data need to hash
	
	//last function call, say tq etc
	
	
	
}
