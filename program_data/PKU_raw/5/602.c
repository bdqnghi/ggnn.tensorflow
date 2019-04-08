int main()
{
    double w;
    char s1[600],s2[600];
    int l1,l2,i,a;
    a=0;
    scanf("%lf\n",&w);
    scanf("%s\n",s1);
    scanf("%s\n",s2);
    l1=strlen(s1);
    l2=strlen(s2);
    if(l1!=l2){
               printf("error");}
    else{
         for(i=0;i<l1;i++){
                           if(!(s1[i]=='A'||s1[i]=='T'||s1[i]=='C'||s1[i]=='G')){
                                                                                    printf("error");
                                                                                    return 0;}}
         for(i=0;i<l1;i++){
                           if(!(s2[i]=='A'||s2[i]=='T'||s2[i]=='C'||s2[i]=='G')){
                                                                                    printf("error");
                                                                                    return 0;}}
         
         for(i=0;i<l1;i++){
                           if(s1[i]==s2[i]){
                                            a++;}
                                            }
         if((1.0*a)/l1>w){
                               printf("yes");}
         else{
               printf("no");}}
    return 0;
}