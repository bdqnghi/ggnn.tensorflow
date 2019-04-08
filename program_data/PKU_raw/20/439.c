void main()
{
	char s1[11],s2[4];
	int i,j,n,b;
	while (scanf("%s%s",s1,s2)!=EOF)
	{
		n=strlen(s1)-1;
		j=0;
		b=s1[0];
		for(i=0;i<=n-1;i++)
		{
			if(b<s1[i]){j=i;b=s1[i];}
		}//printf("%d",j);
//		printf("%d\n",j);
		for(i=0;i<=j;i++)
		{
			printf("%c",s1[i]);
		}
		printf("%s",s2);
		while (j<n)
		{
			printf("%c",s1[j+1]);
			j++;
		}
                printf("\n");
//		printf("%c",s1[j+1]);
/*		for (i=j+1;i<=n;j++)
		{
			printf("%c",s1[i]);
		}*/
        

	}
}