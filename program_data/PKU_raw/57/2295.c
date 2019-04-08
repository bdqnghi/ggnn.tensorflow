int main(){
    int n,i,j,m;
    int len[50];
    scanf("%d",&n);
    char a[50][32];
    char b[50][32];
    for(i=0;i<n;i++){
        scanf("%s",a[i]);
    }
    for(i=0;i<n;i++){
        len[i]=strlen(a[i]);
            
            if(a[i][len[i]-3]=='i'&&a[i][len[i]-2]=='n'&&a[i][len[i]-1]=='g'){
                for(m=0;m<len[i]-3;m++){
                    b[i][m]=a[i][m];
                }  b[i][len[i]-3]=='\0'; puts(b[i]);
            }
            else if((a[i][len[i]-2]=='e'&&a[i][len[i]-1]=='r')||(a[i][len[i]-2]=='l'&&a[i][len[i]-1]=='y')){
                for(m=0;m<len[i]-2;m++){
                    b[i][m]=a[i][m];
                }  b[i][len[i]-2]=='\0'; puts(b[i]);
            }
        
    }
    return 0;
}