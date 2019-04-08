int main()
{
	char str1[50],str2[50];
	int i,k,n,m;
	while(scanf("%s%s",str1,str2)!=EOF)
	{
         k=0;
		 m=strlen(str1);
		for(i=0;i<m;i++)
		{
			if(str1[i]>str1[k])
				k=i;
		}
		n=strlen(str2);
		for(i=strlen(str1);i>k;i--)
			str1[i+n]=str1[i];
			for(i=0;i<n;i++)
				str1[k+1+i]=str2[i]; 
			printf("%s\n",str1);
	}
	return 0;
}