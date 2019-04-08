void main()
{
	char str[1000]={'\0'},substr[3],str2[1000]={'\0'};
	int i,l=0,max=0;
	while((scanf("%s %s",str,substr))!=EOF)
	{
		l=strlen(str);
		for(i=0;i<l;i++)
		{
			if(str[i]>str[max])
			{
				max=i;
			}
	
		}
		
		for(i=max+1;i<l;i++)
		{
			str2[i-1-max]=str[i];
		}
		str[max+1]=substr[0];
		str[max+2]=substr[1];
		str[max+3]=substr[2];
		str[max+4]='\0';
		strcat(str,str2);
		printf("%s\n",str);
		i=0;
		while(str2[i]!='\0')
		{
			str2[i]='\0';
			i++;
		}
	
	}
			

}
