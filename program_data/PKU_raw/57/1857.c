int main()
{
     char danci[2000][2000];
    int n,i,len[2000],j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%s",danci[i]);
    len[i]=strlen(danci[i]);}
     for(i=0;i<n;i++){
    if(danci[i][len[i]-1]!='g'){
        danci[i][len[i]-2]='\0';}
       else{
       danci[i][len[i]-3]='\0';}}
for(i=0;i<n;i++){
     printf("%s\n",danci[i]);}
    return 0;
}
     