main()
{
int n;
scanf("%d", &n);
int a[n], b[n]; int i;
for(i=0; i<n; i++)
   {
   scanf("%d %d", &a[i], &b[i]);
   }
int c[n]; int p=0;
for(i=0; i<n-1; i++)
   {
        if ((a[i]>=90&&a[i]<=140)&&(b[i]>=60&&b[i]<=90))
         {
         p=p+1;
         c[i]=0; 
         }
        else
         {
         c[i]=p; p=0;
         }
   }
if ((a[n-1]>=90&&a[n-1]<=140)&&(b[n-1]>=60&&b[n-1]<=90))
{ c[n-1]=p+1;}
else
{ c[n-1]=p;}
int Max=0;
for(i=0; i<n; i++)
   {
   if (Max<c[i])
   Max=c[i];
   }
printf("%d", Max);
}