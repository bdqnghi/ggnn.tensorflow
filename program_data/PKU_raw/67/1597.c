int main()
 {
	int n,a[100][2],i,j;
  	double  x,y;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
			scanf("%d",&a[i][j]);}
	}   
	x=1.0*a[0][1]/a[0][0];
	for(i=1;i<n;i++){
			y=1.0*a[i][1]/a[i][0];
 			if(y-x>0.05) printf("better\n");
			else if(x-y>0.05) printf("worse\n");
			else printf("same\n");
			y=0;
	}
    return 0;
}
