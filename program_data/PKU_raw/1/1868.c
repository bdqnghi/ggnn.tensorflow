/*1090 ????*/ 



int num;

void divide(int a,int k)
{
	int i;
	if(a==1) num++;//?????????????? 
	for(i=k;i<=a;i++)//???????? 
	    if(a%i==0) divide(a/i,i);
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
			int n;
			cin>>n;
			num=1; 
			int i;
			for(i=2;i*i<=n;i++)
				if(n%i==0) divide(n/i,i);  
			cout<<num<<endl;
	}
    return 0;
}