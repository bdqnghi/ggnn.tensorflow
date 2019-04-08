int fold(int a)
{
	int f,i;
	int k;
	if(a<10)
		return(a);
	else
	{
		k=a%10;
		a=a/10;
		for(i=1;i<=a;i=i*10);
		f=k*i+fold(a);
		return(f);
	}
}
void main()
{
	int m,n,i,j,t=0,k=0;
	scanf("%d%d",&m,&n);
	if(m%2==0)m++;
	for(i=m;i<=n;)
	{
		if(i%2==0)
			goto a1;
		for(j=3;j<sqrt(i)+1;j+=2)
			if(i%j==0)
				goto a1;
		t=fold(i);
		if(t==i)
		{
			if(k==0)
			{printf("%d",i);k++;}
			else
				printf(",%d",i);
		}
a1:     i=i+2;
	}
	if(k==0)
		printf("no");
}
