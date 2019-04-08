int q(int m,int n)
{
 int c;
 if(m<0){ return 0;}
 if(n==1){ return 1;}
 else
 {c=q(m,n-1)+q(m-n,n);
}   
  return(c);  
}
main()
{
 int t,i,k,n,m;
 scanf("%d",&t);
 for(i=0;i<t;i++)
 {
   scanf("%d %d",&m,&n);
   k=q(m,n);
   printf("%d\n",k);              
 }
 getchar();
 getchar();
 getchar();      
}