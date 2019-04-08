int main(){
	int m,shuzu[100],i,j;
	double x,s,e,a,b;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&shuzu[i]);
	}

	for(i=0;i<m;i++){	
		s=0;
		a=1;
		b=2;
		x=b/a;
		for(j=0;j<shuzu[i];j++){
			s=s+x;
			e=a;
			a=b;
			b=e+b;
			x=b/a;
		}
		printf("%.3lf\n",s);
	}
	return 0;
}