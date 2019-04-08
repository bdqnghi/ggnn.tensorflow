int main(){
char sb[1000]={'\0'};
gets(sb);
for(int i=0;sb[i]!='\0';i++){
if(sb[i]!=' ')
printf("%c",sb[i]);
else if(sb[i]==' '&&sb[i+1]!=' ')
printf(" ");
}
return 0;
}
