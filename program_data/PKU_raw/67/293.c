int main()
{
	int i,n;
	float a,b,ji,c[100],d[100],qita[100];
	scanf("%d",&n);
	scanf("%d%d",&a,&b);
	ji=b/a;
	for(i=0;i<n-1;i++){
		scanf("%f%f",&c[i],&d[i]);
		qita[i]=d[i]/c[i];
	}
	for(i=0;i<n-1;i++){
		if(qita[i]-ji>0.05){
			printf("better\n");
		}else if(ji-qita[i]>0.05){
			printf("worse\n");
		}else{
			printf("same\n");
		}
	}
	return 0;
}


