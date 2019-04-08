int main (){
	double  n,m;
	double s;
	int i;
	int c=0;
	double z;
	double q=0;
	char a[505],b[505];
	scanf ("%lf",&s);
	scanf ("%s%s",a,b);
	n=strlen(a);
	m=strlen(b);
	

	for (i=0;i<n;i++){
		if (a[i]!='A'&&a[i]!='C'&&a[i]!='G'&&a[i]!='T'){
			c=1;
		}
	}
	for (i=0;i<m;i++){
		if (b[i]!='A'&&b[i]!='C'&&b[i]!='G'&&b[i]!='T'){
			c=1;
		}
	}
	if (c==1||m!=n){
		printf ("error");
	}else {
		for (i=0;i<n;i++){
			if (a[i]==b[i]){
				q++;
			}
		}
	
	    if (q/n>=s){
		    printf ("yes");
		}else {
			printf ("no");
		}
	}





	return 0;
}
