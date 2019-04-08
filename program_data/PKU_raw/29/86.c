int main(){
	int m,n,i,j,r1,e,r2,p1,f,p2;
	double s=0;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&n);
		r1=2;
		r2=3;
		p1=1;
		p2=2;
if(n==1){
s=2.000;
}else if(n==2){
s=2.000+1.500;
}else{
		s=(double)r1/p1+(double)r2/p2;
		for(j=2;j<n;j++){
			e=r2;
			r2=r1+r2;
			r1=e;
			f=p2;
			p2=p1+p2;
			p1=f;
			s=s+(double)(r2)/(p2);
}
			

			
		}
		printf("%.3lf\n",s);
	}
	return 0;
}
