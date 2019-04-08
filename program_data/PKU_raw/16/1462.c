int main()
{
	int a,b[5],n,i;
	scanf("%d",&a);
        if(a!=0)
	{n=log10(a)+1;		
	for (i=0;i<=n-1;i++)
	{
		b[i]=(int)(a/pow(10,i))%10;		//??????????
	}
	for (i=0;i<=n-1;i++)
		printf("%d",b[i]);		//????
	printf("\n");}
        else printf("0");
	return 0;
}
