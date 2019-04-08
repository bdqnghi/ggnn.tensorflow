int main(){
	char DNA1[501],DNA2[501],isbreak;
	isbreak='n';
	double x,n;
	int i,l1,l2,t;
	t=0;
	scanf("%lf",&n);
	scanf("%s%s",DNA1,DNA2);
	l1=strlen(DNA1);
	l2=strlen(DNA2);
	if(l1!=l2){
		printf("error");
	}else{
	for(i=0;i<l1;i++){
		if((DNA1[i]!='A'&&DNA1[i]!='T'&&DNA1[i]!='C'&&DNA1[i]!='G')||(DNA2[i]!='A'&&DNA2[i]!='T'&&DNA2[i]!='C'&&DNA2[i]!='G')){
			isbreak='y';
			break;
		}else{
			if(DNA1[i]==DNA2[i]){
				t++;
			}
		}
	}
	if(isbreak=='y'){
		printf("error");
	}else{
		x=(1.0*t)/l1;
		if(x>n){
			printf("yes");
		}else{
			printf("no");
		}
	}
	}
	return 0;
}