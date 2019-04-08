int prime(int x)
{
	int flag=1,i;
	for(i=2;i<x/2&&flag==1;i++)
		if(x%i==0) flag=0;
	return(flag);
}
int huiwen(int x)
{
	int flag=1,i,k;
    int digit[9];
    for(k=0;x!=0;k++)
	{
        digit[k]=x%10;
        x/=10;
	}
    k=k-1;
    for(i=0;i<k;i++,k--)
        if(digit[i]!=digit[k]) break;
    if(i<k) flag=0;
	return(flag);
}
void main()
{
	int m,n,i,j;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
		if(prime(i)!=0&&huiwen(i)!=0)
		{printf("%d",i);break;}
	if(i>n) printf("no");
	for(j=i+2;j<=n;j=j+2)
		if(prime(j)!=0&&huiwen(j)!=0)
		printf(",%d",j);
}