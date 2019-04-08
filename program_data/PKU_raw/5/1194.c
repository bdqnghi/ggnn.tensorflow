int main()
{
	double m=0.0;
         int t,i,r;
	double n;
	scanf("%lf",&n);
	char z[100],c[100];
	scanf("%s",z);
	scanf("%s",c);
	t=strlen(z);
	r=strlen(c);
	if(t!=r){
		printf("error");
	}
	else{
		for(i=0;i<t;i++){
			if((z[i]!='A'&&z[i]!='T'&&z[i]!='C'&&z[i]!='G')||(c[i]!='A'&&c[i]!='T'&&c[i]!='C'&&c[i]!='G')){
				printf("error");
				return 0;
			}
			if(z[i]==c[i]){
				m++;
			}
		}
		if(1.0*m/t>n){
			printf("yes");
		}
                  else{
                           printf("no");
                  }
	}
	return 0;
}