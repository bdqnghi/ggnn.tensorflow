int s=0;
int f(int M,int N)
{ 
  if((M>0)&&(N>0))  
  {
    if((N==1)||(M==1))
    {s=s+1;}
    else if((M<=N)&&(M!=1)&&(N!=1))
    {s=s+1;f(M,M-1);}
    else
    {
        
     f(M,N-1);
     f(M-N,N);
    }    
   }
  return s;
    
}
 int main()
{ 
  int t;
  scanf("%d",&t);
  for(int i=0;i<=t-1;i++)
{  
 int a,b;   
 scanf("%d %d",&a,&b);
 printf("%d\n",f(a,b));s=0;}
 int y;
 scanf("%d",&y);
 return 0;    
}
