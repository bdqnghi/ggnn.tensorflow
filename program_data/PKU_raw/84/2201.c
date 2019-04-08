
int main()
{
 int i=0;
 int n,tmp=0;
 int a=0,b=0;
 scanf("%d",&n);

 for(i=0;i<n;i++)
 {
   scanf("%d",&tmp);
   if (tmp>a)
   {
     b=a;
     a=tmp;
   }
   else 
   {
     if (tmp>b)
       b=tmp;
   }
 }
  


printf("%d\n",a);
printf("%d",b);
	return 0;
}
