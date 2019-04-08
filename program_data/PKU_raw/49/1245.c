int main()
{
	char c1[600],c2[600];
	int i,j,k,l1;
	scanf("%s",c1);
	l1=strlen(c1);
	for(i=2;i<=l1;i++)
	{
		for(j=0;j<=l1-i;j++)
		{
			for(k=0;k<600;k++)
			{
				c2[k]=0;
			}
			for(k=0;k<i;k++)
			{
				c2[k]=c1[j+k];
			}
			
			for(k=0;k<i/2;k++)
			{
				if(c2[k]!=c2[i-1-k]) break;
			}
			if(k==i/2) printf("%s\n",c2);
		}
	}
	return 0;
}
