int main()
{
	int n,i,j,k,l,ans[500]={0},max,p;
	char a[500],b[500][5];
	scanf("%d",&n);
	scanf("%s",&a);
	l=strlen(a);
	k=0;
	for(i=0;i<=l-n;i++)
	{
		for(p=i,j=0;j<n;j++,p++)
		{
			b[k][j]=a[p];
		}
		k++;
	}
	max=0;
	for(i=0;i<k;i++)
	{
		for(j=i;j<k;j++)
		{
			if(strcmp(b[i],b[j])==0)
			{
				ans[i]++;
			}
		}
		if(ans[i]>=max){max=ans[i];}
	}

	if(max==1){printf("NO");return 0;}
	printf("%d\n",max);
	for(i=0;i<k;i++)
	{
		if(ans[i]==max)
		{
			
			printf("%s\n",b[i]);

		}
	}
	
	

}