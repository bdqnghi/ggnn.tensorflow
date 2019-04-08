void main()
{
 int a[1000],b,c,d,i,n,j,k;
 scanf("%d%d",&n,&k);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=0;i<n;i++)
 for(j=0;j<n;j++)
 if(a[i]+a[j]==k)
 {
  printf("yes\n");
 goto loop;
  }
 printf("no\n");
loop:
 b=0;
}