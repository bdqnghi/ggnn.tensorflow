int main()
{
    int a,b,c,k=0,i,w,q,T;
    int m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int d,e,f,t,h=0,g=0;
    scanf("%d%d%d",&a,&b,&c);
    scanf("%d%d%d",&d,&e,&f);
    for(i=a;i<=d;i++)
    {
     if(i%4==0&&i%100!=0||i%400==0)
     k=k+1;
    }
    t=(d-a-1)*365;
    for(w=b;w<=12;w++)
    {
      h=h+m[w];
      }
    for(q=e;q>=1;q--)
    {
     g=g+m[q-1];
     }
     T=t+k+h+g-c+f;
     printf("%d",T);
     return 0;
}
      
      
    
    
      
