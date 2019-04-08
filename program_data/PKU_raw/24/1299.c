
int main()
{
	char zfc[200];
	char a[50][50];
	int ilen,i=0,m=0,k,b,j,c,len[50];
	
	gets(zfc);
	ilen=strlen(zfc);

	for(k=0;k<ilen;k++)
	{
		if(zfc[k]!=' ')
		{
			a[i][m]=zfc[k];
			m++;
		}
		else
		{
			a[i][m]='\0';
			m=0;
			i++;
		}
	}
	a[i][m]='\0';
    for(j=0;j<=i;j++)
	 {
        len[j]=strlen(a[j]);
	}

	 for(b=0,j=1;j<=i;j++)
	 {
        if(len[b]<len[j])
		{
			len[b]=len[j];
			b=j;
		}
	 }
	 len[0]=strlen(a[0]);
	 for(c=0,j=1;j<=i;j++)
	 {
         if(len[c]>len[j])
		{
			len[c]=len[j];
			c=j;
		}
	 }

	 printf("%s\n",a[b]);
     printf("%s\n",a[c]);
	 
	 return 0;
}
