int main (){
int n;
	scanf("%d",&n);
	int i;
	int sum=0,max=0;
	char t[30];
	for(i=0;i<n;i++){
		char p[30],c,v;
		int m,k,b,g=0,z=0;
		scanf("%s %d %d %c %c %d",p,&m,&k,&c,&v,&b);
		if(m>80&&b>=1) g=g+8000;
		if(m>85&&k>80) g=g+4000;
		if(m>90) g=g+2000;
		if(m>85&&v=='Y') g=g+1000;
		if(k>80&&c=='Y') g=g+850;
		if(g>max){
			max=g;
			z=strlen(p);
			for(int h=0;h<z;h++){
				t[h]=p[h];
			}
			t[z]='\0';
		}
		else max=max;
		sum=sum+g;
	}
	printf("%s\n%d\n%d",t,max,sum);
	return 0;
}
