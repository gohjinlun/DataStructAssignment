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
	//added two pointers
	node *head,*temp,*prev,*tail;
	int choice,create,searchY;
	string title,author,category;
	int pYear;
	public :
	Algo(){
		cout<<"-------WELCOME TO YOUR BOOKS MANAGEMENT SYSTEM-------";
		creating();
	}
	~Algo(){
		cout<<"\nThank You For Using our System ! :)";
		cout<<"-------BOOKS MANAGEMENT SYSTEM-------";
	}
	void creating(){
		cout<<"\nHow many Books do you want to insert to your library?";
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
	do{
	
		cout<<"\n\nWhat do you want to do next? \n\n[ 1=Display , 2=Add , 3=Delete , 4=Search , 0=Exit the program ]";
		cin>>choice;
		switch (choice){
		case 1:
			cout<<"dis";
			display();
			break;
		case 2:
			//call function add
			add();
			break;
		case 3: 
			//call function delete 
			deleteNode();
			break;
		case 4:
			//call function search
			search();
			break;
		case 0:
			//exit the program ,call destructor ,thank you etc
			break;
		default:
			cout<<"Invalid choice , try again."<<endl;
			break;
	}
		}while(choice!=0);
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
		tail=temp;
	}
	void display(){
		//to display each nodes
		temp=head;
		while(temp!=NULL){
			temp->B->display();
			temp=temp->next;
		}
	}
	
	void deleteNode(){
		temp=head;
		int i =1,del;
		
		//displaying the list of books first;
		cout<<"----------------------------------------"<<endl;
		cout<<"\nList of books in library:"<<endl;
		while(temp!=NULL){	
			cout<<"Book "<<i<<endl;
			cout<<"Title : "<<temp->B->getTitle()<<endl;
			temp=temp->next;
			i++;
			
		}
		//ask user which book to delete;
		cout<<"\n----------------------------------------"<<endl;
		cout<<"Which book you want to delete (enter num)";
		cin>>del;
		
		i=1;
		temp=head;
		if(del==1){
			//delete the first node
			head=head->next;
			temp->next=NULL;
			delete temp;
			cout<<"\nBook "<<del<<" delete successfully";
		}
		else {
		//search and delete that node
			while ( (temp!=NULL) &&(i!=del) ){
				//search for the node to delete
				prev=temp;
				temp=temp->next;
				i++;
			};
			if( (temp!=NULL) && (i==del) ){
				prev->next = temp->next;
				delete temp;
				cout<<"\nBook "<<del<<" delete successfully";
			}else {
				cout<<"book number not found";
			}
		}
	}

	void add(){	
			cout<<"Book details that you want to add : "<<endl;
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
			temp=tail;
			temp->next= new node;
			temp=temp->next;
			temp->B= new book(title,author,category,pYear);
		    temp->next=NULL;
		    tail=temp;
		}
	void search(){
		cout<<"Enter the publishing Year of the book you want to search :";
		cin>>searchY;
		bool found =0;
		int i=1;
		temp=head;
		while((temp!=NULL)&&(temp->B->getPublishYear()<=searchY ) ){
				if((temp->B->getPublishYear()==searchY)) {
					temp->B->display();
					found =1;
				}
				temp=temp->next;
				i++;
		};
		if(found ==0){
			cout<<"\nThere isn't any books published on year "<<searchY<<" in your library.\nPlease try again."<<endl;
		}	
	}
	void sort(){
	j=0;
        while(j<create){
            //reset the nodes point to the head
            prev = temp = head;
			bool found =0;
            //for the head
            if(head->B->publishYear){
                temp=head;
                head = head->next;
                temp->next=head->next;
                head->next=temp;
                prev=head;
            }
            else if(head==temp){
                temp=temp->next->tail;
            }
}
};


int main(){
	Algo A;
	
	return 0;
}
