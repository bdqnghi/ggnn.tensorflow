int main()
{
    char s[301],x;
    char b[27]="abcdefghijklmnopqrstuvwxyz";
    gets(s);
    int len;
    len=strlen(s);
    int j,i,a[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},d=0;
    for(j=0;j<26;j++){
    for(i=0;i<len;i++){
        if(s[i]==b[j]){
          a[j]++;
          d++;
        }
        }
        if(a[j]!=0){
        x=b[j];
        printf("%c=%d\n",x,a[j]);
        }
    }
    if(d==0)
    printf("No");
    return 0;
}
    