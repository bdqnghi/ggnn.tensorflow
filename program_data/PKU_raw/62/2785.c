int main () {
int i,l,j;
char s[max];
gets(s);
l=strlen(s);
for (i=0;i<l-1;i++) {
    if(s[i+1]==' '&&s[i]==' ') {
       for (;s[i+1]==' ';) {
        for(j=i;j<l-1;j++) {
               s[j]=s[j+1];
                           }
            s[l-1]='\0';
            l--;
                         
                            }
                                }
                    }
        puts(s);                                                 
            
             return 0;
            
             }

