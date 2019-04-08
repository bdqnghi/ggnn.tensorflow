int main(){
    int m,n,i,x,e,max;
    while(e==e){
    scanf("%d %d",&n,&m);
    if(n==0&&m==0)break;
    int c[n+1];
    for(i=1;i<=n;i++)
        c[i]=i;
       x=n;
for(i=1;;) {
     for(i=1;i<=n;i++)
        if(c[i]%m!=0){
           x++;
           c[i]=x;
        }
    max=1;
    for(i=1;i<=n;i++)
       if(c[i]>c[max])
         max=i;
    e=0;
    for(i=1;i<=n;i++)
        if(c[i]%m==0)
            e=e+1;
      if(e==n)break;

}
printf("%d\n",max);}
return 0;
}



