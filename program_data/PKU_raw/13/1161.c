int main()
{
 int N;
 scanf("%d",&N);   
 int a[N],b[N];
 int i,j,k,n,m = 0,flag;
 for(i = 0; i <= N; i++)
  scanf("%d",&a[i]);
 for(i = 0; i < N; i++)
 {
  flag = 1;
  for(j = 1; j <= m; j++)
   if(a[i] == b[j])
   {
    flag = 0;
    break;
   }
   if(flag)
   {
    b[j] = a[i];
    m++;
   }
 }
 printf("%d",b[1]);
 for(i = 2; i <= m; i++)
  printf(" %d",b[i]);
}
