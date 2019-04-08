int main()
{
     int n,i,j,k;
     scanf("%d",&n);
if(n<=4)
printf("empty\n");
     for(i=4;i<n;i+=2)
{k=0;
for(j=3;j<=(int)sqrt(i-1);j+=2)
{
if((i-1)%j==0)
{k=1;break;}
                              }
for(j=3;j<=(int)sqrt(i+1);j+=2)
{
if((i+1)%j==0)
{k=1;break;}
                              }
if(k==0)
printf("%d %d\n",i-1,i+1);                
                }
  return 0;
}