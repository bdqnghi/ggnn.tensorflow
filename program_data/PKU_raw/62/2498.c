int main(){
    int a=1;
    char t[101],s[101];
    gets(s);
	t[0]=s[0];
    for(int i=1;s[i]!='\0';i++){
        if(s[i]!=' '){
           t[a]=s[i];
           a++;
        }
        else if(s[i-1]==' ')continue;
        else if(s[i-1]!=' '){
           t[a]=s[i];
           a++;
        }
   }
   t[a]='\0';
   printf("%s",t);
   return 0;
}