int main(){
	int n,i;
	scanf("%d",&n);
	int m[50000],q[50000];
	for (i=0;i<n;i++){
		scanf("%d%d",&m[i],&q[i]);
	}
	int a,b;
	a=m[0];
	b=q[0];
	for(i=1;i<n;i++){
		if(m[i]<a){
			a=m[i];
		}
		if(q[i]>b){
			b=q[i];
		}
	}
	int k;
	int c[50000];
	int d[50000];
	for (i=10*a;i<=10*b;i++){
		c[i]=1;
	}
	for (i=0;i<n;i++){
		for(k=10*m[i];k<=10*q[i];k++){
			d[k]=1;}
	}
	int f=1;
	for	(i=10*a;i<=10*b;i++){
		if(c[i]!=d[i]){
			f=0;
			break;
		}
	}
	if(f==0){printf("no\n");
	}
	else{printf("%d %d",a,b);
	}	

	return 0;
}