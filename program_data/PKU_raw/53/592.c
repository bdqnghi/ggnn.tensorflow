int main()
{ 
   int a[300]; 
   int n,i,j,k,l;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   for(j=0;j<n;j++) 
   for(k=j+1;k<n;k++)
   if(*(a+j)==*(a+k)) 
   *(a+k)=0; 
   printf("%d",*a);
   for(l=1;l<n;l++) 
   if(*(a+l)!=0) 
   printf(",%d",*(a+l));
}