void read(int n,int a[100]) //??
{
	int i=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
int paixu(int a[100],int n) //??
{
	int i,j,t;
    for(j=n-2;j>=0;j--)
		for(i=0;i<=j;i++)
		{
			if(a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;

			}
		}
	return(*a);
}
void mix(int a[],int b[],int c[],int e,int d)  //??
{
	int i=0,t;
	for (i=0;i<e;i++)
	{
		c[i]=a[i];
	}
	for (i=0;i<d;i++)
	{
		c[i+e]=b[i];
	}
	
}
void out(int c[300],int e,int d)        //??
{
	int i=0;
	for(i=0;i<e+d-1;i++)
	{
		cout<<c[i]<<" ";
	}
	cout<<c[e+d-1];
}
int main( )
{
	int a[100],b[100],c[300],i=0,x,y;
	cin>>x>>y;
	read(x,a);
	read(y,b);
	paixu(a,x);
	paixu(b,y);
	mix(a,b,c,x,y);
	out(c,x,y);
	return 0;
}


