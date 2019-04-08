//-------------------
//     ???
//    2010/11/23
//     ???
//-------------------


int Reverse(int x); //????

int main()
{
	int n=6,i,X;
	for(i=0;i<n;i++)
	{
		cin>>X;
		cout<<Reverse(X)<<endl;
	}
	return 0;
}

int Reverse(int x)
{
	int y=0;
	if(x==0) return 0;
	while(x!=0)
	{
		y=y*10+x%10;
		x=x/10;
	}
	return y;
}