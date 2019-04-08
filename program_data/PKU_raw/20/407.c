void charu(char s1[],int h,char s2[],int k,char s3[]);
void main()
{
	char a[11],b[4];
	while (scanf("%s%s",a,b)!=EOF)
	{
		int l,n;
		char c[14]={'\0'};
		l=strlen(a);
		n=strlen(b);
		charu(a,l,b,n,c);
		puts(c);
	}
}
void charu(char s1[],int h,char s2[],int k,char s3[])
{
	int i,max=0;
	char temp;
	for(i=1;i<h;i++)
	{
		if(s1[i]>s1[max])
			max=i;
	}
	for(i=0;i<=max;i++)
		s3[i]=s1[i];
	for(i=max+1;i<=max+k;i++)
		s3[i]=s2[i-max-1];
	for(i=max+strlen(s2)+1;i<h+k;i++)
		s3[i]=s1[i-k];
}