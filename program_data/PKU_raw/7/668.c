int main(){
	char s[256],ow[256],rw[256];
	scanf("%s%s%s",s,ow,rw);
	int lens,lenow;
    int i,j,k,l,t,flag;
	lens=strlen(s);
	lenow=strlen(ow);
	for(i=0;i<=(lens-lenow);i++){
		flag=1;
		for(j=0;j<lenow;j++){
			if(s[i+j]!=ow[j]){
				flag=0;
				break;
			}
		}
		if(flag!=0){
			t=i;
			break;
		}
	}
	if(flag==0){
		printf("%s",s);
	}
	else{
		for(k=0;k<t;k++){
			printf("%c",s[k]);
		}
		printf("%s",rw);
		for(l=t+lenow;l<lens;l++){
			printf("%c",s[l]);
		}
	}
	return 0;
}