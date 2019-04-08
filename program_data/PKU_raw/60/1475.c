int s(int a);
main()
{
      int c,i,n,m;
      scanf("%d",&c);
      if(c<5)
      printf("empty");
      else
      {
      for(m=4;m<=c;m++)
      if(s(m)==1&&s(m-2)==1)
      printf("%d %d\n",m-2,m);   
      } 
      
             
}
int s(int a)
{
    int i,b=0;
    for (i=2;i<a;i++)
    {
        if(a%i==0) break;
        if(i==(a-1)) 
        b=1;    
    }
    return b;    
}