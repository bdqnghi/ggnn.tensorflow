int main(){
	int i,a,b,c,d;
	double n;
	char xl1[500],xl2[500];
	c=0;
	scanf("%lf",&n);
	scanf("%s%s",xl1,xl2);
	a=strlen(xl1);
	b=strlen(xl2);
	if(a!=b){
		printf("error");
	}else{
		for(i=0;i<a;i++){
			if((xl1[i]!='A'&&xl1[i]!='T'&&xl1[i]!='G'&&xl1[i]!='C')||(xl2[i]!='A'&&xl2[i]!='T'&&xl2[i]!='G'&&xl2[i]!='C')){
				printf("error");
				d=0;
				break;
			}else{
				if(xl1[i]==xl2[i]){
					c++;
				}
			}
		}
            if(1.0*c/a>n&&d!=0){
		         printf("yes");
			}else if(1.0*c/a<=n&&d!=0){
	     	     printf("no");
			}
		
	}
	
	return 0;
}