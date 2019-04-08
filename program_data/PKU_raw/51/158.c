void main()
{
	int count[500]={0};
	int l=0,max=0,n,len,i,j,k,check,flag;
	char str[500];
	char ans[500][500];
	scanf("%d%s",&n,str);
	len=strlen(str);
	for (i=0;i<=len-n;i++)
	{
		check=0;
		for (j=1;j<=l;j++)
		{
			flag=0;
			for (k=0;k<n;k++)
			  if (ans[j][k]!=str[i+k])
				{flag=1;break;}
			if (flag==0) 
			{
				check=1;count[j]++;
				if (count[j]>max) max=count[j];
				break;
			}
		}
		if (check==0)
			{
				l++;
				for (j=0;j<n;j++)
					ans[l][j]=str[i+j];
				count[l]=1;
			}
	}
	if (max==0) printf("NO\n");
	else
	{
		printf("%d\n",max);
		for (i=1;i<=l;i++)
		{
			if (count[i]==max) 
			{
				for (j=0;j<n;j++)
					printf("%c",ans[i][j]);
				printf("\n");
			}
		}
	}
}
