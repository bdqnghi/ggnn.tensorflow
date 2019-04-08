int main()
{
    int a,b,A=0,B=0,n,i,j;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
     scanf("%d %d",&a,&b);
     j=a-b;
     if(j==-1||j==2)
     A++;
     else if(j==1||j==-2)
     B++;
     
  }
    if(A>B)
    printf("A");
    if(A<B)
    printf("B");
    if(A==B)
    printf("Tie");

}