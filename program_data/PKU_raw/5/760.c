int main(){
	int n,i,m=0;
	double j;
	char a[2000],b[2000];
	scanf("%lf%s%s",&j,a,b);
	if(strlen(a)!=strlen(b)){
		printf("error");
		return 0;
	}else{
		n=strlen(a);
		for(i=0;i<n;i++){
			if((a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')||(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G')){
				printf("error");
				return 0;
			}
		}
	    for(i=0;i<n;i++){
		    if(a[i]==b[i])
			    m++;
		}
	    if(1.0*m/n>j)
			printf("yes");
		else
			printf("no");
	}
    return 0;
}