void main()
{
	char str[500],string[2][250];
	int n,i,j,k;
	gets(str);
	n=strlen(str);
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(str[j]==str[j+i])
			{
				for(k=0;k<i+1;k++)
				{
					string[0][k]=str[j+k];
					string[0][i+1]='\0';
				}
				for(k=i;k>=0;k--)
				{
					string[1][i-k]=str[j+k];
					string[1][i+1]='\0';
				}
				if (strcmp(string[0],string[1])==0)
					printf("%s\n",string[0]);
			}
		}
	}
}