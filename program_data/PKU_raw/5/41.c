int main(){
	double s;
	char sz1[500];
	char sz2[500];
	int i,n=0;
	int len1,len2;
	double num;
	scanf("%lf%s%s",&s,sz1,sz2);
	len1=strlen(sz1);
	len2=strlen(sz2);
	if(len1!=len2){
		printf("error");
		return 0;
	}else{
		for(i=0;i<len1;i++){
			if((sz1[i]!='A'&&sz1[i]!='T'&&sz1[i]!='C'&&sz1[i]!='G')||(sz2[i]!='A'&&sz2[i]!='T'&&sz2[i]!='C'&&sz2[i]!='G')){
				printf("error");
				return 0;
			}
		}
		for(i=0;i<len1;i++){
			if(sz1[i]==sz2[i]){
				n++;
			}
		}
		num=1.0*n/len1;
		if(num>s){
			printf("yes");
			return 0;
		}else{
			printf("no");
			return 0;
		}
	}
}