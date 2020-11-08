#include<iostream>
using namespace std;
struct node{
	int id;
	node *next=NULL;
}*top=NULL;
node *crt()
{
	node *p=new node;
	cout<<"enter the value :";
	cin>>p->id;
	return p;
}
void push()
{
	node*t;
	t=crt();
	if(top==NULL)
	{
		top=t;
	}
	else{
		t->next=top;
		top=t;
	}
	cout<<"\n\tSuccessfully inserted";
	//getch();
}
void display()
{
	node *d=new node;
	if(top==NULL)
		cout<<"\n\nEmpty";
	else {
		d=top;
		while(d!=NULL)
		{
			cout<<"\n\tID :"<<d->id;
			d=d->next;
		}
	}
	//getch();
}
void pop();
int main()
{
	int i=1,ch;
	while(i==1)
	{	system("cls");
		cout<<"MENU--\n1.PUSH\n2.POP\n3.Display\n4.Exit\nEnter your choice :";
		cin>>ch;
		switch(ch)
		{
			case 1:	push();
					break;
			case 2:	pop();
					break;
			case 3:display();
					break;
			case 4:i++;
		}
	}

	return 0;
}
void pop()
{
	if(top==NULL)
		cout<<"\n\tStack empty";
	else{
		top=top->next;
		cout<<"\n\tsuccessfully poped";
	}
	//getch();
}
