int main()
{
	int th,i,to,s;
	float c,r;
	scanf("%d",&th);
	scanf("%d %d",&to,&s);
	c=1.0*s/to;
	for(i=0;i<th-1;i++){
		scanf("%d %d",&to,&s);
		r=1.0*s/to;
		if(r>c&&r-c>0.05){
			printf("better\n");
		}else if(r<c&&c-r>0.05){
			printf("worse\n");
		}else{
			printf("same\n");
		}
	}
	return 0;
}
