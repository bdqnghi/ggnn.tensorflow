int main()
{
char s[100],s0[100];
gets(s);
int i,k=0;
for(i=0;s[i]!='\0';i++){
 if(s[i]!=' '||(s[i]==' '&&s[i+1]!=' ')){
    s0[k]=s[i];
    k++;
 }
}
s0[k]='\0';
printf("%s",s0);
return 0;
}