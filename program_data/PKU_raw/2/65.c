
int main()
{
	int m;
	char a[1000][10]={0};    //????
	char b[1000][30];    //????
	int len[1000]={0};      //?????????
	int c[150]={0};  //???????
	int max=0; //??????????????
	int i,j,k,p,q,r,s;  //????
	scanf("%d", &m);
	for(i=0;i<m;i++)
	{
		scanf("%s %s", a[i], b[i]);
		len[i]=strlen(b[i]);
		//printf("%d\n", len[i]);
		for(j=0;j<len[i];j++)
		{
			//printf("%d\n", b[i][j]);
			for(k=65;k<=90;k++)
			{
				if(b[i][j]==k)
					c[k]++;
			}
		}
	}
	for(p=65;p<=90;p++)
	{
		if(c[p]>max)
			max=c[p];
	}
	for(q=65;q<=90;q++)
	{
		if(c[q]==max)
		{
			printf("%c\n%d\n", q, max);
			for(r=0;r<m;r++)
			{
				for(s=0;s<len[r];s++)
				{
					if(b[r][s]==q)
						printf("%s\n", a[r]);
				}
			}
		}
	}

	return 0;
}