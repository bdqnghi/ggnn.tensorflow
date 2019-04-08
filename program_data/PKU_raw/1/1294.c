
int a;
int m=0,s=1;
void temp(int b,int k,int c)
{
	for(int i=k;i<=b;i++)//????
	{
	
		if(b%i==0)
		{
			b=b/i;
			s=s*i;
			k=i;
			if(s==c)
			{
				m++;
			
			}
			else
			
				temp(b,k,c);
				s=s/i;//??
				b=b*i;
			
		}
	}
}
int main()
{
	int n,a,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a;
		temp(a,2,a);//??
		cout<<m<<endl;
		m=0;
	}
	
	return 0;
}