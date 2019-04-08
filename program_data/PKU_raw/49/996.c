void f(char s[502],int m)
{   
	char s1[502];
	int i,k=0;
	m=strlen(s);
    for(i=0;i<m;i++)
	{
		s1[m-1-i]=s[i];
	}
	for(i=0;i<m;i++)
	{
		if(s1[i]==s[i])
			k++;
		else break;
	}
	if(k==m)
		printf("%s\n",s);
}
int main()
{
   char s[502],str[502];
   int n,i,j,k;
   gets(s);
   n=strlen(s);
   for(i=2;i<=n;i++)
   {
	   for(j=0;j<=n-i;j++)
	   {
		   for(k=0;k<i;k++)
		   {
			   str[k]=s[j+k];
		   }
		   str[i]='\0';
           f(str,i);
	   }
   }
   return 0;
}
