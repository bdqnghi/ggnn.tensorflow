int main()
{
	char str[10000];
    int i=-1,j=0,len[300],k=0,n;
	gets(str);

    for(j=0;str[j]!='\0';j++)
	{
		if(str[j]==' '&&str[j-1]!=' ')
		{
			len[k]=j-i-1;
			k++;
		}
		if(str[j]==' '&&str[j+1]!=' ')
		{
			i=j;
		}
	}
	   for(n=0;n<k;n++)
	   {
		   printf("%d,",len[n]);
	   }
	   printf("%d",j-i-1);
		return 0;
}
