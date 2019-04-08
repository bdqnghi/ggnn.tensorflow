int func(n);
int funk(n);
void main()
{
	int a,b,k,j,i,t=0;
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
	{
		k=func(i);
        j=funk(i);
		if(k==1&&j==1&&t==0) {t=1;printf("%d",i);continue;}
		if(k==1&&j==1&&t==1) printf(",%d",i);
	}
	if(t==0) printf("no");
}
int func(n)
{
	int i,j=9,k=1,a[10];
	for(i=0;i<10;i++)
	{
		a[i]=n%10;
		n=n/10;
	}
	for(i=9;;i--)
	{
		if(a[i]!=0) {j=i;break;}
	}
	for(i=0;i<=j;i++)
	{
		if(a[i]!=a[j-i]) {k=0;;break;}
	}
	return(k);
}
int funk(n)
{
	int i,j=1;
	for(i=2;i<sqrt(n)+1;i++)
	{
		if(n%i==0) {j=0;break;}
	}
	return(j);
}

