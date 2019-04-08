int main(){
    char zf[106];
    while(1) {
    memset(zf,'\0',sizeof (zf));
    gets(zf);
    if (zf[0]=='\0')
    break;
    puts(zf);
    for (int i=0;i<strlen(zf);i++){
              if(zf[i]==')'){
              for (int j=i;j>=0;j--){
              if (zf[j]=='('){
              zf[j]=' ';
              zf[i]=' ';
              break;
              }
              }               
              }
              else if (zf[i]!='(') {
              zf[i]=' ';
              }
    }
    for (int t=0;t<strlen(zf);t++){
             if(zf[t]=='('){
             zf[t]='$';
             } 
             else if (zf[t]==')'){
             zf[t]='?';
             }
    }
    puts(zf);
    }
return 0;
}