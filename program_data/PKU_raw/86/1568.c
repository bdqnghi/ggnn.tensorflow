int main()
{
    int n,m,i,j,s[60],num;
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
                     num=0;
                     scanf("%d",&m);
                     if(m==0){ 
                             printf("60\n");}
                     else{
                     for(j=0;j<m;j++){
                                      scanf(" %d",&s[j]);}
                     for(j=1;j<m;j++){
                     if(((s[j-1]+3*j)<60)&&((s[j]+3*j)>60)){
                                                         num+=(60-3*j);}}
                     for(j=1;j<=m;j++){
                     if(((s[j-1]+3*(j-1))<60)&&((s[j-1]+3*j)>60)){
                                                                 num+=(s[j-1]);}}
                     if((s[m-1]+3*m)<=60){
                                          num+=(60-3*m);}
                     if((s[m-1]+3*(m-1))==60){
                                             num+=s[m-1];}
                     printf("%d\n",num);}}
    return 0;
}
