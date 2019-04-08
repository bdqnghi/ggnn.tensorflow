int main(){
int n,i,l,j;
char s[300];
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%s",s);
l=strlen(s);
for(j=0;s[j]!='\0';j++){
	if(j==l-1){
if(s[j]=='A') printf("T\n");
if(s[j]=='T') printf("A\n");
if(s[j]=='C') printf("G\n");
if(s[j]=='G') printf("C\n");
	}else{
if(s[j]=='A') printf("T");
if(s[j]=='T') printf("A");
if(s[j]=='C') printf("G");
if(s[j]=='G') printf("C");
	}
}

}
	return 0;
}

