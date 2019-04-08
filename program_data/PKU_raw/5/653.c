int main (){
	double v;
	scanf("%lf\n",&v);
	char s[600],z[600];
	scanf("%s\n%s",s,z);
	int a,b;
	a=strlen(s);
	b=strlen(z);
	int m,n,p=0,q=0;
	for(m=0;m<a;m++){
		if(s[m]!='A'&&s[m]!='T'&&s[m]!='C'&&s[m]!='G'){p=1;}
	}
	for(n=0;n<a;n++){
		if(z[n]!='A'&&z[n]!='T'&&z[n]!='C'&&z[n]!='G'){q=1;}
	}
	int w=0;
	double u;
	if(m!=n||q==1||p==1){printf("error");w=1;}
	int sum=0;
	for(n=0;n<a;n++){
		if(s[n]==z[n]){sum++;}
	}
	u=1.0*sum/a;
	if(w==1){;}
	else {
		if(u>v){printf("yes");}else{printf("no");}
	}
	return 0;
}