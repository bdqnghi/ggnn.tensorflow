

int left(int *h,int i);

void main()
{
	int n,i,h[MAX],num,max;

	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",h+i);

	for(i=n-1;i>=0;i--){
		num=left(h,i);
		if(i==n-1)
			max=num;
		else if(num>max)
			max=num;
	}

	printf("%d\n",max);
}

int left(int *h,int i)
{
	int j,flag=0,num,max;

	if(i==0)
		return 1;
	else{
		for(j=i-1;j>=0;j--){
			if(*(h+j)>=*(h+i)){
				num=left(h,j)+1;
				if(flag==0){
					max=num;
					flag=1;
				}
				else if(num>max)
					max=num;
			}
		}
		if(flag==0)
			return 1;
		else
			return max;
	}
}
