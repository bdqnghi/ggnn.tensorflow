int main()
{
    int a=0,b=0,j,k,n;
    scanf("%d",&n);
    while(n>0){
    scanf("%d%d",&j,&k);
          if(j==k)
          {
                  a++;
                  b++;
                  } 
          else{
               if((j==0&&k==1)||(j==1&&k==2)||(j==2&&k==0))
               a++;
               else
               b++;
               }
               n--;
    }
    if(a>b)
    printf("A");
    if(a<b)
    printf("B");
    if(a==b)
    printf("Tie");
}