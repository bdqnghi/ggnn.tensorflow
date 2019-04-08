void main()
{
  long i,s,k,n,max,min;
  scanf("%ld\n",&n);
  min=32767; max=0; s=0;
  for (k=1;k<=n;k++){scanf("%ld",&i); if(max<i)max=i; if(min>i)min=i; s+=i;}
  if ((max*n-s)>(s-min*n)) printf("%ld\n",max);
  else if ((max*n-s)<(s-min*n)) printf("%ld\n",min);
  else printf("%ld,%ld",min,max);
}