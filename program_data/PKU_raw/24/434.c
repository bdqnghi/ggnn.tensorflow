void main()
{
	char s[500];
	char a[50][20];
	int i,len,j=0,k,max,min;
	gets(s);
	len=strlen(s);
	for(i=0;i<50;i++)
	{
		for(k=0;k<20;k++)
			a[i][k]=0;
	}
	k=0;
	for(i=0;i<len;i++)
	{
		if(s[i]!=' ')
		{
			a[j][k]=s[i];
			k++;
		}
		else
		{
			k=0;
			j++;
		}
	}
	max=strlen(a[0]);
	min=max;
	for(i=1;i<=j;i++)
	{
		if(max<(strlen(a[i])))
			max=strlen(a[i]);
		else if(min>strlen(a[i]))
			min=strlen(a[i]);
	}
	for(i=0;i<=j;i++)
	{
		if(strlen(a[i])==max)
		{
			puts(a[i]);
			break;
		}
	}
	for(i=0;i<=j;i++)
	{
		if(strlen(a[i])==min)
		{
			puts(a[i]);
			break;
		}
	}
}

	


	