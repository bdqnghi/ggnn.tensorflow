int main()
{
int j, i, x, y, a, m, n[100];

float sum=0;
scanf("%d", &m);
for(i=1;i<=m;i++)
  scanf("%d", &n[i]);
for(i=1;i<=m;i++)
{
	sum=0;
   x=2;
   y=1;
    for(j=1;j<=n[i];j++)
	{
	   sum+=(float)(x)/(float)(y);
	   a=x;
	   x=x+y;
	   y=a;
}
	printf("%.3f", sum);printf("\n");

}

return 0;
}