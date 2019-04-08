int main()
{
    int n,a,b,i,c,temp=0;
    int j=0;
    scanf("%d",&n);
    for(i=1;i<=n;i=i++){
            scanf("%d %d",&a,&b);
              if(a>=90&&a<=140&&b>=60&&b<=90){
                   j=j++;
                   c=j;
                   if(temp<=c)
                     temp=c;
                     }
              else{
                 j=0;
              }
    }
    printf("%d",temp);
    scanf(""); 
    return 0;  
}