int f(int x)
{
	int i,z;
	z=1;
	for (i=2;i<=x/2;i++)
			if (x%i==0)
				z=0;
	return(z);
}

int g ( int x)
{
	char str[10]={'0'};
	int j=0,i,z=1;
	while (x>0)
	{
		str[j]=x%10+'0';
		x=x/10;
		j++;
	}
	for(i=0;i<j;i++)
		if (str[i]!=str[j-1-i])
			z=0;
	return(z);
}
void main()
{
	int m,n,i,a[1000]={0},k=0;
   scanf("%d %d",&m,&n);
   for (i=m;i<=n;i++)
	   if (f(i) &&g(i))
	   {
		   a[k]=i;
		   k++;
	   }
   if (a[0]==0)  printf("no");
   else
   {
	   printf("%d",a[0]);
	   for (i=1;i<k;i++)
		   printf(",%d",a[i]);
   }

}