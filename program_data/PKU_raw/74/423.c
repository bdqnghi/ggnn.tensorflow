int sushu(int n)
{
	int i,flag=1;
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
		{flag=0;break;}
	}
	return(flag);
}
int huiwen(int n)
{
	char a[10];
	int i=0,flag=0,j;
		while(n!=0)
		{
			a[i]=n%10;
			n=n/10;
			i++;
		}
		a[i]='\0';
	for(j=0;j<i/2;j++)
	{
		if(a[j]!=a[i-j-1]) break;
	}
	if (j==i/2) flag=1;
	return(flag);
}

void main()
{
	int m,n,i,flag=0;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		if (sushu(i))
		   if (huiwen(i)) 
		   {
			   if (flag==0) {printf("%d",i);flag++;}
			   else printf(",%d",i);
		   }
	}
	if(flag==0) printf("no");
}