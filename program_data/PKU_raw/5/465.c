int main()
{
	int i,m,p,f=1;
	double x,bl;
	char a[502],b[502];
	scanf("%lf\n",&bl);
	gets(a);
	gets(b);
	m=strlen(a);
	p=strlen(b);
	for(i=0;i<m;i++){
		if(a[i]!='A'&&a[i]!='G'&&a[i]!='C'&&a[i]!='T'){
			f=0;
		}
	}
	for(i=0;i<p;i++){
		if(b[i]!='A'&&b[i]!='G'&&b[i]!='C'&&b[i]!='T'){
		    f=0;
		}
	}
	if(m!=p||f==0){
		printf("error");
	}else if(m==p&&f==1){
		int n=0;
	    for(i=0;i<m;i++){
		    if(a[i]==b[i]){
			    n++;
			}
		}
		x=1.0*n/m;
		if(x>bl){
			printf("yes");
		}else if(x<=bl){
			printf("no");
		}
	}
	return 0;
}