int main()
{
	char str[100][20];
	char sample1[54];
	char sample2[64];
	int n;
	int i,j,k,tmp1,tmp2,tmp3,length;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",str[i]);
	}
	for(i=0;i<26;i++)
		sample1[i]=i+65;
	for(;i<52;i++)
		sample1[i]=i+71;
	sample1[53]=95;
	for(i=0;i<53;i++)
		sample2[i]=sample1[i];
	for(;i<63;i++)
		sample2[i]=i-5;
	sample2[63]=95;
	for(i=0;i<n;i++)
	{
		length=strlen(str[i]);
		for(j=0,tmp1=1;j<54;j++)
		{
			if(str[i][0]==sample1[j])
			{
				tmp1=0;
				break;
			}
		}
		if(tmp1==1)
		{
			printf("no\n");
			continue;
		}
		for(j=1,tmp3=1;j<length;j++)
		{
			for(k=0,tmp2=1;k<64;k++)
			{
				if(str[i][j]==sample2[k])
				{
					tmp2=0;
					break;
				}
			}
			if(tmp2==1)
			{
				printf("no\n");
				tmp3=0;
			}
			else
			{
				continue;
			}
			if(tmp3==0)
				break;
		}
		if(j==length)
			printf("yes\n");
	}
	return 0;
}
