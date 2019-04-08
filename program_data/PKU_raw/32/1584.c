void main()
{
	int n,i,j,l1[100],l2[100];
	char str1[100][100],str2[100][100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",str1[i]);
		scanf("%s",str2[i]);
	}
	for(i=0;i<n;i++)
	{
		l1[i]=strlen(str1[i]);
		l2[i]=strlen(str2[i]);
		for(j=1;j<l2[i]+1;j++)
		{
			if(str1[i][l1[i]-j]  >=  str2[i][l2[i]-j])
			str1[i][l1[i]-j] = str1[i][l1[i]-j] - str2[i][l2[i]-j]+48;
			else
			{
				str1[i][l1[i]-j-1]=str1[i][l1[i]-j-1]-1;
				str1[i][l1[i]-j]=str1[i][l1[i]-j]+10-str2[i][l2[i]-j]+48;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s\n",str1[i]);
	}
}
