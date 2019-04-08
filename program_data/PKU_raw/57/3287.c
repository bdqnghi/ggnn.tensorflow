int main(){
int LEN,n,i;
scanf("%d",&n);
char str[50][32];
for(i=0;i<=n;i++){
gets(str[i]);
    }
for(i=0;i<=n;i++){
        LEN=strlen(str[i]);
if(str[i][LEN-3]=='i'&&str[i][LEN-2]=='n'&&str[i][LEN-1]=='g'){
            str[i][LEN-3]='\0';
        }else if((str[i][LEN-2]=='e'&&str[i][LEN-1]=='r')||(str[i][LEN-2]=='l'&&str[i][LEN-1]=='y')){
            str[i][LEN-2]='\0';
        }
    }
for(i=0;i<=n;i++){
puts(str[i]);
    }
return 0;
}