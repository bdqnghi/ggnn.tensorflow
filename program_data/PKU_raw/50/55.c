int main()
{
	int a[13]={0,13,44,72,103,133,164,194,225,256,286,317,347};
	int b[13], w,i ;
	scanf("%d", &w);
	for (i=1; i<=12; i++)
	{
		b[i]=a[i]%7;
	}

	if( w!=7 )
	{
		for(i = 1;i <=12; i++)
		{
			if( b[i] == 6 - w)
				printf("%d\n",i);
		}
	}

	if( w==7 )
	{
		for(i=1; i<=12; i++)
		{
			if(b[i] == 6)
				printf("%d\n",i);
		}

	}
	return 0;	
}