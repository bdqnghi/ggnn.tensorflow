int main()
{
 int arr[100]={0};
 int n,i,s,j;
n=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 int max=-10000;
 for(s=0;s<n;s++)
 {
  max=(max>=arr[s])?max:arr[s];
 }
 int secondMax=0;
 for(j=0;j<n;j++)
 {
  secondMax=(secondMax>=arr[j]||arr[j]==max)?secondMax:arr[j];
 }
 printf("%d\n",max);
 printf("%d",secondMax);
 return 0;
}