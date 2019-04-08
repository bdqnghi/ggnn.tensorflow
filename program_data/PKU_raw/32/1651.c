int main()
{
    char str1[100][100],str2[100][100],str3[100][100];
	char s[100][100];
	int n,i,j,k,a1[100],a2[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		gets(str3[i]);
		gets(str1[i]);
		gets(str2[i]);
	}
	for(i=0;i<n;i++)
	{
		a1[i]=strlen(str1[i]);
		a2[i]=strlen(str2[i]);
	}
	for(i=0;i<n;i++)
	{
		s[i][a1[i]]='\0';
        for(j=a2[i]-1;j>=0;j--)
		{
		   if(str1[i][j+a1[i]-a2[i]]>=str2[i][j])
			   s[i][j+a1[i]-a2[i]]=str1[i][j+a1[i]-a2[i]]-str2[i][j]+48;
		   else
		   {  s[i][j+a1[i]-a2[i]]=str1[i][j+a1[i]-a2[i]]-str2[i][j]+58;
		      str1[i][j+a1[i]-a2[i]-1]=str1[i][j+a1[i]-a2[i]-1]-1;
		   }
		}
	    for(k=0;k<a1[i]-a2[i];k++)
			s[i][k]=str1[i][k];
	}
	for(i=0;i<n;i++)
		printf("%s\n",s[i]);
}
		       





