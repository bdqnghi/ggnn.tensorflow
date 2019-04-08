int main()
{
	int n;
	scanf("%d",&n);
	char str[500];
	char gram[500][5]={'\0'};
	scanf("%s",str);
	//?????gram
	int i1;
	//?????\0???????????
	for(i1=0;str[i1+n-1]!='\0';i1++)
	{
		int i2;
		for(i2=i1;i2<=(n-1+i1);i2++)
		{
			gram[i1][i2-i1]=str[i2];
		}
	}
	int gram_len=i1;
	//???gram?????????
	int gram_count[500]={0};
	int i2;
	for(i2=0;i2<=gram_len-1;i2++)
	{
		int i3;
		for(i3=i2;i3<=gram_len-1;i3++)
		{
			if(strcmp(gram[i2],gram[i3])==0)
			{
				gram_count[i2]++;
			}
		}
	}
	//???gram_count???????
	int max=gram_count[0];
	int i3;
	for(i3=0;gram_count[i3]!=0;i3++)
	{
		if(gram_count[i3]>max)
		{
			max=gram_count[i3];
		}
	}
	//??????max????printf
	if(max==1)
	{
		printf("NO");
	}
	else
	{
	printf("%d\n",max);
	int i4;
	for (i4=0;gram_count[i4]!=0;i4++)
	{
		if(gram_count[i4]==max)
		{
			printf("%s\n",gram[i4]);
		}
	}
	}
	return 0;
}