int main()
{
	char zfc[301];
	char zm[53]="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	int number[52];
	int p=0,k=0;
	gets(zfc);
	int i;
	for (i=0;i<52;i++)
	{
		number[i]=0;
		for(k=0;zfc[k]!='\0';k++)
		{
			if(zfc[k]==zm[i])
			{
				number[i]++;
			}
		}
	}
	for(i=0;i<52;i++)
	{
		if(number[i]!=0)
		{
			p=1;
			printf("%c=%d\n",zm[i],number[i]);
		}
	}
	if(p==0)
	{
		printf("No");
	}
	return 0;
}
		