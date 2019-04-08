int main()
{
  int n,a[200],b[200],i,A=0,B=0;
  scanf("%d\n",&n);
  for(i=0;i<n;i++)
  scanf("%d %d\n",&a[i],&b[i]);
  for(i=0;i<n;i++)
  {
    if(a[i]-b[i]==-1||a[i]-b[i]==2)
    A++;
    else{
           if(a[i]-b[i]==0);
           else
           B++;
        }
  }
  if(A<B)
  printf("B");
  else{
        if(A>B)
        printf("A");
        else
        printf("Tie");
      }
  return 0;
}

