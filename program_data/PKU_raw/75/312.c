int main()
{
  char c;
  int m,n=1,i;
  int a[1001]={0};
  scanf("%d",&m);
  for(i=m;i<1000;i++)
	  a[i]++;
  scanf("%c",&c);
  while(c!='\n')
  {
	  scanf("%d",&m);
      for(i=m;i<1000;i++)
	  a[i]++;
	  scanf("%c",&c);
	  n++;
}
   scanf("%d",&m);
  for(i=m;i<1000;i++)
	  a[i]--;
   scanf("%c",&c);
   while(c!='\n')
  {
	  scanf("%d",&m);
      for(i=m;i<1000;i++)
	  {a[i]--;
	 
	  }
	  scanf("%c",&c);
   }  m=0;
   for(i=1;i<1000;i++)
	   if(a[i]>m)m=a[i];
	   printf("%d %d",n,m);
}

