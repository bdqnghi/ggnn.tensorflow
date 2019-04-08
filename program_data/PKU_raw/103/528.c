int main()
{
	char zfc[1002]={0},t;
	scanf("%s",zfc);
	int i,sum=0,n=strlen(zfc),m='A'-'a';
	for(i=0;i<n;i++)
	{
		if(zfc[i]>='a'&&zfc[i]<='z')
		{
			zfc[i]+=m;
		}
	}
	t=zfc[0];
	for(i=0;i<=n;i++)
	{
		if(zfc[i]!=t)
		{
			printf("(%c,%d)",t,sum);
			sum=1;
			t=zfc[i];
		}
		else
		{
			sum++;
		}
	}
	return 0;
 }
