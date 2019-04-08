void main()
{
	char str[11],strsub[4],str2[14];
	int i,j,max,maxnum;
	while (scanf("%s %s",str,strsub)!=EOF)
	{
		max=0;
		for(j=0;;j++)
		{
			if(str[j]=='\0') break;
			if(str[j]>max) 
			{
				max=str[j];
				maxnum=j;
			}
		}
		for(i=0;i<=maxnum;i++) str2[i]=str[i];
		str2[maxnum+1]='\0';
		strcat(str2,strsub);
		for(i=maxnum+4;;i++) 
		{
			if(str[i-3]=='\0') break;
			str2[i]=str[i-3];
		}
		str2[i]='\0';
		puts(str2);
	}
}
