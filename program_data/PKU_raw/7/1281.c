int main()
{
	char str[300]={"\0"};
	char sub[300]={"\0"};
	char re[300]={"\0"};
	char t[300];
	char pre[300]={"\0"};
	char post[300]={"\0"};
	gets(str);
	gets(sub);
	gets(re);
	int i,j,k;
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]==sub[0])
		{
			for(j=0;j<299;j++)t[j]='\0';
			for(j=0;j<strlen(sub);j++)t[j]=str[i+j];
			if(strcmp(t,sub)==0)
			{
				for(j=0;j<i;j++)pre[j]=str[j];
				for(j=i+strlen(sub);j<strlen(str);j++)post[j-i-strlen(sub)]=str[j];
				printf("%s%s%s\n",pre,re,post);
				return 0;
			}

		}
	}
	printf("%s\n",str);
	return 0;
}