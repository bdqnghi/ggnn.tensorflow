// ????????????.cpp : ??????????????
//


int main()//(int argc, _TCHAR* argv[])
{
	int T,t;
	scanf("%d",&T);
	for(t=1;t<=T;t++)
	{
		char s[1000];
		int n,i,j,k=0,g=0;
		scanf("%s",s);
		n=strlen(s);
		for(i=0;i<=n-1;i++)
		{
			k=0;
			for(j=0;j<=n-1;j++)
			{
				if(s[j]==s[i])
				{
					k=k+1;
					
				}
			}
			if(k==1)
			{
				printf("%c\n",s[i]);
				g=1;
				break;
			}
		}
		if(g==0)printf("no\n");
	}
}

			
