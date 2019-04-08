void main()
{
	char s[1000];
	int n,i,j,k,m,count=0;
	gets(s);
	n=strlen(s);

	for(k=2;k<=n;k=k+2)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<k/2;j++)
			{
				if(s[i+j]==s[i+k-j-1])
					count++;
				if(j==k/2-1 && count==k/2)
				{
					for(m=i;m<i+k;m++)
						printf("%c",s[m]);
					printf("\n");
					count=0;
				}
				else if(j==k/2-1 && count!=k/2) count=0;
			}
		}
	}
}