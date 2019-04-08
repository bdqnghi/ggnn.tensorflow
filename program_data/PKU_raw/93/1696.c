void main()
{
	int x,i,k;
	scanf("%d",&x);
	if(x%3!=0&&x%5!=0&&x%7!=0)printf("n");
    else
	{
		for(i=3,k=0;i<=7;i+=2)
		{
			if(k!=0&&x%i==0)printf(" ");
			if(x%i==0)
			{
				printf("%d",i);
				k++;
			}
		}
	}
}
