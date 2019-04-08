int num(int a,int b);
int main()
{
	int t;
	int a;
	cin>>t;
	for(int i=1;i<=t;i++)            //??
	{
		cin>>a;                      //????
		cout<<(num(a,2))<<endl;      //????
	}
	return 0;
}
int num(int a,int b)
{
	int f=0;
	if(a>=b)                    //????????????
	{
	for(int i=b;i<=a;i++)       //????
	{
			if(a==i) f++;
			else if(a%i==0) f=f+num(a/i,i);     //???????????
	}
	}
	return f;
}