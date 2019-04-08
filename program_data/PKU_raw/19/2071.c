int main(){
char a[11],b[101],z[11],s[16][11];
gets(b);
gets(a);
gets(z);										//??
int i,j,m,n,l,q[22];
for(i=0,m=0,n=0;b[i]!='\0';i++){    
	if(b[i]!=' '){
		s[m][n]=b[i];
	n++;
	
	}
	else{
		
		q[m]=n;
		n=0;
	m++;
			}
		}
q[m]=n;										//????????????
	for(i=0,j=0;i<=m;i++){
		if(a[0]==s[i][0]){
			l=1;
		for(j=0;j<q[i];j++){
			if(a[j]!=s[i][j]){
			l=0;
			}
			if(q[i]!=strlen(a)){
			l=0;
			}
		}
		if(l){
			for(j=0;z[j]!='\0';j++){
			s[i][j]=z[j];
			}
		q[i]=j;
		}
		}
	}												//??

	for(i=0;i<m;i++){
		for(j=0;j<q[i];j++){
		printf("%c",s[i][j]);
		}
		printf(" ");
	}
	
		for(j=0;j<q[m];j++){
		printf("%c\0",s[i][j]);
		}											//??
	return 0;}