int main()
{
    int x,y,n,z;
	double i,j,a;
	scanf("%d",&n);
		scanf("%d %d",&x,&y);
		i=(1.0*y)/x;
		for(z=2;z<=n;z++){
			scanf("%d %d",&x,&y);
			j=(1.0*y)/x;
			a=j-i;
				if(a>0.05){
					printf("better\n");
				}
				else{
					if(a<-0.05){
						printf("worse\n");
					}
					else{
						printf("same\n");
					}
				}
		}
	return 0;
} 