void jud(char a[],char b[])
{
	int i,c[2][52]={0},m=0;
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]<91) c[0][a[i]-65]++;
		else c[0][a[i]-71]++;
	}
	for(i=0;b[i]!=0;i++)
	{
		if(b[i]<91) c[1][b[i]-65]++;
		else c[1][b[i]-71]++;
	}
	for(i=0;i<52;i++) if(c[0][i]!=c[1][i]) m++;
	if(m==0) printf("YES");
	else printf("NO");
}
int main()
{
	char a[30],b[30];
	scanf("%s%s",a,b);
	jud(a,b);
}