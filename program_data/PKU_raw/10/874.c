int a[25]={0},n;
int main ()
{ int F (int x);
  int i,z=0;
  scanf("%d",&n);
  for (i=0;i<n;i++)
  scanf("%d",&a[i]);
  for (i=0;i<n;i++)
  if (z<F(i))   z=F(i);
  printf("%d\n",z);  
  
}
int F (int x)
{ 
    int i,z=1;
    for (i=x+1;i<n;i++)
    if ((a[x]>=a[i])&&(F(i)+1>z))      
    z=F(i)+1;
    return z;}
