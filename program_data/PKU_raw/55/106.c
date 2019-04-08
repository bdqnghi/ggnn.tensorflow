//itc online test nov 15
main() {
       char s[100];
       int a,b;
       scanf("%d %s %d",&a,&s,&b);
       int slen=strlen(s);
       long indec=0;
       long tempdec;
       int i,j;
       for (i=0;i<=slen-1;i++) {
           if (s[i]>=48&&s[i]<=57) {
                                   s[i]=s[i]-48;
           } else if (s[i]>=65&&s[i]<=90) {
                  s[i]=s[i]-55;
           } else {
                  s[i]=s[i]-87;
           }
           tempdec=1; 
           for (j=1;j<=slen-i-1;j++) {
                tempdec=tempdec*a;
           }
           indec=indec+tempdec*s[i];
       }
       char res[100];
       int temp;
       int point=0; 
       while (indec>=b) {
              temp=indec%b;
              indec=indec/b;
              if (temp<10) {
                   res[point]=temp+48;
              } else {
                     res[point]=temp+55;
              }
              point++;
       }
       if (indec<10) {
                    res[point]=indec+48;
       } else {
              res[point]=indec+55;
       }
       for (i=point;i>=0;i--) {
           printf("%c",res[i]);
       }
       scanf("%d",&i);
} 

        
            
