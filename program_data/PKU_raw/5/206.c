int main(){
	int a,b,c=0;
	double t,k=0;
	char s[500]={'\0'},x[500]={'\0'};
	scanf("%lf %s %s",&t,s,x);
	for(a=0;s[a]!='\0';a++){
		if(s[a]>'Z'){
			k=1;
			break;
		}
	}
	for(b=0;x[b]!='\0';b++){
		if(x[b]>'Z'){
			k=1;
			break;
		}
	}
	if(a!=b||k==1){
		printf("error");
	}
	else{
		for(a=0;a<b;a++){
			if(s[a]==x[a]){
				c++;
			}
		}
		k=1.0*c/b;
		if(k>t){
			printf("yes");
		}
		else{
			printf("no");
		}
	}	
	return 0;
}