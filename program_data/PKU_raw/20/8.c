void main()
{
	int i,j,k,l1;
	char str1[15],str2[4],c,d;
	while(scanf("%s",str1)!=EOF)
	{
		scanf("%s",str2);
		c=0;
		l1=strlen(str1);
		for(i=0;i<l1;i++)
		{
			d=(int)str1[i];
			if(d>c)
			{
				c=d;
			    j=i;
			}
		}
		for(k=l1+2,str1[k+1]='\0';k>j;k--)
		{
			str1[k]=str1[k-3];
		}
		str1[j+3]=str2[2];
		str1[j+2]=str2[1];
		str1[j+1]=str2[0];
		puts(str1);
	}
}