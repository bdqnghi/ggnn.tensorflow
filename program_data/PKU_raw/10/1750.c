void main()
{
    int i,j,k,t,a[10000],f[10000],ans=0;
    scanf("%d",&k);
    for (i=1;i<=k;i++) {
    	scanf("%d",&a[i]);
    	t=0;
    	for (j=1;j<i;j++) 
    	  	if (a[i]<=a[j] && f[j]>t)
    	  	 	t=f[j];
    	f[i]=t+1;
    	if (f[i]>ans) ans=f[i];
    }
    printf("%d\n",ans);
    return 0;
}
