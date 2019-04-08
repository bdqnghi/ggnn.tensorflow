int main()
{
	int n;
	scanf("%d",&n);
	char s[505]={'\0'},s1[100]={'\0'},s2[100]={'\0'};//s1?????,s2???s1??????????
	scanf("%s",s);
	int l=strlen(s),i,i1,j,j1,k=0,a[500]={0},num[500]={0},max=0;//i????????????i1?????????????j???s2???,j1?????s2???
	for(i=0;i<=l-n;i++)
	{
		if(a[i]==0)
		{
			for(i1=i;i1<=n+i-1;i1++)
				s1[k++]=s[i1];
			k=0;
			for(j=i+1;j<=l-n;j++)
			{
				for(j1=j;j1<=n+j-1;j1++)
					s2[k++]=s[j1];
				k=0;
				if(strcmp(s1,s2)==0)
				{
					a[j]=1;
					num[i]+=1;
				}
			}
		}
	}
	for(i=0;i<=499;i++)
	{
		if((num[i]+1)>max)
			max=num[i]+1;
	}
	if(max>1)
	{
		printf("%d\n",max);
		for(i=0;i<=499;i++)
		{
			if((num[i]+1)==max)
			{
				for(j=i;j<=i+n-1;j++)
					printf("%c",s[j]);
				printf("\n");
			}
		}
	}
	else
		printf("NO");
}