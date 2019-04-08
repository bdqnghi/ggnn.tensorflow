
int main(){
    int i,n,m;
	double c,d;
	char a[501],b[501];
	scanf("%lf",&c);
	scanf("%s %s",a,b);	
	m=strlen(a);
	n=0;
	for(i=0;a[i]!='\0';i++){
		    if(a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G'){
				 break;
			}
			if(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G'){
				break;
			}
	}
	if(strlen(a)!=strlen(b)){
		printf("error");
	}else if(i<m){
		printf("error");
	}else if(i>=m){
		for(i=0;a[i]!='\0';i++){ 
		    if(a[i]==b[i]){
		 	    n+=1;
			}
		}
	    d=1.0*n/m;
	    if(d>c){
	     	printf("yes");
		}else{
		    printf("no");
		}    
	}
	return 0;
}