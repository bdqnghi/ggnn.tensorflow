int main(){
    float std,rate,sign;
    int i,l1,l2;
    char dna1[500],dna2[500];
    
    scanf("%f",&std);
    scanf("%s %s",dna1,dna2);
    l1=strlen(dna1);
    l2=strlen(dna2);
    sign=0;
    
    if(l1!=l2) {
               printf("error");
               return 0;
               }

    for(i=0;i<l1;i++){
                          switch(dna1[i]){
                                          case'A':break;
                                          case'T':break;
                                          case'G':break;
                                          case'C':break;
                                          default:printf("error");return 0;
                                          }
                          switch(dna2[i]){
                                          case'A':break;
                                          case'T':break;
                                          case'G':break;
                                          case'C':break;
                                          default:printf("error");return 0;
                                          }
                          if(dna1[i]==dna2[i]) sign++;
                      }
    rate=sign/l1;
    
    if(rate>=std) printf("yes");
    else printf("no");
    
    scanf("%d",&i);
    return 0;
                                                            
} 