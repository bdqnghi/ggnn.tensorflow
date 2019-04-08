int main(){
    char s[101],a[101],b[101];
    gets(s);
    gets(a);
    gets(b);
    char sub[101][101];
    int len=strlen(s);
    int m=0,n=0;
    for(int i=0;i<len;i++){
            if(s[i]!=' '){
                       sub[m][n]=s[i];
                       n++;
            }
            if(s[i]==' '){
                       m++;
                       n=0;
            }
    }
    for(int j=0;j<=m;j++){
            if(strcmp(sub[j],a)==0){
                      if(j==0){
                               printf("%s",b);
                      }
                      if(j!=0){
                               printf(" %s",b);
                      }
            }
            else{
                      if(j==0){
                               printf("%s",sub[j]);
                      }
                      if(j!=0){
                               printf(" %s",sub[j]);
                      }
            }
    }
	return 0;
}

