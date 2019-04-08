int n,l,p;
int sum=0;
int a[105][105];

void g()
{
	int i,j;
	int t;
	for(i=1;i<=n-p;i++)
	{
		t=*(*(a+i)+1);
		for(j=1;j<=n-p;j++) if(*(*(a+i)+j)<t) t=*(*(a+i)+j);
		for(j=1;j<=n-p;j++) *(*(a+i)+j)-=t;
	}
	for(i=1;i<=n-p;i++)
	{
		t=*(*(a+1)+i);
		for(j=1;j<=n-p;j++) if(*(*(a+j)+i)<t) t=*(*(a+j)+i);
		for(j=1;j<=n-p;j++) *(*(a+j)+i)-=t;
	}
}

void f()
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=2;j<n;j++) *(*(a+i)+j)=*(*(a+i)+j+1);
	}
	for(j=1;j<=n;j++) for(i=2;i<=n;i++) *(*(a+i)+j)=*(*(a+i+1)+j);
}
int main()
{
	int i,j;
	cin>>n;
	for(l=0;l<n;l++)
	{
		sum=0;
		for(i=1;i<=n;i++) for(j=1;j<=n;j++) cin>>*(*(a+i)+j);
		for(p=0;p<n;p++) 
		{	
			
			g();
			sum+=(*(*(a+2)+2));
			f();
		}
		
		cout<<sum<<endl;
	}
	return 0;
}
