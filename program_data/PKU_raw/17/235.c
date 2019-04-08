int main()
{
	int left[101],len,top=0,i,j;
	char str[101];
	while(gets(str))
	{
		top=0;
		puts(str);
		len=strlen(str);
		for(i=0;i<len;i++) //????????str[i]~~
		{
			if(str[i]=='(')
			{
				left[top]=i;
				top++;
			}
			else if(str[i]==')')
			{
				if(top)
				{
					str[i]=' ';
					str[left[top-1]]=' '; //??top??????
					top--;  //??????????????--
				}
			    else
					str[i]='?';
			}
			else
				str[i]=' ';
		}
		for(j=0;j<len;j++)
			if(str[j]=='(')
			str[j]='$';
		puts(str);
	}
	return 0;
}