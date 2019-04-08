int main(){
	int i,l,n,L,t;
	double q,p;
	char a[501],b[501];
	n=0;
	scanf("%lf",&p);
    scanf("%s",a);
	scanf("%s",b);
	l=strlen(a);
	L=strlen(b);
	
	if(l!=L){
		printf("error\n");
	}
	else {
		t=1;
		for(i=0;i<l;i++){
		if((a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')||(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G')){
            t=0;
			break;
		}
		else if(a[i]==b[i]){
			n++;
			
		}
	}	
	if(t==1){
    q=1.0*n/l;
	if(q>p){printf("yes\n");}
	else {printf("no\n");}
	}
    if(t==0){printf("error\n");}
	}
	return 0;
}