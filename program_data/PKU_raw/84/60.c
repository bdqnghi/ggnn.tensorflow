

void swep(int *m,int*n)
{
	int t;
	t=*m;
	*m=*n;
	*n=t;
}

main()
{int n;
int i;
int *a;
int b,c;

cin>>n;
a=(int*)malloc(sizeof(int)*n);

for(i=0;i<n;i++)
	cin>>a[i];

b=a[0];
c=a[1];
if(c>b)
swep(&b,&c);

for(i=2;i<n;i++)
{
	if(a[i]>b)
	{
		c=b;
		b=a[i];
	}
	else if (a[i]>c)
		c=a[i];
}
cout<<b<<endl<<c;
return 0;
}
