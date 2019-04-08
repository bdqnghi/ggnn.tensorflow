int main(){
	int n,i,s=0,m,j[100];
	scanf("%d",&n);
	struct point
	{
		int a;
		int b;
	}
	c[100];
	for (i=0;i<n;i++){
		scanf("%d%d",&c[i].a,&c[i].b);
		if (c[i].a>=90 && c[i].a<=140 && c[i].b>=60 && c[i].b<=90){
			s++;
			j[i]=s;
		}else{
			j[i]=0;
			s=0;
		}
	}
	for (i=1;i<n;i++){
		if (j[i]<j[i-1]){
			m=j[i];
			j[i]=j[i-1];
			j[i-1]=m;
		}
	}
	printf("%d\n",j[n-1]);
	return 0;
}