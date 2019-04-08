int main(){
	int i,num=0,l1,l2,a=0;
	double p;
	char fir[501],sec[501];
	scanf("%lf",&p);
	scanf("%s%s",fir,sec);
	l1=strlen(fir);
	l2=strlen(sec);
	if(l1!=l2){
		printf("error\n");
		a=1;
	}
	for(i=0;i<l1;i++){
		if((fir[i]!=65&&fir[i]!=67&&fir[i]!=71&&fir[i]!=84)||(sec[i]!=65&&sec[i]!=67&&sec[i]!=71&&sec[i]!=84)){
			if(a==0){
			    printf("error\n");
			    a=1;
			}
			break;
		}
		if(fir[i]==sec[i]){
			num+=1;
		}
	}
	if(num*1.0/l1>=p&&a==0){
		printf("yes\n");
	}else if(num*1.0/l1<p&&a==0){
		printf("no\n");
	}
	return 0;
}

