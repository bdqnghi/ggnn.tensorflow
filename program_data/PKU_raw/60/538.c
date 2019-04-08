int pan(int a)
{
	int p=1,i;
	for (i=3;i*i<=a;i=i+2)
	if (a%i==0) p=0;
	return (p);
}
void main()
{
	int n,i,j,k=0;
	scanf ("%d",&n);
	for (i=3;i<n-1;i=i+2)
	{
		if (pan(i)==1)
		if (pan(i+2)==1) {printf ("%d %d\n",i,i+2);k=1;}
		
	}
	if (k==0) printf ("empty");
}