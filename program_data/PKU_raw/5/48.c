int main(){
	int i,len1,len2;
	double rate,rate0,sum=0;
	char line1[501],line2[501];
	scanf("%lf%s%s",&rate0,line1,line2);
	len1=strlen(line1);
	len2=strlen(line2);
	if(len1==len2){
		for(i=0;i<len1;i++){
			if(line1[i]==line2[i]){
				sum++;
			}
			if(line1[i]!='A'&&line1[i]!='T'&&line1[i]!='G'&&line1[i]!='C'||line2[i]!='A'&&line2[i]!='T'&&line2[i]!='G'&&line2[i]!='C'){
				printf("error");
				return 0;
			}
		}
		rate=1.0*sum/len1;
		if(rate>=rate0){
			printf("yes");
		}else{
			printf("no");
		}
	}else{
		printf("error");
	}
	return 0;
}