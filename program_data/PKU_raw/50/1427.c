int main()
{
	int i,w;
	scanf("%d",&w);

	for(i=1;i<=365;i++)
	{
		if(i%7+w==13||i%7+w==6)
		{
			if(i==13)
				printf("1\n");
			if(i==44)
				printf("2\n");
			if(i==72)
				printf("3\n");
			if(i==103)
				printf("4\n");
			if(i==133)
				printf("5\n");
			if(i==164)
				printf("6\n");
			if(i==194)
				printf("7\n");
			if(i==225)
				printf("8\n");
			if(i==256)
				printf("9\n");
			if(i==286)
				printf("10\n");
			if(i==317)
				printf("11\n");
			if(i==347)
				printf("12\n");
		}
	}
	
	
	


	return 0;
}

