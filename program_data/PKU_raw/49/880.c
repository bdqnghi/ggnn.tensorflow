int main()
{
	int t,k,i,j,m;
	char c[500];
	for(i=0;;i++)
	{scanf("%c",&c[i]);
	if(c[i]=='\n') break;}
	t=i;
	for(k=2;k<=t;k++)
	{for(i=0;i<(t-k+1);i++)
	{for(j=i;j<=(i+k/2);j++)
	{if(c[j]!=c[2*i+k-1-j]) break;}
	if(j==(i+k/2+1)) 
	{for(m=i;m<i+k;m++)
	printf("%c",c[m]);
	if(m==i+k) printf("\n");}}}
	return 0;
}