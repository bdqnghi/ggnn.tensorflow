int a[20],b[20],c[40],la=0,lb=0;
int read(int a[],int b[]);
int sort(int a[],int b[]);
int catenate(int a[],int b[],int c[]);
int print(int c[],int l);
int main()
{
	read(a,b);
	sort(a,b);
	catenate(a,b,c);
	print(c,la+lb);
	return 0;
}
int read(int a[],int b[])
{
	int i;
	cin>>la>>lb;
	for(i=1;i<=la;i++) cin>>a[i];
	for(i=1;i<=lb;i++) cin>>b[i];
	return 0;
}
int sort(int a[],int b[])
{
	int i,j,change;
	for(i=1;i<la;i++)
		for(j=1;j<=la-i;j++)
			if(a[j]>a[j+1])
			{
				change=a[j];
				a[j]=a[j+1];
				a[j+1]=change;
			}
	for(i=1;i<lb;i++)
		for(j=1;j<=lb-i;j++)
			if(b[j]>b[j+1])
			{
				change=b[j];
				b[j]=b[j+1];
				b[j+1]=change;
			}
	return 0;
}
int catenate(int a[],int b[],int c[])
{
	int i;
	for(i=1;i<=la;i++) c[i]=a[i];
	for(i=1;i<=lb;i++) c[la+i]=b[i];
	return 0;
}
int print(int c[],int l)
{
	int i;
	cout<<c[1];
	for(i=2;i<=l;i++) cout<<" "<<c[i];
	return 0;
}