main()
{
	char str[20],substr[4],str1[15]={0};
	int i,j,k,e,b;
	while((scanf("%s%s",str,substr))!=EOF)
	{
		b=strlen(str);
		for(j=0;j<b;j++)
		{
			e=0;
			for(k=0;k<b;k++)
			{
				if(str[k]>str[j]) e=1;
			}
			if(e==0) break;
		}
		for(k=0;k<=j;k++)
		{
			str1[k]=str[k];
		}
		for(k=0;k<3;k++)
		{
			str1[j+k+1]=substr[k];
		}
		for(k=j+1;k<b;k++)
		{
			str1[k+3]=str[k];
		}
		str1[b+3]=0;
		strcpy(str,str1);
		puts(str);
	}
	return 0;
}