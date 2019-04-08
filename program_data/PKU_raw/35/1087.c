int main(){
	int m,n,e,f,g;
	char c;
	g=0;
	f=0;
	scanf("%d",&m);
	scanf("%c",&c);
	scanf("%d",&n);
	int a[8][8];
	int i,k;
	for(i=0;i<m;i++){
		for(k=0;k<n;k++){
			scanf("%d",&(a[i][k]));
		}
	}
	int b,d;
	d=0;
	for(i=0;i<m;i++){
	b=a[i][0];
	for(k=0;k<n-1;k++){
		if(b<a[0][k+1]){
			b=a[0][k+1];
			d=k+1;
		}
	}

	for(e=0;e<m;e++){
		if(b>a[e][d]){
			f++;
		}
	}
	if(f==0){
	printf("%d+%d\n",i,d);
	break;
	}else{
	   g++;
	}
	}
	if(g-m==0){
		printf("No");
	}

	return 0;
}
