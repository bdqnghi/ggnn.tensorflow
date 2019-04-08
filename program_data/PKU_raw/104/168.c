void main()
{
	int a[500]={0},b[500]={0},m,n,x=0,y=0,i;
	scanf("%d %d",&m,&n);
	if (m==n)
	{	printf("%d\n",m);}
	else
	{
		a[0]=m;
		b[0]=n;
	    for (i=1;m!=1;i++)
		{
		    if (m%2==0)
			{	m=m/2;}
		    else
			{   m=(m-1)/2;}
		    a[i]=m;
		}
        for (i=1;n!=1;i++)
		{
		    if (n%2==0)
			{	n=n/2;}
		    else
			{   n=(n-1)/2;}
		    b[i]=n;
		}
	    for (i=0;a[i]!=0;i++)
		{	x=x+1;}
        for (i=0;b[i]!=0;i++)
		{	y=y+1;}
	    if (a[0]==1 || b[0]==1)
		{	printf("1\n");}
	    else
		{
	        for (i=1;x-1-i>=0 && y-1-i>=0;i++)
			{ 	if (a[x-1-i]!=b[y-1-i])
			     {break;}
			}
	        printf("%d\n",a[x-i]);
		}
	}
}