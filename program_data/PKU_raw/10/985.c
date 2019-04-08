int main()
{
	int i,a[25],h[25],k,t=0;
	scanf("%d",&k);
	for(i=0;i<k;i++)
		scanf("%d",&h[i]);
	for(i=0;i<k;i++){
		a[i]=zuo(i,k,h)+you(i,k,h)-1;
		if(a[i]>t) t=a[i];
	}
	printf("%d",t);
	return 0;
}
int zuo(int i,int k,int h[])
{
	int t=1,j,m=0,s=0;
	if(i){
		for(j=i-1;j>=0;j--)
			if(h[j]>=h[i]){
				m=zuo(j,k,h);
				if(m>s) s=m;
			}
		t+=m;
	}
	return t;
}
int you(int i,int k,int h[])
{
	int t=1,j,m=0,s=0;
	if(i!=k-1){
		for(j=i+1;j<k;j++)
			if(h[j]<=h[i]){
				m=you(j,k,h);
				if(m>s) s=m;
			}
		t+=s;
	}
	return t;
}