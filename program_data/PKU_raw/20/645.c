void main()
{
	int j,i,max=0;
    char str[11]={0},substr[4]={0},s[20]={0},*p;
	
	while(scanf("%s %s",str,substr)!=EOF)
	{   max=str[0];j=0;p=&str[0];
		for(i=0;str[i]!=0;i++)
			if(str[i]>max)
			{
				max=str[i];
				p=&str[i];
				j=i;
			}
		strncat(s,str,j+1);
		strcat(s,substr);
		strcat(s,p+1);
		printf("%s\n",s);
		strcpy(s,"");strcpy(str,"");strcpy(substr,"");
	}
}
