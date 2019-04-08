void print(int a[],int m,int k,int n);
int main()
{
	int n,a[500],m,j,i=1,k=0;
	cin>>n;
	while(i<=n)
	{
		cin>>m;
		k++;
		if(m==0)
		{
			if(k!=n)
			{
				cout<<60<<endl;
			}
			else
			{
				cout<<60;
			}
			i++;
		
		continue;
		}

		for(j=1;j<=m;j++)
		{
			cin>>a[j];
		}
	    print(a,m,k,n);
		i++;
	}
  return 0;
}
void print(int a[],int m,int k,int n)
{

   
	    if(a[m]+3*m<60)
		{
			if(k!=n)
			{
				cout<<(60-3*m)<<endl;
			}
			else
			{
				cout<<(60-3*m);
			}
		}
		else if(a[m]+3*m>=60&&a[m]+3*m<=62)
		{
			if(k!=n)
			{
				cout<<a[m]<<endl;
			}
			else
			{
				cout<<a[m];
			}
		}

		else
		{
		   print( a, m-1,k,n);
		}
}

		


