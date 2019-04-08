
int main()
{
	int i,j=0,flag=0;
    char s[100],a[100],b[100],temp[100];
	gets(s);
	gets(a);
	gets(b);
    for(i=0;s[i]!='\0';i++)
	{
		if(flag==1&&s[i]!=' ')
		{
			temp[j]=s[i];
			j=j+1;
		}
		else if(flag==0&&s[i]!=' ')
		{
			flag=1;
            j=0;
			temp[j]=s[i];
			j=j+1;
		}
		else if(flag==1&&s[i]==' ')
		{
			temp[j]='\0';
			if(strcmp(temp,a)==0)
				printf("%s ",b);
			else
				printf("%s ",temp);
			flag=0;
			j=0;
		}
		else
			printf("%c",s[i]);
	}		
	temp[j]='\0';
	if(strcmp(temp,a)==0)
		printf("%s\n",b);
	else
		printf("%s\n",temp);
   return 0;
}