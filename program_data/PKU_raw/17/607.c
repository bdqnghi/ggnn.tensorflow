int main()
{
	char c[120][120],mark[120],p[120];
	int t=0,n=0;
	
	while(gets(c[n]))
	{
		t=0;
	    if(c[n][0]=='\n') break;
		for(int i=0;i<strlen(c[n]);i++)
		{
			if(c[n][i]=='(')
			{
				mark[i]='$';
				p[t]=i;
				t++;
			}
			else if(c[n][i]==')')
			{
				if(t==0)
				{
					mark[i]='?';
				}
				else
				{
					mark[p[t-1]]=' ';
					mark[i]=' ';
					t--;
				}
			
			}
			else mark[i]=' ';
		}		
		puts(c[n]);
		
		for(int i=0;i<strlen(c[n]);i++)
		{
			cout<<mark[i];
		}
		cout<<endl;
		n++;
	}

	return 0;
}
