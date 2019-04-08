int main()
{
 int a[100];
 int n,i,s,j;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 int max=-10000;
 for(s=0;s<n;s++)
 {
	 if(max<a[s]) max=a[s];
 }
 int secondMax=0;
 for(j=0;j<n;j++)
 {
	 if(secondMax<a[j]&&a[j]<max)
		 secondMax=a[j];
 }
 printf("%d\n",max);
 printf("%d",secondMax);
 return 0;
}