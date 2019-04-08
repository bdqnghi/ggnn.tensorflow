int main(){
	int left=0,right=0,a=0,get=0,i;
	double m,q;
	char l[520],r[520];
	scanf("%lf",&m);
	scanf("%s",l);
	scanf("%s",r);
	for(i=0;l[i];i++){
		left++;
		if(l[i]!='A'&&l[i]!='G'&&l[i]!='T'&&l[i]!='C'){
			a=1;
		}
	}
	for(i=0;r[i];i++){
		right++;
		if(r[i]!='A'&&r[i]!='G'&&r[i]!='T'&&r[i]!='C'){
			a=1;
		}
	}
	if(a==1||left!=right){
		printf("error");
	}else{
		for(i=0;l[i];i++){
			if(l[i]==r[i]){
				get++;
			}
		}
		q=1.0*get/left;
		if(q>m){
			printf("yes");
		}else{
			printf("no");
		}
	}
	return 0;
}

	