int main(){
    char s[500],su[500],re[500];
	int len1,len2,i,j,k,l,m=0;
    scanf("%s%s%s",s,su,re);
	len1=strlen(s);
	len2=strlen(su);
    for(i=0;i<len1-len2+1;i++){
		k=0;
		for(j=0;j<len2;j++){
			if(s[i+j]!=su[j]){
			break;
			}
			else {
			k++;
			}
		}
		if(k==len2){
			m++;
			for(l=0;l<len2;l++){
			s[i+l]=re[l];
			}
		}
		if(m==1){
			break;}
	}
	printf("%s",s);
	
                     
    return 0;
    }