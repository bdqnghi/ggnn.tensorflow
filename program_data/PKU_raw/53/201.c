void main()
{
int a[300],b[300];
int n,i,j,m,x;
scanf("%d",&n);
for(i=0;i<n;i++)
  scanf("%d",&a[i]);
b[0]=a[0];
j=0;
m=1;
for(i=0;i<n;i++)
 {
  if (b[j]==a[i]) ;
  else 
  {
    for(j=0;j<m;j++)
	{
		if (b[j]!=a[i]) x=1;
		else {x=0;break;}
	}
    if(x) 
	{
     b[m]=a[i];
     j=m++;
	}
  }
 } 
for (j=0;j<m-1;j++)
printf("%d,",b[j]);
printf("%d\n",b[m-1]);
}