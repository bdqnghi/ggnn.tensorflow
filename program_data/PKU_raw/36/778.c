
int main()
{
	char a[100],b[100];
	int d[255]={0},c[255]={0},i,lena,lenb;
	scanf("%s %s",a,b);
	lena=strlen(a);
	lenb=strlen(b);
	for (i=0;i<lena;i++)
		c[a[i]]++;
	for (i=0;i<lenb;i++)
		d[b[i]]++;
	for (i=65;i<=122;i++)
		if (d[i]!=c[i])
		{
			printf("NO");
			return 0;
		}
	printf("YES");
	return 0;
}