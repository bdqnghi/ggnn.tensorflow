int main(){
  double a,b,e,s;
  int m,n;
  scanf("%d",&m);
  for(int i=1;i<=m;i++){
	s=0;
	a=1;
	b=2;
	scanf("%d",&n);
	for(int j=1;j<=n;j++){
		s=s+b/a;
		e=a+b;
		a=b;
		b=e;
	}
	printf("%.3lf\n",s);
}
	return 0;
}

