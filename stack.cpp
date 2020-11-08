#include<iostream>
#define MAX 25
using namespace std;
class stac{
int top=-1;
int arr[MAX];
public :
void push(int n)
{
  if(top==MAX)
    cout<<"stack full";
  else{
    arr[++top]=n;
  }
}
inline int retop()
{ return arr[top--];}
inline int Top()
{ return top;}
void pop()
{ int c;
  if(top==-1)
      {
        cout<<"stack underflow";
      }
      else{cout<<"\nElement : "<<arr[top]<<"\n press 1 to continue";
      cin>>c;
        if(c==1){
        top--;
        cout<<"\n\tSuccessfully pop";
      }}
}
void display()
{
	if(top==-1)
	{
		cout<<"stack underflow";
	}
	else{
		for(int i=0;i<=top;i++)
		{
			cout<<"  "<<arr[i];
		}
	}
}
  void reverse();
};
int main()
{ int ch=1;
  int n,e;
  stac a;
  while(ch==1)
  {
    cout<<"\nMenu--\n1.PUSH\n2.POP\n3.DISPLAY\n4.REVERSE\n5.EXIT\n";
    cin>>n;
    switch (n) {
      case 1: cout<<" enter the number : ";
              cin>>e;
              a.push(e);
              break;
      case 2: a.pop();
              break;
      case 3: a.display();
              break;
      case 4:a.reverse();
              break;
      case 5: ch++;
      default :cout<<"\n\twrong choice!! try again ";
    }
  }
  return 0;
}
void stac ::reverse()
{
  stac ads1,ads2;
  if(top==-1)
    cout<<"\nstack underflow";
  else{
    while(top!=-1)
    {
      ads1.push(retop());
    }
    while(ads1.Top()!=-1)
    {
      ads2.push(ads1.retop());
    }
    while(ads2.Top()!=-1)
    {
      push(ads2.retop());
    }
  }
}
