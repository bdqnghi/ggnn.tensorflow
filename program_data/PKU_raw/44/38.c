void main()
{
	int reverse(int num);
	int r[6],p[6],i;
	for(i=0;i<6;i++)
	{scanf("%d",&r[i]);
	p[i]=reverse(r[i]);}
	for(i=0;i<6;i++)
	printf("%d\n",p[i]);
}
int reverse(int num)
{
	int i=0,t,j,k,m,c=0;
	int a[1000],q;
	q=abs(num);/*?????????????*/
	i=log10(q);
	for(t=i,j=0;t>=0;t--,j++)
	{a[j]=q/pow(10,t);
	q=q-a[j]*pow(10,t);}
		for(k=0,c=0;k<j;k++)
		c=c+a[k]*pow(10,k);
		if(num>=0)
			return(c);
		else
			return(-c);
	
    
}

