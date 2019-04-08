void main()
{
	char str1[5000],str2[5000];
	int x[1001],y[1001];
	int i,j,k=0,min=1000,max=0,high=0,count=0,num;
	for(i=0;i<=1000;i++)
	{
		x[i]=0;
		y[i]=0;
	}
	gets(str1);
	gets(str2);
	for(i=0;i<strlen(str1);)
	{
		if(str1[i]>='0'&&str1[i]<='9')
		{
			for(j=i;str1[j]>='0'&&str1[j]<='9';j++)
			{
				x[k]=x[k]*10+str1[j]-'0';
			}
			if(x[k]<min)
				min=x[k];
			k++;
			count++;
			i=j;
		}
		else i++;
	}
	k=0;
	for(i=0;i<strlen(str2);i++)
	{
		if(str2[i]>='0'&&str2[i]<='9')
		{	
			for(j=i;str2[j]>='0'&&str2[j]<='9';j++)
			{
				y[k]=y[k]*10+str2[j]-'0';
			}
			if(y[k]>max)
				max=y[k];
			k++;
			i=j;
		}
		else i++;
	}
	for(i=min;i<=max;i++)
	{
		num=0;
		for(j=0;j<count;j++)
		{
			if(x[j]<=i&&y[j]>i)
				num++;
		}
		if(num>high)
			high=num;
	}
	printf("%d %d\n",count,high);
}


