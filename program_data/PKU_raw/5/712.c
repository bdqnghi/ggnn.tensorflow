int main(){
	double k;
	int xt=0;
	int i;
	int a,b;
	char zfc1[1000],zfc2[1000];
	scanf("%lf",&k);
	scanf("%s",&zfc1);
	scanf("%s",&zfc2);
	a=strlen(zfc1);
	b=strlen(zfc2);
	for(i=0;i<a;i++){
		if(zfc1[i]!='A'&&zfc1[i]!='T'&&zfc1[i]!='G'&&zfc1[i]!='C'){
			a=0;
			break;
		}else{
			continue;
		}
	}
	for(i=0;i<b;i++){
		if(zfc2[i]!='A'&&zfc2[i]!='T'&&zfc2[i]!='G'&&zfc2[i]!='C'){
			b=0;
			break;
		}else{
			continue;
		}
	}
	if(a==0||b==0||a!=b){
		printf("error");
	}else{
	for(i=0;i<b;i++){
		if(zfc1[i]==zfc2[i]){
			xt=xt+1;
		}else{
			xt=xt;
		}
	}
	if(b*k<xt){
		printf("yes");
	}else{
		printf("no");
	}
	}
	return 0;
}

	
