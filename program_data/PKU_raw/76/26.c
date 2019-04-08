int main()
{
	struct qujian
	{
		int a;
		int b;
	}qj[50000],temp;
	int i,n,j,max;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&qj[i].a,&qj[i].b);
	}
	for(i=n-1;i>0;i--){
		for(j=0;j<i;j++){
			if(qj[j].a>qj[j+1].a){
				temp=qj[j];
				qj[j]=qj[j+1];
				qj[j+1]=temp;
			}
		}
	}
	max=qj[0].b;
	for(i=0;i<n-1;i++){
		if(qj[i].b>max){
			max=qj[i].b;
		}
		if(max<qj[i+1].a){
			printf("no");
			break;
		}
	}
	if(qj[n-1].b>max){
		max=qj[n-1].b;
	}
	if(i==n-1){
		printf("%d %d",qj[0].a,max);
	}
	return 0;
}