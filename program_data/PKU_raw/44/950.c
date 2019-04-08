int reverse(int n);



void main()
{
	int i,c[6],d[6],x;
	for(i=0;i<6;i++)
		scanf("%d",&c[i]);
	for(i=0;i<6;i++)
	{
		x=c[i];
		d[i]=reverse(x);
		printf("%d\n",d[i]);
	}
}


int reverse(int n)
{
	int m,a[32],x,i,j,b;
	if(n==0)
		m=0;
	else
	{
		i=0;
	    j=0;
	   while(n!=0)
	{
		b=n/10;
		a[i]=n%10;
		n=b;
		i++;
		j++;
	
	}
	x=0;
	i=0;
	while(j!=0)
	{
		x=x*10+a[i];
		j--;
		i++;
	
	}
	m=x;
	}
	return(m);

}