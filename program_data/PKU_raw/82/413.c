int main(){
	int n,a,b,k=0,m=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d%d",&a,&b);
		if(a>=90&&a<=140&&b>=60&&b<=90){
			m++;
		}else{
			if(m>k){
				k=m;
				
			}
				m=0;
		}
	}
	if(k>m){printf("%d",k);

	}else{printf("%d",m);

	}
	
	return 0;
}