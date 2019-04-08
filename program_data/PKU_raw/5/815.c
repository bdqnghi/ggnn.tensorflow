int main(){
	int b,c,f=0,e=0,i;
	double a,h;
	char d[3][502];
	scanf("%lf",&a);
	for(i=0;i<2;i++){
		scanf("%s",d[i]);
	}
	b=strlen(d[0]);
	c=strlen(d[1]);
	if(b==c){
		for(f=0;f<b;f++){
			if(d[0][f]==d[1][f]){
				e++;
			}
		}
		for(f=0;f<b;f++){
			if((d[0][f]!='A'&&d[0][f]!='G'&&d[0][f]!='C'&&d[0][f]!='T')||(d[1][f]!='A'&&d[1][f]!='G'&&d[1][f]!='C'&&d[1][f]!='T')){
				break;
			}
		}
		if(f==b){
		h=e*1.0/b;
		if(h>a){
			printf("yes");
		}
		else{
			printf("no");
		}
		}
		else{
			printf("error");
		}
	}
	else{
		printf("error");
	}
	return 0;
}
