void bubble(int a[],int l)
{
     int i,j,temp;
     for (i=1;i<l;i++)
     {
         for (j=0;j<l-i;j++)
         {
             if (a[j]>a[j+1])
             {
                   temp=a[j];
                   a[j]=a[j+1];
                   a[j+1]=temp;          
             }
         }
     }
}
void main ()
{
     int i,l1,l2,a[100],b[100];
     scanf ("%d%d",&l1,&l2);
     
         for (i=0;i<l1;i++)
         {
             scanf ("%d",&a[i]);
         }
         bubble(&a,l1);
         
         for (i=0;i<l2;i++)
         {
             scanf ("%d",&b[i]);
         }
         bubble(&b,l2);
         for (i=0;i<l1;i++)
         printf ("%d ",a[i]);
         printf ("%d",b[0]);
         for (i=1;i<l2;i++)
         printf (" %d",b[i]);
         
}
