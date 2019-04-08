main(){
	int x1,y1,x2,y2,a[100][100]={0},b[100][100]={0},c[100][100]={0},p,q,t;
	scanf("%d%d",&x1,&y1);
	for(p=0;p<x1;p++){
		for(q=0;q<y1;q++){
			scanf("%d",&a[p][q]);
		}
	}
	scanf("%d%d",&x2,&y2);
	for(p=0;p<x2;p++){
		for(q=0;q<y2;q++){
			scanf("%d",&b[p][q]);
		}
	}
	for(p=0;p<x1;p++){
		for(q=0;q<y2;q++){
			for(t=0;t<y1;t++){
				c[p][q]+=a[p][t]*b[t][q];
			}
		}
	}
	for(p=0;p<x1;p++){
		t=0;
		for(q=0;q<y2;q++){
			if(t)printf(" ");
			printf("%d",c[p][q]);
			t=1;
		}
		printf("\n");
	}
	return 0;
}