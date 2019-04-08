int main()
{
	char a[2][100]={0};
	int b[2][256]={0},i,j,s,m,n;
	scanf("%s%s",a[0],a[1]);
	m=strlen(a[0]);n=strlen(a[1]);
	if(m!=n)printf("NO");
	else{for(i=0;i<2;i++)
		for(j=0;j<m;j++)
		b[i][a[i][j]]++;
	s=1;for(j=0;j<256;j++)
		if(b[0][j]!=b[1][j]){s=0;break;}
		if(s)printf("YES");
		else  printf("NO");}}