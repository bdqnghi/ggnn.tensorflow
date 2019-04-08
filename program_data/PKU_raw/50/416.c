int main(){
    int m[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int i,w,a,b,c,d;
    scanf("%d",&w);
    a=w+12;
    if(a%7==5)
    {
        printf("1\n") ;   
    }
    for(i=0;i<11;i++)
    {
        a=w+m[i]+12;
        if(a%7==5)
      {
            d=i+2;
        printf("%d\n",d) ;   
      }
      b=m[i+1] ;
      c=m[i]; 
      m[i+1]=b+c;
    }
    return 0;
        
}