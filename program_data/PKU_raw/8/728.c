void change(int a[],int b[],int c[])
{
	int x=0,y=0;
	cin>>x>>y;
	int i=0;
	for(i=0;i<x;i++)
		cin>>a[i];
	for(i=0;i<y;i++)
		cin>>b[i];
	int j=0,t=0;
	for(i=0;i<x-1;i++)
	{
		for(j=0;j<x-1-i;j++)
		{
			if(a[j]>a[j+1])
			{t=a[j];a[j]=a[j+1];a[j+1]=t;}
		}
	}
	for(i=0;i<y-1;i++)
	{
		for(j=0;j<y-1-i;j++)
		{
			if(b[j]>b[j+1])
			{t=b[j];b[j]=b[j+1];b[j+1]=t;}
		}
	}
	for(i=0;i<x;i++)
		c[i]=a[i];
	for(i=x;i<x+y;i++)
		c[i]=b[i-x];
	for(i=0;i<x+y-1;i++)
		cout<<c[i]<<' ';
	cout<<c[x+y-1];
}//?????????????
int main()
{
	int a[1000]={0},b[1000]={0},c[2000]={0};
	change(a,b,c);//????
	return 0;
}