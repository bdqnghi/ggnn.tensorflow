int main () {
int l1,l2,s=0;
double r,d;
char s1[max+1],s2[max+1];
scanf("%lf %s %s",&r,s1,s2);
l1=strlen(s1);
l2=strlen(s2);
if (l1!=l2) {
            printf("error");
         
            return 0;
            } else { for(int i=0;i<l1;i++) {
                    if ((s1[i]!='A'&&s1[i]!='G'&&s1[i]!='C'&&s1[i]!='T')||(s2[i]!='A'&&s2[i]!='G'&&s2[i]!='C'&&s2[i]!='T')){
                                      printf("error");
                                   
                                      return 0;
                                      }
                                      }
                         for (int j=0;j<l1;j++) {             
                          if (s1[j]==s2[j]) {
                              s++;
                              }       
                              }
                              d=1.0*s/l1;
                              if (d>r) {
                                       printf("yes");
                                       } else {printf("no");}
                              }
                                                           


return 0;
}
