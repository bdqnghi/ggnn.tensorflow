int main()
{
	int m,i,b[26],p,max,j,c;
	scanf ("%d",&m);
	struct point 
	{
		int n;
		char s[26];
	}a[999];
    for (i=0;i<m;i++)
	{
		scanf ("%d %s",&a[i].n,a[i].s);
	}
	for (i=0;i<26;i++)
	{
		b[i]=0;
	}
	for (i=0;i<m;i++)
	{
		for (j=0;a[i].s[j]!='\0';j++)
		{
			if (a[i].s[j]=='A')
				b[0]++;
			else if (a[i].s[j]=='B')
				b[1]++;
			else if (a[i].s[j]=='C')
				b[2]++;
			else if (a[i].s[j]=='D')
				b[3]++;
			else if (a[i].s[j]=='E')
				b[4]++;
			else if (a[i].s[j]=='f')
				b[5]++;
			else if (a[i].s[j]=='G')
				b[6]++;
			else if (a[i].s[j]=='H')
				b[7]++;
			else if (a[i].s[j]=='I')
				b[8]++;
			else if (a[i].s[j]=='J')
				b[9]++;
			else if (a[i].s[j]=='K')
				b[10]++;
			else if (a[i].s[j]=='L')
				b[11]++;
			else if (a[i].s[j]=='M')
				b[12]++;
			else if (a[i].s[j]=='N')
				b[13]++;
			else if (a[i].s[j]=='O')
				b[14]++;
			else if (a[i].s[j]=='P')
				b[15]++;
			else if (a[i].s[j]=='Q')
				b[16]++;
			else if (a[i].s[j]=='R')
				b[17]++;
			else if (a[i].s[j]=='S')
				b[18]++;
			else if (a[i].s[j]=='T')
				b[19]++;
			else if (a[i].s[j]=='U')
				b[20]++;
			else if (a[i].s[j]=='V')
				b[21]++;
			else if (a[i].s[j]=='W')
				b[22]++;
			else if (a[i].s[j]=='X')
				b[23]++;
             else if (a[i].s[j]=='Y')
				b[24]++;
	          else if (a[i].s[j]=='Z')
				b[25]++;
		}
	}
	p=0;
	max=b[0];
	for (i=0;i<26;i++)
	{
		if (b[i]>max)
		{
			p=i;
			max=b[i];
		}
	}
	c=(p+'A');
	printf ("%c\n%d\n",c,max);
	for (i=0;i<m;i++)
	{
		for (j=0;a[i].s[j]!='\0';j++)
		{
			if (a[i].s[j]==(p+'A'))
				printf("%d\n",a[i].n);
		}
	}
	return 0;
}


