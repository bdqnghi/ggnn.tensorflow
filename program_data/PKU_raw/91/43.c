
int main()
{
    char s1[101];
    gets(s1);
    int i,t;
    char s2[101];
    for(i=0;i<101;i++){
                       if(s1[i+2]!='\0'){
                                         s2[i]=s1[i]+s1[i+1];
                                         }
                       else{
                            t=i;
                            s2[i]=s1[i]+s1[i+1];
                            break;
                            }
                       }
    s2[t+1]=s1[t+1]+s1[0];
    for(i=0;i<t+2;i++){
                       printf("%c",s2[i]);
                       }   
  
    return 0;
    }