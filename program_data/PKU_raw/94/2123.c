int main()
{
	int N,i,b=0,j,c;
	int a[501]={0};

	scanf("%d",&N);
	for(i=1;i<=N;i++)
		scanf("%d",&a[i]);
	for(j=1;j<N;j++){
		for(i=0;i<N;i++){
			if(a[i]>a[i+1]){
				c=a[i+1];
				a[i+1]=a[i];
				a[i]=c;
			}
		}
	}

	for(i=1;i<=N;i++){
		if(a[i]%2==1&&b==0){
			printf("%d",a[i]);
			b=b+1;
		}
		else if(a[i]%2==1&&b!=0)
			printf(",%d",a[i]);
//		else
//			continue;
	}
	
	return 0;
}
