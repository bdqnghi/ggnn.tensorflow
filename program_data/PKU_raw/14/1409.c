int main(int argc, char* argv[])
{
	int n,i,j,ta,tb,ts,tnum;
	int	*a,*b,*s,*num;
	scanf("%d",&n);
	a=(int*)malloc(sizeof(int)*n);
	b=(int*)malloc(sizeof(int)*n);
	s=(int*)malloc(sizeof(int)*n);
	num=(int*)malloc(sizeof(int)*n);
	
	for(i=1;i<=n;i++)
	{
		scanf("%d%d%d",&num[i],&a[i],&b[i]);
		s[i]=a[i]+b[i];
    }
    for(j=0;j<3;j++){
		for(i=n;i>1;i--){
		if(s[i]>s[i-1])
		{
			ta=a[i-1];tb=b[i-1];ts=s[i-1];tnum=num[i-1];
			a[i-1]=a[i];b[i-1]=b[i];s[i-1]=s[i];num[i-1]=num[i];
			a[i]=ta;b[i]=tb;s[i]=ts;num[i]=tnum;
		}
		}		
	}
    printf("%d %d\n%d %d\n%d %d\n",num[1],s[1],num[2],s[2],num[3],s[3]);
	return 0;
}