
         int main () {
           int n,sz[100]={0};
           char s[max+1];
             scanf("%d",&n);
             for (int i=0;i<n;i++) {
                 scanf("%s",s);
                 for (int j=0;s[j];j++) {
                     if (!((s[j]=='_')||(s[j]>='A'&&s[j]<='Z')||(s[j]>='a'&&s[j]<='z')||(s[j]>='0'&&s[j]<='9'&&j>0))) {
                      sz[i]=-1; break;
                      }
                 }
                 }
                 for (int p=0;p<n;p++) {
                     if (sz[p]==0) {
                                   printf("yes\n");
                                   } else {
                                          printf ("no\n");
                                          }
                 }
                 
 
             return 0;
            
             }
