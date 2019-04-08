int deal(char a[],int ans[])
{
	int i,j=0;
	ans[0]=0;
	for(i=0;;i++)
	{
		if(a[i]=='\0') break;
		if(a[i]==',') {j++;ans[j]=0;}
		else ans[j]=ans[j]*10+a[i]-'0';
	}
	return j+1;
}
void main()
{
	char a[4000],b[4000];
	int aa[1000],bb[1000];
	int t[1000],i,j,max=0,n;
	gets(a);
	gets(b);
	for(i=0;i<1000;i++) t[i]=0;
	deal(a,aa);
	n=deal(b,bb);
	for(i=0;i<n;i++)
		for(j=aa[i];j<bb[i];j++)
			t[j]++;
	for(i=0;i<1000;i++) if(t[i]>max) max=t[i];
	printf("%d %d",n,max);
}	