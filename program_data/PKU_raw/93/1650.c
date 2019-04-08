int main()
{
	int a;
	int result[4]={0};
	char c='n';

	scanf("%d",&a);

	if(a%3==0)
	{
		result[1]=3;
	}
	else
	{
		result[1]=0;
	}

	if(a%5==0)
	{
		result[2]=5;
	}
	else
	{
		result[2]=0;
	}

	if(a%7==0)
	{
		result[3]=7;
	}
	else
	{
		result[3]=0;
	}


	if (result[1]!=0 && result[2]==0 && result[3]==0)
	{
		printf("%d",result[1]);
	}

	if (result[1]==0 && result[2]!=0 && result[3]==0)
	{
		printf("%d",result[2]);
	}

	if (result[1]==0 && result[2]==0 && result[3]!=0)
	{
		printf("%d",result[3]);
	}

	if (result[1]!=0 && result[2]!=0 && result[3]==0)
	{
		printf("%d %d",result[1],result[2]);
	}

	if (result[1]!=0 && result[2]==0 && result[3]!=0)
	{
		printf("%d %d",result[1],result[3]);
	}

	if (result[1]==0 && result[2]!=0 && result[3]!=0)
	{
		printf("%d %d",result[2],result[3]);
	}

	if (result[1]!=0 && result[2]!=0 && result[3]!=0)
	{
		printf("%d %d %d",result[1],result[2],result[3]);
	}



	if (result[1]==0 && result[2]==0 && result[3]==0)
	{
		printf("%c",c);
	}

	return 0;
}

