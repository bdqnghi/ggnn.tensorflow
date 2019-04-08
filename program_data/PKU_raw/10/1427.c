int main()
{
	int k,i,j,a[25]={0},f[25]={1},t=0;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	scanf("%d",&a[i]); 
	for(i=0;i<k;i++)
	for(j=0;j<i;j++)
	if(a[j]>=a[i]&&f[j]>=f[i])f[i]=f[j]+1;
	else if(f[i]==0)f[i]=1;
	for(i=0;i<k;i++)
	if(t<f[i])t=f[i];
	printf("\n%d",t);
	return 0;	
    }