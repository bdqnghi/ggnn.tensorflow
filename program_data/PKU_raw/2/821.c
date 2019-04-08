struct information
{
	int a;
	char s[26];
	int len;
}xinxi[1000];


void main()
{
	int n,i,c[26]={0},max,t,j;

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %s",&xinxi[i].a,xinxi[i].s);
        xinxi[i].len=strlen(xinxi[i].s) ;
	}
	for(i=0;i<n;i++)
      for(j=0;j<xinxi[i].len;j++)
	  {
		  if(xinxi[i].s[j]=='A')  c[1]++;
		  if(xinxi[i].s[j]=='B')  c[2]++;
		  if(xinxi[i].s[j]=='C')  c[3]++;
		  if(xinxi[i].s[j]=='D')  c[4]++;
		  if(xinxi[i].s[j]=='E')  c[5]++;
		  if(xinxi[i].s[j]=='F')  c[6]++;
		  if(xinxi[i].s[j]=='G')  c[7]++;
		  if(xinxi[i].s[j]=='H')  c[8]++;
		  if(xinxi[i].s[j]=='I')  c[9]++;
		  if(xinxi[i].s[j]=='J')  c[10]++;
		  if(xinxi[i].s[j]=='K')  c[11]++;
		  if(xinxi[i].s[j]=='L')  c[12]++;
		  if(xinxi[i].s[j]=='M')  c[13]++;
		  if(xinxi[i].s[j]=='N')  c[14]++;
		  if(xinxi[i].s[j]=='O')  c[15]++;
		  if(xinxi[i].s[j]=='P')  c[16]++;
		  if(xinxi[i].s[j]=='Q')  c[17]++;
		  if(xinxi[i].s[j]=='R')  c[18]++;
		  if(xinxi[i].s[j]=='S')  c[19]++;
		  if(xinxi[i].s[j]=='T')  c[20]++;
		  if(xinxi[i].s[j]=='U')  c[21]++;
		  if(xinxi[i].s[j]=='V')  c[22]++;
		  if(xinxi[i].s[j]=='W')  c[23]++;
		  if(xinxi[i].s[j]=='X')  c[24]++;
		  if(xinxi[i].s[j]=='Y')  c[25]++;
		  if(xinxi[i].s[j]=='Z')  c[26]++;
	  }
	  max=c[0];
	  t=0;
    for(i=1;i<26;i++)
	{
		if(c[i]>max)
		{
			max=c[i];
			t=i;
		}
	}
	printf("%c\n",64+t);
	printf("%d\n",c[t]);
	for(i=0;i<n;i++)
		for(j=0;j<xinxi[i].len;j++)
			if(xinxi[i].s[j]==64+t)
				printf("%d\n",xinxi[i].a);
}
