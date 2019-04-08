int main()
{
	int n=0,i=0,j=0;
	cin>>n;
	int a[100000]={0},b[100000]={0},c[100000]={0};
	do
	{
		cin>>i>>j;
		if(i==0&&j==0)
		break;
		else
		{
			a[i]=1;
			b[j]++;
		}
	}while(i!=0||j!=0);
	int *p=NULL,*q=NULL,tj=0,t=0,f=0;			
	p=&a[0];
	q=&b[0];
	for(t=0;t<n;t++)
	{
		if(*p==0&&*q==(n-1))
		{
			c[f]=t;
			tj++;
		}
		p++;
		q++;
	}
	if(tj==0)
	{
		cout<<"NOT FOUND"<<endl;
	}
	else
	{
		for(f=0;f<tj;f++)
		{
			if(f==tj-1)
			{
				cout<<c[f]<<endl;
			}
			else
			{
				cout<<c[f]<<" ";
			}
		}
	}
	return 0;
}
