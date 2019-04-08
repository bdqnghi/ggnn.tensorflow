int main()
{
	
	int i,j,a,c,e,b,d,h,t,min,max;
    int k,n;
	int x[10000][3],z[10000];
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	   scanf("%d%d",&x[i][1],&x[i][2]);
	}
	min=x[1][1];
	max=x[1][2];
	for(i=1;i<=n;i++){
			if(min>x[i][1])min=x[i][1];
		}
	for(i=1;i<=n;i++){
			if(max<x[i][2])max=x[i][2];
		}
	t=0;
	for(i=1;i<=n;i++){
		for(j=x[i][1]+1;j<=x[i][2];j++){
			z[t]=j;
			t++;
		}
	}
	h=0;
	k=0;
	for(i=min+1;i<=max;i++){
		h=0;
		for(t=0;t<=10000;t++){
			if(z[t]==i){
				h=1;
				break;
			}
		}
		if(h==0)k=1;
	}
	if(k==1)printf("no");
	else printf("%d %d",min,max);
	return 0;
}
