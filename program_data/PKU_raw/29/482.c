int main()
{
int m,a[100],b[100],c[100],j,i;
float d[100];
scanf("%d",&m);
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
d[i]=0;
}
b[0]=2;
b[1]=3;
c[0]=1;
c[1]=2;
for(i=0;i<m;i++)
{
  j=2;
  if(a[i]==1)
  d[i]=2.0/1;
  else if(a[i]==2)
  d[i]=2.0/1+3.0/2;
  else
  {
   d[i]=2.0/1+3.0/2;
   while(j<a[i])
    {
      b[j]=b[j-1]+b[j-2];
      c[j]=c[j-1]+c[j-2];
      d[i]+=b[j]*1.0/c[j];
      j++;      
    }                
  } 

}
for(i=0;i<m;i++)
printf("%.3f\n",d[i]);

return 0;    
}