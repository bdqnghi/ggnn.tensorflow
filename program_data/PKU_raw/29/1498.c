int fei(int n);
int main()
{
	int n,i,j,a;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a);
		double s=0;
		for(j=1;j<=a;j++){
			s+=(double)(1.0*fei(j+1)/fei(j));
		}
		printf("%0.3lf\n",s);
	}
	return 0;
}

int fei(int n){
	int f,i;
	int p1=1,p2=2;
	if(n==1){
		return p1;
	}else if(n==2){
		return p1+p1;
	} else{
        for(i=0;i<n-2;i++){
	     	f=p2+p1;
		    p1=p2;
	    	p2=f;
		}
		return p2;
	}
}
