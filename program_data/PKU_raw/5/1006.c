int main()
{
	double n,r;
	int i,a,b,c,d,e=0;
	char q[501];
	char w[501];
	scanf("%lf",&n);
    scanf("%s%s",q,w);
	a=strlen(q);
	b=strlen(w);
	if(a!=b){
		printf("error");
	}else{
		c=a,d=b;
	   for(i=0;i<a;i++){
	  	 if(q[i]!='A'&&q[i]!='C'&&q[i]!='G'&&q[i]!='T'){
			c--;
		}
	}
	for(i=0;i<b;i++){
		if(w[i]!='A'&&w[i]!='C'&&w[i]!='G'&&w[i]!='T'){
			d--;
		}
	}
	if(a!=c||b!=d){
		printf("error");
	}else{
		for(i=0;i<a;i++){
			if(q[i]==w[i]){  
				e++;                       
			}
		}
       r=1.0*e/a;
	if(r>=n){
		printf("yes");
	}else{
		printf("no");
	}
	}
	}
	
	return 0;
}