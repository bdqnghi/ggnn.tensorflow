void main()
{
  int x,i=0,l,a[5];
  scanf("%d",&x);
 while  (x>0)
  {
	 a[i]=x-x/10*10;
	 x=x/10;
	 i++;
  }
  l=i;
  for (i=0;i<l;i++)
  printf("%d",a[i]);
}