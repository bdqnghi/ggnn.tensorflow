//itc online test nov 13 prob 8
main() {
       char s[50],targets[50];
       scanf("%s %s",&s,&targets);
       int slen=strlen(s);
       int targetslen=strlen(targets);
       int i,j;
       int done=0; 
       for (i=0;i<=targetslen-slen;i++) {
           if (done==0) {
                            int check=1;
                            for (j=i;j<=i+slen-1;j++) {
                                if (targets[j]!=s[j-i]&&check==1) {
                                                        check=0;
                                }
                            }
                            if (check==1) {
                                            printf("%d",i);
                                            done=1;
                            }
           } 
       }
} 
