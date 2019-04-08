
void main()
{
	int i,j=0,N,a[301]={0},b[100]={0},p,q,temp;
	int sum=0,max;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}

	if(sum<a[0]*N)max=a[0]*N-sum;
	else max=sum-a[0]*N;
	for(i=1;i<N;i++)
		if(sum-a[i]*N>max)max=sum-a[i]*N;
		else if(a[i]*N-sum>max)max=a[i]*N-sum;
	for(i=0;i<N;i++)
		if(sum-a[i]*N==max||a[i]*N-sum==max)b[j++]=a[i];
	for(p=0;p<j-1;p++)
		for(q=p+1;q<j;q++)if(b[q]<b[p]){temp=b[p];b[p]=b[q];b[q]=temp;}
	for(i=0;i<j-1;i++)
		printf("%d,",b[i]);
	printf("%d\n",b[i]);

}
