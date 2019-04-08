int main()
{
	char s[101],ss[101];
	int len,i,j,q,h=0;
	while(gets(s))
	{
		len=strlen(s);
		strcpy(ss,s);
		for(i=0;i<len;i++)
			if(s[i]=='(')
			{
				h = i;
				for(j=i+1;j<len;j++)
					if(s[j]=='(')
						i=j;
					else if(s[j]==')')
					{
						s[i]=' ';
						s[j]=' ';
						break;
					}
				if(j == len) break;
				if(h == i) continue;
				else i = h-1;
			}
		for(q=0;q<len;q++)
			if(s[q]==')')
				s[q]='?';
			else if(s[q]=='(')
				s[q]='$';
			else
				s[q]=' ';
		printf("%s\n",ss);
		printf("%s\n",s);
	}
	return 0;
}