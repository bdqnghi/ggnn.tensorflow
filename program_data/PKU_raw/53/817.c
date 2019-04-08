
int main()
{
   int n,i,j,k;
   int a[300];
   int b[300];

   scanf ("%d",&n);
      
   for (i=0;i<n;i++){
   
        scanf ("%d",&a[i]);
   
   }
   b[0]=a[0];
   k=0;
   for (i=0;i<n;i++){
	   
	   for (j=i+1;j<n;j++){
	   
		   if (a[i]==a[j]){a[j]=0;}
        
	   }
	   if (a[i]!=0){b[k]=a[i];k+=1;}
   }


   for (i=0;i<k-1;i++)
   {
     printf ("%d,",b[i]);
   }
   printf ("%d\n",b[k-1]);

  return 0;

}