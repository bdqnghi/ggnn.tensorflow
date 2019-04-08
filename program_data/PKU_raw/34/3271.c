main()
{ int n,k,i,j,*a,t,s,p;
  scanf("%d",&n);
  while(n!=1)
  { if(n%2==0)
    { printf("%d/2=%d",n,n/2);

    n=n/2;
    }
    else if(n%2!=0){
    printf("%d*3+1=%d",n,n*3+1);
    n=n*3+1;
    }
    printf("\n");
  }
  printf("End");
}