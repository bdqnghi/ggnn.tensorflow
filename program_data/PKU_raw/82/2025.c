//????
int main()
{
    int a[100];
	int b[100];
	int h[100];
	int m,n,i,j;
	scanf("%d",&m);
	n=0;
	for(n=0;n<m;n++)
		scanf("%d %d",&a[n],&b[n]);
	i=0;
	j=0;
	n=0;
	for(n=0;n<m;n++)
	{
		h[n]=0;
	 for(j=i;j<m;j++)
	 {
		i=j+1;
		if(a[j]>=90&&a[j]<=140&&b[j]>=60&&b[j]<=90)
			h[n]++;
		else
			break;
	}
	}
	i=0;
	for(i=0;i<n;i++)
	{
		if(h[i]>h[0])
			h[0]=h[i];
	}
	printf("%d\n",h[0]);
	return 0;
}
		

