

int main()
{
	int i,j,k,tmp1,tmp2=1;
	do
		{char s[101];
		char st[101];
		char r1[101];
		int r2[101];
		int d,f=0,pi=0;
		if(scanf("%s",s)!=EOF)
		{
			f=1;
		d=strlen(s);
		strcpy(st,s);
	    for(j=0;j<d;j++)
		{
			if(pi==0&&(s[j]=='('||s[j]==')'))
				{
					r1[0]=s[j];
					r2[0]=j;
					pi+=1;
			}
			else if((s[j]=='('||s[j]==')'))
			{
				if(r1[pi-1]=='('&&s[j]==')')
					{
						s[r2[pi-1]]=' ';
						s[j]=' ';
						pi-=1;
				}
				else 
				{
					r1[pi]=s[j];
					r2[pi]=j;
					pi+=1;
				}
			}
			else s[j]=' ';
			

		}
		for(j=0;j<pi;j++)
			{
				if(r1[j]=='(')
				s[r2[j]]='$';
				else s[r2[j]]='?';
		}
		printf("%s\n%s\n",st,s);
}
		else break;
		}while (tmp2);
	
	
	
	return 0;
}