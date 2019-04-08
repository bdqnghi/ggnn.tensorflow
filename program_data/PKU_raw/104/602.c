int main()
{
int x[10],y[10],a,b,i,j,k,t,m,s=0;
scanf("%d %d",&a,&b);
for(i=1,x[0]=a;x[i-1]!=1;i++)
   {
    x[i]=x[i-1]/2;
    }
k=i;
for(i=1,y[0]=b;y[i-1]!=1;i++)
   {
    y[i]=y[i-1]/2;
    }
t=i;
for(i=0;i<k;i++)
   {
    for(j=0;j<t;j++)
        {
         if(x[i]==y[j])
             {
              printf("%d",x[i]);
              s=1;
              break;
              }
         }
   if(s==1) break;
   }
return 0;
}