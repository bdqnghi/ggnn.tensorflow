void main()
{
	int i=2,j,k,t,m,h,x,p;
	char s[1000],b[1000][1000];
	gets(s);
	m=strlen(s);
	for(i=2;i<=m;i=i+2)
	{
		for(k=0;k<=m-i;k++)
		{
			h=0;
			x=1;
			for(j=k;j<=k+i-1;j++)
			{
				b[k][j]=s[i+k-x];
				x++;
			}
			for(t=k;t<=k+i-1;t++)
			{
				if(b[k][t]!=s[t])
				{	h=1;
				break;
				}
			}
				if(h==0)
				{
					for(p=k;p<=k+i-1;p++)
						printf("%c",s[p]);
				printf("\n");
				}

		}
	}
}

