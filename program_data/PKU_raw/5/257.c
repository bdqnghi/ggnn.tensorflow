int main(){
	char DNA1[501],DNA2[501];
	double rate;
	scanf("%lf",&rate);
	scanf("%s %s",DNA1,DNA2);
	int i,len1,len2,flag=0;
	len1=strlen(DNA1);
	len2=strlen(DNA2);
	if(len1!=len2){
	flag=1;
	}
	for(i=0;i<len1;i++){
		if(DNA1[i]=='A'||DNA1[i]=='T'||DNA1[i]=='C'||DNA1[i]=='G'){
		continue;
		}
		else{flag=1;}
	}
	for(i=0;i<len2;i++){
		if(DNA2[i]=='A'||DNA2[i]=='T'||DNA2[i]=='C'||DNA2[i]=='G'){
		continue;
		}
		else{flag=1;}
	}
	if(flag==1){
	printf("error\n");
	}
	else{
	int c=0;
	double result;
	for(i=0;DNA1[i];i++){
		if(DNA1[i]==DNA2[i]){
		c++;
		}
	}
	result=1.0*c/len1;
	if(result>rate){
	printf("yes");
	}
	else{
	printf("no");
	}
	}
	return 0;
}