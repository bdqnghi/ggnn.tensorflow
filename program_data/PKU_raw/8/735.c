int s1,s2;
int reads()
{
	int a;
	cin>>a;
	return a;
}
void reada(int a[])
{
	for(int i=1;i<=s1;i++)
	{
		cin>>a[i];
	}
}
void readb(int b[])
{
	for(int i=1;i<=s2;i++)
	{
		cin>>b[i];
	}
}
void reordera(int a[])
{
	for(int i=1;i<=s1-1;i++)
		for(int j=1;j<=s1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				int m=a[j];
				a[j]=a[j+1];
				a[j+1]=m;
			}
		}
}
void reorderb(int b[])
{
	for(int i=1;i<=s2-1;i++)
		for(int j=1;j<=s2-i;j++)
		{
			if(b[j]>b[j+1])
			{
				int m=b[j];
				b[j]=b[j+1];
				b[j+1]=m;
			}
		}
}
void hebing(int a[],int b[],int c[])
{
	for(int i=1;i<=s1;i++)
		c[i]=a[i];
	for(int i=s1+1;i<=s1+s2;i++)
		c[i]=b[i-s1];
}
void output(int c[])
{
	for(int i=1;i<=s1+s2-1;i++)
		cout<<c[i]<<" ";
	cout<<c[s1+s2];
}

int main()
{
	int a[500],b[500],c[1000];
	s1=reads();//???????????
	s2=reads();
	reada(a);//???????
	readb(b);//???????
	reordera(a);//??????????
	reorderb(b);//??????????
	hebing(a,b,c);//??????
	output(c);//????????
	return 0;
}