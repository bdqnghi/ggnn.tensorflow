int main(){
	char str[255],sub[255],rep[255],s[255];
	gets(str);
	gets(sub);
	gets(rep);
	int len1=strlen(str),len2=strlen(sub),x=0;
	int i,j,n;
	for(i=0;i<len1-len2+1;i++){
		n=0;
		for(j=0;j<len2;j++){
			if(str[i+j]!=sub[j]){
				break;
			}
			else
				n++;
		}
		if(n==len2){
			int m=0;
			while(i+j+m<len1){
				s[m]=str[i+j+m];
				m++;
			}
			s[m]='\0';
			str[i]='\0';
			strcat(str,rep);
			strcat(str,s);
			puts(str);
			x=1;
			break;
		}
	}
	if(x==0)
		puts(str);
	return 0;
}