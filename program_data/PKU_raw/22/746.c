int main()
{
  int max,max2,x;
  max2=-1;
  scanf("%d",&max);
  while (scanf(",")!=EOF)
  {
scanf("%d",&x);
if (x>max)
{
max2=max;
max=x;
continue;
} 
if ((x>max2)&&(x<max)) max2=x;
} 


if (max2<0) printf("No"); else printf("%d",max2);
}