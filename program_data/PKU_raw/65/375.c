main()
{
   int n,A,B,Aw=0,Bw=0;
   scanf("%d",&n);
   while(n--)
   {
     scanf("%d%d",&A,&B);
     if(A==0)
      {
       if(B==1)
       Aw++;
       else if(B==2)
       Bw++;
       }
     else if(A==1)
       {
       if(B==2)
       Aw++;
       else if(B==0)
       Bw++;
       }
     else
      {
       if(B==0)
       Aw++;
       else if(B==1)
       Bw++;
      }
   }
  if(Aw>Bw)
    printf("A");
  else if(Aw<Bw)
    printf("B");
  else
    printf("Tie");
}
