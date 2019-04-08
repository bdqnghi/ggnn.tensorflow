int main()
{
int n,m,i,j,a[1000],time=0,s=0,temp;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 scanf("%d",&m);
 for(j=0;j<=100;j++) a[j]=0;
 for(j=1;j<=m;j++)
 {
  scanf("%d",&temp);
  a[temp]=1;
 }          
 for(j=1;j<=100;j++)
 {
  time++;s++;
  if(a[j]==1) time+=3;
  if(time>=60) break;
 }
 printf("%d\n",s);
 s=0;time=0;
}
scanf("%d",&n);
return 0;
}
