int main()
{
	int m[26],x;
	int cmp(int i,int k,int h[]);
	int max(int m[],int k);
	int k,i,h[26];
	scanf("%d",&k);
	for(i=1;i<=k;i++)
		scanf("%d",&h[i]);
	for(i=1;i<=k;i++)
		m[i]=cmp(i,k,h);
	x=max(m,k);
	printf("%d\n",x);
	return 0;
}
int max(int m[],int k)
{
	int big,i;
	big=m[1];
	for(i=1;i<=k;i++)
		if(big<m[i]) big=m[i];
	return big;
}
int cmp(int i,int k,int h[])
{
	int b[26],j,t=1;
	if(i==k) return 1;
	for(j=i+1;j<=k;j++)
		if(h[i]>=h[j])
		{
			b[t]=cmp(j,k,h);
			t++;
		}
	if(t==1) return 1;
	return max(b,t-1)+1;
}