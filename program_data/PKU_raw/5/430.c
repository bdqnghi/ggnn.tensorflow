int main(){
	double x,p;
	int i,l,k=0,c=1;
	scanf("%lf",&x);
	char c1[501],c2[501];
	scanf("%s",c1);
	scanf("%s",c2);
	l=strlen(c1);
	for(i=0;i<l;i++){
		if((c1[i]!='A')&&(c1[i]!='T')&&(c1[i]!='C')&&(c1[i]!='G')){
			printf("error");
			c=0;
			break;
		}
		if((c2[i]!='A')&&(c2[i]!='T')&&(c2[i]!='C')&&(c2[i]!='G')){
			printf("error");
			c=0;
			break;
		}
		if(c1[i]==c2[i]){
			k++;
		}
	}
	if(c){
		p=((double)k)/((double)l);
		if(p>x){
			printf("yes");
		}
		else{printf("no");}
	}
	return 0;
}