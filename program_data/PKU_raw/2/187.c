struct book
{
	int num;
	char w[100];
}book[100];
void main()
{
	int i,j,k,l,m,n,p,b[26]={0};
	scanf ("%d\n",&n);
	for (i=0;i<n;i++)
	{
		scanf ("%d %s",&book[i].num,book[i].w);
	}
	for (i=0;i<n;i++)
	{
		for (j=0;book[i].w[j]!='\0';j++)
		{
			    if (book[i].w[j]=='A')   b[0]++;
				else if (book[i].w[j]=='B') b[1]++;
				else if (book[i].w[j]=='C') b[2]++;
				else if (book[i].w[j]=='D') b[3]++;
				else if (book[i].w[j]=='E') b[4]++;
				else if (book[i].w[j]=='F') b[5]++;
				else if (book[i].w[j]=='G') b[6]++;
				else if (book[i].w[j]=='H') b[7]++;
				else if (book[i].w[j]=='I') b[8]++;
				else if (book[i].w[j]=='J') b[9]++;
				else if (book[i].w[j]=='K') b[10]++;
				else if (book[i].w[j]=='L') b[11]++;
				else if (book[i].w[j]=='M') b[12]++;
				else if (book[i].w[j]=='N') b[13]++;
				else if (book[i].w[j]=='O') b[14]++;
				else if (book[i].w[j]=='P') b[15]++;
				else if (book[i].w[j]=='Q') b[16]++;
				else if (book[i].w[j]=='R') b[17]++;
				else if (book[i].w[j]=='S') b[18]++;
				else if (book[i].w[j]=='T') b[19]++;
				else if (book[i].w[j]=='U') b[20]++;
				else if (book[i].w[j]=='V') b[21]++;
				else if (book[i].w[j]=='W') b[22]++;
				else if (book[i].w[j]=='X') b[23]++;
				else if (book[i].w[j]=='Y') b[24]++;
				else if (book[i].w[j]=='Z') b[25]++;
		}
	}
	for (i=0;i<=25;i++)
	{
		for (j=0;j<26;j++)
		{
			if (b[i]<b[j])
				break;
		}
		if (j==26)
		{
			printf ("%c\n%d\n",65+i,b[i]);
			break;
		}
	}
	for (j=0;j<n;j++)
	{
		for (l=0;book[j].w[l]!='\0';l++)
		{
			if (book[j].w[l]==65+i)
			{
				printf ("%d\n",book[j].num);
				break;
			}
		}
	}
}