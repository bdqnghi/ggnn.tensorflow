int main()
{
	int n,i,j,k=0,flag,len,start,end,max=0,num[501]={0};
	char str[501],t[501][5]={0},temp[5];
	scanf("%d\n",&n);
	gets(str);
	len=strlen(str);
	for(start=0;start<=len-n;start++)
	{
		for(i=0;i<5;i++)
			temp[i]='\0';
		flag=0;
		end=start+n-1;
		j=0;
		for(i=start;i<=end;i++)
		{
			temp[j]=str[i];
			j++;
		}
		for(i=0;i<=k;i++)
		{
			if(strcmp(temp,t[i])==0)
			{
				num[i]++;
				flag=1;
				break;
			}
			else
				continue;
		}
		if(flag==0)
		{
			strcpy(t[k],temp);
			num[k]++;
			k++;
		}
	}
	for(i=0;i<k;i++)
	{
		if(num[i]>max)
			max=num[i];
	}
	if(max==1)
	{
		printf("NO");
		return 0;
	}
	printf("%d\n",max);
	for(i=0;i<k;i++)
	{
	//	printf("%d",num[i]);
	if(num[i]==max)
			puts(t[i]);
	}
	return 0;
}