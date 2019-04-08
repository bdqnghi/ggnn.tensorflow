int main()
{
	char str1[200];
	char str2[200];
	int i=0,length,sign,flag;
	char c;
	scanf("%c",&c);
	while(c!=EOF)
	{
		i=0;
		sign=-1;
	while(c!='\n')
	{
		str1[i]=c;
		if((c>='A'&&c<='Z')||(c>='a'&&c<='z'))
		{
			str2[i]=' ';
		}
		else
		{
			str2[i]=c;
		}
	    i++;
		scanf("%c",&c);
	}
	str1[i]='\0';
	str2[i]='\0';
	length=strlen(str2);
	i=0;
	flag=0;
	while(i>=0)
	{
		if(str2[i]=='(')
		sign=i;
		if(str2[i]==' ')
		{
			if(i==length-1)
			{
				if(flag==1)
				{
					flag=0;
					i=-1;
				}
				else break;
			}
			i++;
			continue;
		}
		if((str2[i]==')')&&(sign>=0))
		{
			str2[sign]=' ';
			str2[i]=' ';
			flag=1;
			sign=-1;
		}
		if(i==length-1)
		{
			if(flag==1)  { flag=0;i=-1;sign=-1;}
			else  break;
		}
		i++;
	}
	for(i=0;i<length;i++)
	{
		if(str2[i]=='(')
			str2[i]='$';
		if(str2[i]==')')
			str2[i]='?';
	}
	printf("%s\n",str1);
	printf("%s\n",str2);
	scanf("%c",&c);
	if((c>='A'&&c<='Z')||(c>='a'&&c<='z')||c=='('||c==')')
		continue;
	else break;
	}
	return 0;
}



       


		
