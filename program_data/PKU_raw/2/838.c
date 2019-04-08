void main()
{
	char s[100][30]={"\0"},c;
	int i,j,k,m,n,a[26]={0},b[100]={0},t=-1;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d %s",&b[i],s[i]);
		for(c='A';c<='Z';c++)
		{
			if(strchr(s[i],c)) a[c-65]++;
		}
	}
	j=a[0];
	k=0;
	for(i=1;i<26;i++)
	{
		if(a[i]>j)
		{
			j=a[i];
			k=i;
		}
	}
	printf("%c\n%d\n",k+65,a[k]);
	for(i=0;i<m;i++)
			if(strchr(s[i],k+65)) printf("%d\n",b[i]);
}
