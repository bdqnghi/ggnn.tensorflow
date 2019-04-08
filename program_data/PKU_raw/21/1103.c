int main(){
	int n,i,j=0,k,num[310]={0},out[310]={0};
	double sum=0,avr=0,max=0,b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{scanf("%d",&num[i]);
	sum+=num[i];}
	avr=sum/n;
	for(i=0;i<n;i++)
	{
		b=fabs(num[i]-avr);
		if(b>max)
			max=b;
	}
	for(i=0;i<n;i++)
	{
		if(max- fabs(num[i]-avr)<1e-5)
		{out[j]=num[i];
		j++;
		}
	}
	for(i=0;i<j-1;i++)
	{
		for(k=0;k<j-1;k++)
		{
			if(out[k]>out[k+1])
		{
			int tmp;
			tmp=out[k];
			out[k]=out[k+1];
			out[k+1]=tmp;}
		}
	}
	printf("%d",out[0]);
	for(i=1;i<j;i++){
        printf(",%d",out[i]);
	}
	return 0;
}