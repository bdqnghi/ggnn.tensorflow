 
int main()
{
	int n;
	cin>>n;
	char a[1000][40]={'\0'};
	char b[40];
	char *p=*a;
	char *q=&b[0];
	int i,j;
	int N;
	int num[1000]={0};
	int *x=num;
	int count=0;
	for(i=0;i<n;i++)
	{
		p=*(a+i);
		cin>>b;
		N=strlen(b);
		*(x+i)=N;
		for(j=0;j<N;j++)
		{
			*(p+j)=*(q+j);
		}
	}
	p=*a;
	for(i=0;i<n;i++)
	{
		p=*(a+i);
		if(count+*(x+i)<=80&&i!=n-1&&count+*(x+i)+*(x+i+1)+1<=80)
		{
			for(j=0;j<*(x+i);j++)
			{
				cout<<*(p+j);
			}	
			count=count+*(x+i)+1;
			cout<<" ";
			continue;
		}
		if(count+*(x+i)<=80&&i!=n-1&&count+*(x+i)+*(x+i+1)+1>80)
		{
			for(j=0;j<*(x+i);j++)
			{
				cout<<*(p+j);
			}	
			count=count+*(x+i)+1;
                           continue;
		}
		if(count+*(x+i)<=80&&i==n-1)
		{
			for(j=0;j<*(x+i);j++)
			{
				cout<<*(p+j);
			}	
			count=count+*(x+i)+1;
                           continue;
		}
		if(count+*(x+i)>80&&i!=n-1)
		{
			cout<<endl;
			for(j=0;j<*(x+i);j++)
			{
				cout<<*(p+j);
			}			
			count=*(x+i)+1;
			cout<<" ";
                           continue;
		}
		if(count+*(x+i)>80&&i==n-1)
		{
			cout<<endl;
			for(j=0;j<*(x+i);j++)
			{
				cout<<*(p+j);
			}			
			count=*(x+i)+1;
                           continue;
		}
	}
	return 0;
}