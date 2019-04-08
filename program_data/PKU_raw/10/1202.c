int main()
{
	int n,i,j,a[N],s[N],max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		s[i]=1;
    for(i=n-2;i>=0;i--)
		for(j=i+1;j<n;j++)
			if(a[j]<=a[i]&&s[i]<s[j]+1)
				s[i]=s[j]+1;
	for(i=0;i<n-1;i++)
		max=(max>s[i])?max:s[i];
    printf("%d",max);
	return 0;
}