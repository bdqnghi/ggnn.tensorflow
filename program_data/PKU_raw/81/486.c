
void input(int *a)
{
  int i,j;
  for(i=0;i<5;i++)
	  for(j=0;j<5;j++)
          scanf("%d",a++);	  
}
 
void output(int *a)
{
  int i,j;
  for(i=0;i<5;i++)
  {
	  for(j=0;j<4;j++)
          printf("%d ",*a++);
	  printf("%d\n",*a++);
  }
}  

int inv(int (*a)[5],int n,int m)
{
  int z,t,i;
  if(n>=0&&n<=4&&m>=0&&m<=4)
  {
	  for(i=0;i<5;i++)
	  {
        t=a[n][i];
	    a[n][i]=a[m][i];
	    a[m][i]=t;
	  }
	     z=1;
  }
  else z=0;
  return z;
}

main()
{
  int a[5][5];
  int n,m;
  input(a[0]);
  scanf("%d%d",&n,&m);
  if(inv(a,n,m)==0) printf("error");
  else output(a[0]);
}