int main()
{
	int n,i,a[5000],b[5000],sum[10001]={0},max=0,min,c,d;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
		c=a[i];
	    d=b[i];
		for(;c<d;c++)
			sum[c]=1;
	}
     min=a[0];
	for(i=0;i<n;i++){
        if(b[i]>max)
			max=b[i];
		if(a[i]<min)
			min=a[i];
	}
	for(i=min;i<max;i++){
		if(sum[i]==0){
			printf("no");
		     return 0;                                                    
		}
	}
	 printf("%d %d",min,max);
return 0;
}