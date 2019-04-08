void main()
{
	char c[500];
	scanf("%s",&c);
	int i,j,k,l;
	for(i=2;i<=strlen(c);i++)
	{
		for(j=0;j+i-1<strlen(c);j++)
		{
			char s1[500]={'\0'},s2[500]={'\0'};
			for(k=j;k<=j+i-1;k++)
			{
				s1[k-j]=c[k];
			}
			for(l=0;l<i;l++)
			{
				s2[l]=s1[i-l-1];
			}
			if(strcmp(s1,s2)==0)
				printf("%s\n",s1);
		}
	}
}