int main()
{

	    int n,i,j,m;
		char A,T,C,G;
		char a[10000],b[10000];
		scanf("%d\n",&n);
		for(i=1;i<=n;i++)
		{
			for(j=0;1;j++)
			{
			    a[j]=getchar();
				if(a[j]=='\n')
				{
					break;
				}
			if(a[j]=='A')
			{
				b[j]='T';
			}
			else if(a[j]=='T')
			{
				b[j]='A';
			}
			else if(a[j]=='C')
			{
				b[j]='G';
			}
			else
			{
				b[j]='C';
			}
			}
			for(m=0;m<=j-1;m++)
			{
				putchar(b[m]);
			}
			putchar('\n');
		}
		return 0;
}
