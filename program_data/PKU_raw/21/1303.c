
int main()
{
	int n,i,t,num[300],sum=0,k,m;
	float a,c[300],mc=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&t);
		num[i]=t;
		sum+=num[i];
	}
	a=(float)sum/(float)n;
	for(i=0;i<n;i++){
		if(num[i]>a)
			c[i]=(float)num[i]-a;
		else
			c[i]=a-(float)num[i];
	}
	for(i=0;i<n;i++){
		if(c[i]>mc){
			mc=c[i];
			k=i;
		}
	}
	for(i=0;i<n;i++){
		if(c[i]>=mc){
			mc=c[i];
			m=i;
		}
	}
	if(m==k)
		printf("%d",num[k]);
	else if(num[k]>num[m])
		printf("%d,%d",num[m],num[k]);
	else
		printf("%d,%d",num[k],num[m]);
	return 0;
}