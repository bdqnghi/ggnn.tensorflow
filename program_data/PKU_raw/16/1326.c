int main()
{
	int n,i,s=0,a,b;
	scanf("%d",&n);
    if(n%10==0) 
       {
       	if(n==0) printf("");
        else
        {printf("0");
	for(n=n/10;n%10==0;n=n/10)
	   {printf("0");}
	for(;n>=1;n=n/10)
	{
	i=n%10;
	s=s*10+i;
	}
	}
}
	else
		for(;n>=1;n=n/10)
	{
	i=n%10;
	s=s*10+i;
	}
	printf("%d",s);
return 0;
}