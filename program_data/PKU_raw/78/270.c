int main()
{
int a[4],x;
char b[4]={'z','q','s','l'},y;
for(int i=3;i<10;i++)
{
   for (a[0]=1;a[0]<=5;a[0]++)
      {
      a[1]=i-a[0];
      if (a[0]==a[1]) continue;
      for (a[2]=1;a[2]<=5;a[2]++)
         {a[3]=i-a[2]; if(a[3]==a[1]||a[3]==a[0]) continue;
      if (a[0]+a[3]>a[1]+a[2]&&a[0]+a[2]<a[1]) goto T;}
      }
}
T:
for (int j=2;j>=0;j--)
   for (int k=0;k<=j;k++)
      if (a[k]<a[k+1])
      {
      x=a[k];     y=b[k];
      a[k]=a[k+1];b[k]=b[k+1];
      a[k+1]=x;   b[k+1]=y;
      } 
for (int l=0;l<4;l++)
   printf("%c %d\n",b[l],a[l]*10);
}
