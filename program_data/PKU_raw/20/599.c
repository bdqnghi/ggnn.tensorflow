void main()
{
	char str1[14]={"a"},str2[4]={"a"},str3[14]={"a"},str[14]={"a"};
	int i,n,k,p;
	char max;
	while(scanf("%s%s",str1,str2)!=EOF)
	{
		str3[0]='\0';
		str[0]='\0';
		p=0;
		n=strlen(str1);
		max=str1[0];
		for(i=0;i<n;i++)
		    if(str1[i]>max)
			{
				max=str1[i];
				k=i;
			}
		for(i=k+1;i<n;i++)
		{
			str3[p]=str1[i];
			p++;
		}
		str3[p]='\0';
		strncpy(str,str1,k+1);
		str[k+1]='\0';
		strcat(str,str2);
		strcat(str,str3);
		puts(str);
		printf("\n");
	}
}