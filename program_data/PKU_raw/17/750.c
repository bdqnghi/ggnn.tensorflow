int main()
{
	char s[50][105]={'\0'},a;
	int i,j,k,count,cleft,cright;
	i=j=0;
	while((a=cin.get())!=EOF)//????? ??????????
	{
		if(a!='\n')
		{
			s[i][j]=a;
			j++;
		}
		else if(a=='\n')
		{
			i++;
			j=0;
		}
	}
	count=i;//???????
	cleft=cright=0;//????????????
	for(i=0;i<count;i++)
	{
			cout<<s[i]<<endl;
		for(j=0;j<strlen(s[i]);j++)//????????
		{
			if(s[i][j]=='(')
				cleft+=1;
			else if(s[i][j]==')')
				cright+=1;
			if(cright>cleft)
				{s[i][j]='?';
				cright-=1;//??????cright?1????????????
				}

		}
		cleft=cright=0;//?????????????
		for(j=strlen(s[i])-1;j>=0;j--)
		{
			if(s[i][j]=='(')
				cleft+=1;
			else if(s[i][j]==')')
				cright+=1;
			if(cright<cleft)
				{s[i][j]='$';
				cleft-=1;//??????cleft?1????????????
				}
		}
		for(j=0;j<strlen(s[i]);j++)
			if(s[i][j]!='?'&&s[i][j]!='$')
				s[i][j]=' ';
		if(i==count-1)
		cout<<s[i];
		else 
			cout<<s[i]<<endl;
	}

return 0;
	
		}

