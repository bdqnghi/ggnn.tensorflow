int main(){
	char str[257],substr[257],re[257];
	int i=0,j=0,n=0,m=0,k=0;
	scanf("%s\n%s\n%s\n",str,substr,re);
    n=strlen(substr);
	for(i=0;str[i]!='\0';i++){
		if(str[i]==substr[j]){
		
			if(memcmp(substr,str+i,n)==0){
				m=i;
				k=1;
				break;
			}
		}
	}
	if(k==1){
      for(i=m;i<m+n;i++){
		str[i]=re[i-m];
	  }
	}
	
	printf("%s",str);
	return 0;
}
