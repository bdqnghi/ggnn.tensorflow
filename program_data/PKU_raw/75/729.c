int n,k,i,j,tot=0,cnt,Max=0;
char c;
int X[2000],Y[2000];
int  main()
{
		cnt=0;
		while (scanf("%d",&X[cnt++]) && (c=getchar()) && c!='\n');
		cnt=0;
		while (scanf("%d",&Y[cnt++]) && (c=getchar()) && c!='\n');
		for (i = 0;i < 1000;++i)
		{
			tot=0;
			for (j = 0;j<cnt;++j)
			if (X[j]<=i && Y[j]>i) tot++;
			if (tot>Max) Max = tot;
		}
		printf("%d %d\n",cnt,Max);

}
