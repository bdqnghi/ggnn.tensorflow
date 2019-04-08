int n,a,b,ind[MAXN],oud[MAXN],i;
int main()
{
  scanf("%d",&n); 
  scanf("%d%d",&a,&b);
  while(a+b)
    {
    ind[b]++;
    oud[a]++;  
    scanf("%d%d",&a,&b);     
    } 
  for(i=0;i<n;i++)
    if (ind[i]==n-1&&!oud[i])
      break;
  if (i<n)
    printf("%d\n",i);
  else
    printf("NOT FOUND\n");        
  return 0;
} 
