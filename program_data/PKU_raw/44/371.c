int reverse(int a);
int main()
{
	int a,i;
	for(i=0;i<6;i++)
	{
		scanf("%d",&a);
		reverse(a);
		if(a==0)
			printf("0");
		printf("\n");
	}
	scanf("%d",1);
	return 0;
}
int reverse(int a)
{
	int d=0;
	if(a<0)
	{
		printf("-");
		a=-a;
	}
	while(1)
	{
        if(d==1)
            printf("%d",a%10);
		if(a%10!=0&&d==0)
		{
	        printf("%d",a%10);
			d=1;
		}
		
	    a=a/10;
	    if(a==0)
			break;
	}
	return 0;
}