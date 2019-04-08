int main()
{
	static char c[501],c1[501],c2[501];
	int n,i,j,p,q,k,s;
	gets(c);
	for(i=0;;i++)
	if(c[i]==0) 
	{  n=i; break;}
	for(i=2;i<=n;i++)
	for(j=0;j<=n-i;j++)
	{
		for(p=0;p<i;p++)
		{
			c1[p]=c[j+p];
			c2[p]=c[j+i-p-1];
			}
		for(;p<501;p++)
		{
			c1[p]=0;
			c2[p]=0;
			}
		s=0;
		for(k=0;s==0&&k<501;k++)
		s=c1[k]-c2[k];
		if(s==0)
		printf("%s\n",c1);
		}
}