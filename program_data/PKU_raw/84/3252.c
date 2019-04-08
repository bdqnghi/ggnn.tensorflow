int main()
{
	int a;
	scanf("%d",&a);
	int sz[1000];
	int index;
	for(index=0;index<a;index++)
	scanf("%d",&sz[index]);
	int d,x,inde;
	d=sz[0];
	x=sz[0];
	for(inde=1;inde<a;inde++)
    {
	  if(sz[inde]>d)
	  {
		  x=d;
		  d=sz[inde];
      }
	  else if(sz[inde]>x)
		  x=sz[inde];
    }
    printf("%d\n",d);
	printf("%d\n",x);
	return 0;
}