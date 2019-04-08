int main()
{
	int max=0;
	int n,m,len,i,j,k,count[500]={1};
	char s1[502];
	scanf("%d %s",&n,s1);
	len=strlen(s1);
	m=len-n+1;
	for(i=0;i<m,s1[i]!='\0';i++)
	{
		count[i]=1;
		for(j=i+1;j<m;j++)
		{
			k=0;
			while(k<n)
			{
			  if(s1[i+k]==s1[j+k]) k++;
			  else break;
			}
			if(k==n) count[i]++;
		}
	}
	for(i=0;i<m;i++)
	{
		if(max<=count[i]) max=count[i];
		else max=max;
	}
	if(max==1) printf("NO");
	else
	{
		printf("%d\n",max);
	for(i=0;i<m;i++)
	{
		if(count[i]==max)
		{
			for(k=0;k<n;k++)
			{
				printf("%c",s1[i+k]);
			}
		}
		printf("\n");
		
	}
	}
	return 0;
}







