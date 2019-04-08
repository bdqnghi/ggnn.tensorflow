int main()
{
  int a[32767],i,n;
  for(i=1;i<=32767;i++)
	  a[i]=0;
  scanf("%d\n",&n);
  n--;
  scanf("%d",&i); 
  a[i]=1;
  printf("%d",i);
  while(n>0)
  { 
     scanf("%d",&i);
	 if(a[i]==0)
	 {
        a[i]=1;
		printf(",%d",i);
	 }
     n--;
  }
}