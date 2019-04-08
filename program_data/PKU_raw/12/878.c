int main()
{
 int a[100][16];
 int i,j,k,t,s;
 int b[100]={0};
 for(i=0;i<=99;i++)
 {
   
  for(j=0;j<=15;j++)
  {
   scanf("%d",&a[i][j]);
   if(a[i][j]==0||a[i][j]==-1)
   {
	   break;}
  }
  if(a[i][0]==-1) {b[i]=-1; break;}
 }
    for(k=0;k<=99;k++)
 {
  if(a[k][0]==-1) 
  {break;}
  for(t=0;t<=15;t++)
  {
   if(a[k][t]==0||a[k][t]==-1) {break;}
   for(s=0;s<=15;s++)
   {
    if(a[k][s]==0) {break;}
	if(a[k][t]*2==a[k][s]) {b[k]++;}
   }
  }
 }
 for(int q=0;q<=99;q++)
 {
  if(b[q]==-1)
  {break;}
  printf("%d\n",b[q]);
 }
 return 0;
}