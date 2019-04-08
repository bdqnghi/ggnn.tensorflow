int main ()
{
  int n,max1,max2,i,d,e,f;
  scanf("%d\n",&n);
  scanf("%d\n",&d);
  scanf("%d\n",&e);
  max2=e;
  max1=d;
  if (d>e) 
{  max2=d;
   max1=e;
}

    for(i=2;i<n;i++)
{ 
  scanf("%d\n",&f);
  if (f>max2) 
{  max1=max2;
   max2=f;
}
else if (f<=max1) ;
else 
max1=f;
}
printf("%d\n%d",max2,max1);
return 0;
}

   

  