int main ()
{
	char s[100],a[100],b[100],x[100];
	int len,n=0,at=1,i,j,t=0,m=0;
	gets(s),gets(a),gets(b);
	strcat(s," ");
	len=strlen(s);
	for(i=0;i<len+1;i++){
		if(s[i]==' '){
			at=0;
		}
		if(at==0){
			at=1;
			n++;
		}
	}
	for(i=0;i<n;i++){
		for(j=t;;j++){
			if(s[j]!=' '){
				x[j-t]=s[j];
			}
			else{
				x[j-t]='\0';
				t=j+1;
				m++;
				break;
			}
		}
		if(strcmp(x,a)==0){
			strcpy(x,b);
		}
		printf("%s",x);
		if(m!=n){
			printf(" ");
		}
	}
	return 0;
}



		


