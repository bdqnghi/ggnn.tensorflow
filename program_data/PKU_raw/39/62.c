int main()
{ long n,i,s,h,k,total;
  char a[100][21],d[100],e[100];
  long b[100],c[100],f[100];
  scanf("%d",&n);
  for(i=0;i<=n-1;i++)
   scanf("%s %d %d %c %c %d",a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
    k=0;
    total=0;
  for(i=0;i<=n-1;i++)
  { s=0;
    if(b[i]>80&&f[i]>=1)
		s=s+8000;
	if(b[i]>85&&c[i]>80)
		s+=4000;
	if(b[i]>90)
		s+=2000;
	if(b[i]>85&&e[i]=='Y')
		s+=1000;
	if(c[i]>80&&d[i]=='Y')
		s+=850;
	if(s>k)
	{k=s;h=i;}
    total+=s;
  }
  puts(a[h]);
  printf("%d\n%d",k,total);
return 0;
}