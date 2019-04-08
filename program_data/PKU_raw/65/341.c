main()
{
      int n,i=1,A=0,B=0;
      scanf("%d",&n);
      while(i<=n){
                  int a,b;
                  scanf("%d %d",&a,&b);
                  if((b==0&&a==1)||(b==1&&a==2)||(b==2&&a==0))
                     B=B+1;
                  else if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0))
                     A=A+1;
                  i=i+1;
                  }
      if(A>B)
         printf("A");
      else if(B>A)
         printf("B");
      else if(A==B)
         printf("Tie");
}
