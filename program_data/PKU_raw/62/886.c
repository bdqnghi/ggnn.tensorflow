int main(){
     int len,i;
     char s[100];
     gets(s);
     len=strlen(s);
     if(s[0]!=' '){ printf("%c",s[0]); }
     for(i=1;i<len;i++){
          if(s[i]!=' '){ printf("%c",s[i]);  continue;}
          if(s[i-1]!=' '&&s[i]==' '){ printf("%c",s[i]); continue;}
          if(s[i-1]==' '&&s[i]==' '){continue;}
     }
     return 0;
}