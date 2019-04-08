main()
{
	char str1[100],str2[100],str3[100];
	int temp1,temp2,l1,l2,max;
	while(scanf("%s%s",str1,str2)!=EOF)
	{
		l1=strlen(str1);
		l2=strlen(str2);
		max=0;
		for(temp1=1;temp1<=l1-1;temp1++)
		{
			if(str1[temp1]>str1[max])
				max=temp1;
		}
		for(temp1=max+1,temp2=0;temp1<=l1-1;temp1++,temp2++)
		{
			str3[temp2]=str1[temp1];
			str1[temp1]='\0';
		}
		str3[temp2]='\0';
		strcat(str1,str2);
		strcat(str1,str3);
		puts(str1);
	}
	return 0;
}