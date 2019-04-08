main()
{
      int n,i,j=0,k=0,a,b;
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      {
      scanf("%d %d",&a,&b);
      if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0)) 
      j++;
      else if((b==0&&a==1)||(b==1&&a==2)||(b==2&&a==0))
      k++;
      else if((a==0&&b==0)||(a==1&&b==1)||(a==2&&b==2))
      ;
      else;
      }
      if(j>k)
      printf("A");
      else if(j<k)
      printf("B");
      else
      printf("Tie");
      }