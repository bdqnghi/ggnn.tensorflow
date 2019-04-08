int panduan(char *a,int n)
{
	int i,j,k=0;
	for (i=0;i<n/2;i++)
	{
		if (*(a+i)!=*(a+n-1-i)) k=1;
	}
	if (k==1) return 0;
	else return 1;
}
int main()
{
	char c[200]={'\0'};
	char a[200][200]={'\0'};
	int i,j,k,l;
	scanf("%s",c);
	for (i=2;i<strlen(c);i++)
	{
		l=strlen(c)-i+1;
		for (j=0;j<l;j++)
		{
			for (k=0;k<i;k++)
			{
				*(*(a+j)+k)=*(c+j+k);
			}
		if (panduan(*(a+j),strlen(*(a+j)))==1)printf("%s\n",*(a+j));
		}
	    
	}
		return 0;
}
