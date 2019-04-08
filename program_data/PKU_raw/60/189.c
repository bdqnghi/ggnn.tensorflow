void main()
{
	int n;
	int a[3000];
	scanf ("%d", &n);
	a[0]=2;
	int i,j,k=0,t=1;
	for (j=3;j<=n;j++)
	{
		for (i=2;i<=j/2;i++)
		{
			if (j%i==0)
			{
				k++;
				break;
			   
			}
		}
	if (k==0) 
	{
		a[t]=j;
		t++;
	}
	k=0;
	}	
   for (i=1;i<t;i++)
	{
	    if(a[i+1]-a[i]==2)
		{
			printf("%d %d\n", a[i],a[i+1]);
		}
	}
   if (t==1||t==2) printf("empty");
}
