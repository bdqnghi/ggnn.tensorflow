
void gj(int k)
{
  int i,j,m;
  if(k==1)
  {
   printf("End\n");
   return;
  }
  if(k%2==1)
  {
    printf("%d*3+1=%d\n",k,3*k+1);
	gj(3*k+1);
  }
  else
  {
    printf("%d/2=%d\n",k,k/2);
	gj(k/2);
  }
}

int main()
{
  int k;
  scanf("%d",&k);
  gj(k);
  return 0;
}