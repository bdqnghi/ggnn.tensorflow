
int main(){
	double rate;
	scanf("%lf",&rate);
	char DNA1[501],DNA2[501];
	scanf("%s%s",DNA1,DNA2);
	int i,k=0,len1=strlen(DNA1),len2=strlen(DNA2),m1=0,m2=0;
	for(i=0;i<len1;i++){
		if(DNA1[i]!='A'&&DNA1[i]!='G'&&DNA1[i]!='C'&&DNA1[i]!='T'){
			m1++;
			break;
		}
	}
	for(i=0;i<len2;i++){
		if(DNA2[i]!='A'&&DNA2[i]!='G'&&DNA2[i]!='C'&&DNA2[i]!='T'){
			m2++;
			break;
		}
	}
	if(len1!=len2||m1==1||m2==1){
		printf("error");
	}else{
		for(i=0;i<len1;i++){
			if(DNA1[i]==DNA2[i]){
				k++;
			}
		}
		double p=1.0*k/len1;
		if(p>rate){
			printf("yes");
		}else{
			printf("no");
		}
	}
	return 0;
}