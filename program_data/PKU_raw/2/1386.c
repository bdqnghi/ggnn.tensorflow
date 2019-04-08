int main ()
{
	int m;
	scanf ("%d",&m);
	int a[1000];
	char s[1000][26];
	int i,j;
	for (i=0;i<m;i++)
	{
		scanf ("%d %s",&a[i],s[i]);
	}
	char x;
	int max=0;
	char maxx;int l;
	for (x='A';x<='Z';x++)
	{ 
	   l=0;
	   for (i=0;i<m;i++)
	   {
	       for (j=0;j<26;j++)
		   {
			   if (s[i][j]==x)break;
		   }
		   if (j!=26)l++;
	   }
	   if (l>max){max=l;maxx=x;}
	}
	printf ("%c\n%d\n",maxx,max);
	for (i=0;i<m;i++)
	{
	     for (j=0;j<26;j++)
		 {
			  if(s[i][j]==maxx)break;
		 }
		   if (j!=26)printf ("%d\n",a[i]);
	}
	return 0;
}
