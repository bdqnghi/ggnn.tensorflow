int fun(int m,int n,int j); 
void main() 
{ 
   int n,m,s,i;
   scanf("%d",&i);
   while(i--)
  {
     scanf("%d %d",&m,&n); 
     if(n>m) n=m; 
     s=fun(m,n,0); 
     printf("%d\n",s); 
  } 
}
int fun(int m,int n,int j) 
{ 
    int i,s=0; 
    if(m<j) 
       return 0;
    if(n==1) 
        return 1;
    for(i=j;i<m;i++) 
        s+=fun(m-i,n-1,i); 
    return s; 
}