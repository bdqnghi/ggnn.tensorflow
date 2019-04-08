int main()
{
  int n,i,j,s;
  int a[200][3];
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
     scanf("%d %d",&(a[i][0]),&(a[i][1]));
  }
  j=0;s=0;
  for(i=0;i<n;i++)
  {
      if((a[i][0]==0&&a[i][1]==1)||(a[i][0]==1&&a[i][1]==2)||(a[i][0]==2&&a[i][1]==0))
           j++;

      if((a[i][1]==0&&a[i][0]==1)||(a[i][1]==1&&a[i][0]==2)||(a[i][1]==2&&a[i][0]==0))
           s++;
  }
  if(j<s)
	  printf("B");
  if(j>s)
	  printf("A");
  if(j==s)
	  printf("Tie");
  return 0;
}
