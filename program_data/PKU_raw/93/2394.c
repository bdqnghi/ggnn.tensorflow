
int main()
{ 
	int n;
	scanf("%d",&n);
 if(n%3==0&&n%5==0&&n%7==0)
  cout<<"3 5 7"<<endl;
 if(n%3==0&&n%5==0&&n%7!=0)
  cout<<"3 5"<<endl; 
 if(n%3!=0&&n%5==0&&n%7==0)
  cout<<"5 7"<<endl; 
 if(n%3==0&&n%5!=0&&n%7==0)
  cout<<"3 7"<<endl;
 if(n%3==0&&n%5!=0&&n%7!=0)
  cout<<"3"<<endl;
 if(n%3!=0&&n%5!=0&&n%7==0)
  cout<<"7"<<endl;
 if(n%3!=0&&n%5==0&&n%7!=0)
  cout<<"5"<<endl;
 if(n%3!=0&&n%5!=0&&n%7!=0)
  cout<<"n"<<endl;
}