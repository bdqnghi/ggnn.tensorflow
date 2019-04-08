
int main()
{
	char c[101];
	int rr,lr,ll,rl;
	for(;(scanf("%s",c))!=EOF;)
	{
		printf("%s\n",c);
		char p[101];
		int i,l;
		rr=0;rl=0;ll=0;lr=0;
		for(l=0;c[l]!=0;l++)
		{
			p[l]=' ';
		}
		p[l]='\0';
		for(i=0;c[i]!=0;i++)
		{
			if(c[i]=='(')
			{
				ll=ll+1;
			}
			if(c[i]==')')
			{
				lr=lr+1;
				if(ll<lr)
				{
					p[i]='?';
					lr=lr-1;
				}
			}
		}
		for(i=l-1;i>=0;i=i-1)
		{
			if(c[i]==')')
			{
				rr=rr+1;
			}
			if(c[i]=='(')
			{
				rl=rl+1;
				if(rr<rl)
				{
					p[i]='$';
					rl=rl-1;
				}
			}
		}
	printf("%s\n",p);
	}
	return 0;
}
