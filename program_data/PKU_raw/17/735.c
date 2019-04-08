int main()
{
	char c[110],s[110];
	int left,i;
	int leftp[110]={0};
	while (cin >>c)
	{
		left=0;i=0;
		memset(leftp,0,110*sizeof(int));
		memset(s,0,110*sizeof(char));
		while (c[i]!='\0')
		{
			if (c[i]=='(')
			{
				left++;leftp[left]=i;
			}
			else
				if (c[i]==')')
				{
					if (left==0)
						s[i]='?';
					else
					{
						left--;
					}
				}
			i++;
		}
		if (left>0)
		    for (i=1;i<=left;i++)
				s[leftp[i]]='$';
		cout <<c<<endl;
		for (i=0;i<strlen(c);i++)
		    if ((s[i]=='?')||(s[i]=='$'))
				cout <<s[i];
			else
				cout <<' ';
		cout <<endl;
	}
	return 0;
}