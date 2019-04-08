int main()
{
	int n,i=0,h[100],l[100],t[101]={-1,0},len[100],j=0;
	int max=0,r=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&h[i],&l[i]);
	}
	i=0;
	while(h[i],l[i])
	{
		while(h[i]>=90&&h[i]<=140&&l[i]>=60&&l[i]<=90)
			i++;
		t[j+1]=i;
		len[j]=t[j+1]-t[j]-1;
		j++;
		i++;
	}
	for(r=0;r<j;r++)
	{
		if(len[max]<len[r])
			max=r;
	}
	printf("%d",len[max]);
	return 0;
}