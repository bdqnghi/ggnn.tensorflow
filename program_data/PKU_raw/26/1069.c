int main(){
   char s[N];
   gets(s);
   int i;
   
   for(i=0;s[i]!='\0';i++){
    
	   if(s[i]!=' '){printf("%c",s[i]);}   
       if(s[i]==' '&&s[i+1]!=' '){printf(" ");} 
   
   }

return 0;
}