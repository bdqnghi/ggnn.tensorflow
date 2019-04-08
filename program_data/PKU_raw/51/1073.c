int main(){
    char a[502],p[502][7];int len,n,re[502],max=0;
    memset(re,0,sizeof(re));
    scanf("%d",&n);
    scanf("%s",&a);
    len=strlen(a);
    for(int i=0;i<len-n+1;i++){
            for(int j=0;j<n;j++)p[i][j]=a[i+j];
            p[i][n]=0;
            }
    for(int i=0;i<len-n;i++)
    for(int j=i+1;j<len-n+1;j++)
    if(strcmp(&p[i][0],&p[j][0])==0)
    re[i]++;
    for(int i=0;i<len-n+1;i++)
    if(re[i]>max){max=re[i];}
    if(0==max){printf("NO");return 0;}
    printf("%d\n",max+1);
    for(int i=0;i<len-n+1;i++)
    if(re[i]==max)printf("%s\n",&p[i][0]);
    return 0;
}
