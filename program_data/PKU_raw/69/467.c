int main()
{   int str2(char*str,int*a);
    int add(int*a,int al,int*b,int bl,int*c);
    int print(int*c,int l);
    char s1[max];
    char s2[max];
    int a[max],b[max],c[max];
    int al,bl,cl;
    scanf("%s%s",s1,s2);
    al=str2(s1,a);
    bl=str2(s2,b);
    cl=add(a,al,b,bl,c);
    print(c,cl);
 
}
int str2(char*str,int*a)
{
    int i,l;
    l=strlen(str);
    for(i=0;i<l;i++){
        a[l-i-1]=str[i]-'0';}
    return l;
}
int add(int*a,int al,int*b,int bl,int*c)
{
    int l=(al>bl)? al:bl;
    int i;
    for(i=0;i<l;i++){
        c[i]=0;
        if(i<al) c[i]+=a[i];
        if(i<bl) c[i]+=b[i];
        }
    c[l]=0;
    for(i=0;i<l;i++){
        if(c[i]>=10){
           c[i+1]+=c[i]/10;
           c[i]=c[i]%10;
           }
           }
    if(c[l]!=0)
    return l+1;
    else 
    return l;
}
int print(int*c,int l)
{
    int i,k;
    k=l-1;
    while (c[k]==0&&k>0){
          k--;
          }
    for (i=k;i>=0;i--){
        printf("%d",c[i]);
        }
}
    
    
