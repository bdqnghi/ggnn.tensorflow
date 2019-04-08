int main()
{
	char str[300];
	char count[26]={0},c[26]={0};
	int i=0,len,k,m,n=0;
	scanf("%s",str);
    len = strlen(str);
	for(i=0;i<len;i++)
	{
		if((str[i]>='a')&&(str[i]<='z'))
		{
			k=str[i]-97;
			count[k]++;
		}
        if((str[i]>='A')&&(str[i]<='Z'))
		{
			m=str[i]-65;
			c[m]++;
		}
	}
	for(m=0;m<26;m++)
	{
	   if(c[m]!=0)
	   {
		 i=m+65;
         printf("%c=%d\n",i,c[m]);
	   }
    	else
		{
		  n++;
		}
	}
    for(k=0;k<26;k++)
	{
       if(count[k]!=0)
	   {
		 i=k+97;
         printf("%c=%d\n",i,count[k]);
	   }
    	else
		{
	    	n++;
		}
	}
	if(n==52)
	{
		printf("No");
	}
return 0;
}