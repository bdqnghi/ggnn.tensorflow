int main(){
	int i,m,j,k,n1,n2;
	char x;
	char zf[300];
	char s1[100],s2[100];
	gets(zf);
	gets(s1);
	gets(s2);
	n1=strlen(s1);
	n2=strlen(s2);
	for(i=0;i<(strlen(zf));i++){
		if(zf[i]==s1[0]&&zf[i+1]==s1[1]&&zf[i+n1-1]==s1[n1-1]){
			for(k=0;k<n2;k++){
				zf[i]=s2[k];
				i++;
			}
			break;
		}
	}
		
	puts(zf);
	
	
    
    return 0;
}
