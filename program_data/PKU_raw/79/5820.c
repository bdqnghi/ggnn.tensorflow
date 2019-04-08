
int main()
{
int n,m,i,j,s,x[1000],y[1000];
                                            
                                  
scanf("%d %d",&n,&m);
                                      while(n!=0&&m!=0)
                                      {

for (i=0;i<=(n-1);i++)
{
    y[i]=0;
x[i]=i+1;
}
//?????n-1????? 
//???????????? 

for (j=0;j<=(n-2);j++)

{
s=m %(n-j); 


         for (i=s;i<=(n-j-1);i++) 
          {
          y[i-s]=x[i];
          }
          for (i=0;i<=(s-2);i++)
          {
          y[n-j-s+i]=x[i];
          }  
    
//????????????y[] ,??y?????x?????y???
      
for(i=0;i<=(n-j-2);i++)
          {
          x[i]=y[i];
          }
x[n-j-1]=0;
for (i=0;i<=n-j-2;i++)
  {
                      y[i]=0;
  }
          
}



printf("%d\n",x[0]) ;
scanf("%d %d",&n,&m);
                                                                }

    
}
