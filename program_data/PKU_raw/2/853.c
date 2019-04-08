struct person{
    int num;
    int book[1000];
};
struct person p[26];
int n,m,i,j,k;
char str[30];
int main(){
    memset(p,0,sizeof(p));
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%s",&m,str);
        for(j=strlen(str)-1;j>=0;j--)
            if(str[j]>='A'&&str[j]<='Z'){
                k=p[str[j]-'A'].num++;
                p[str[j]-'A'].book[k]=m;
            }
    }
    m=0;
    for(i=1;i<26;i++)
        if(p[i].num>p[m].num)
            m=i;
    printf("%c\n",'A'+m);
    printf("%d\n",p[m].num);
    for(i=0;i<p[m].num;i++)
        printf("%d\n",p[m].book[i]);
    return 0;
}
