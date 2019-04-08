int main()
{
	
	int i,j,a,e,f,d,h,g;
    int k,m,n;
	int y[1000],x[1000],z[1000];
	scanf("%d%d",&m,&n);
	for(i=1;m>0;i++){
		x[i]=m;
		m=m/2;
	}
	for(j=1;n>0;j++){
		y[j]=n;
		n=n/2;
	}
	for(k=1;k<i;k++){
		for(h=1;h<=j;h++){
			if(x[k]==y[h]){
				printf("%d",x[k]);
				goto A;
			}
	}
	}
	A:
	
		return 0;
}
