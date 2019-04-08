int main()
{  
	int odd(int x);int even(int y);//????
	int n;
	cin>>n;
	while(n!=1)
	{if(n%2==0)
	   {n=even(n);}//??????
	else
	   {n=odd(n);}//??????
	}
	cout<<"End";
	return 0;

}

int odd(int x)//????
{ int y;
  y=3*x+1;
  cout<<x<<"*3+1="<<y<<endl;
  return y;
}

int even(int x)//????
{ int y;
  y=x/2;
  cout<<x<<"/2="<<y<<endl;
  return y;
}