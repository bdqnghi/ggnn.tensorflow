
int main()
{
  int a=3,b,c,n,f[10000],i,j;
  scanf("%d",&n);
  for(i=0;a<=n;a=a+2)
  {
    for(c=2;c<a;c=c+1)
      {  
		b=a%c;
        if(b==0) break;
	  }
    if(c==a)
    {
      f[i]=a;
      i++;
    }
  }
  for(j=0;j<=i;j++)
  {
    if(f[j+1]-f[j]==2)
    printf("%d %d\n",f[j],f[j+1]);
  }
if(n<5)
  printf("empty");
}
