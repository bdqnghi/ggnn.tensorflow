int main()
{
int i,j,n,max=0,maxb=0; 
scanf("%d",&n);
int  *a=(int*) malloc (n*sizeof(int)) ;
int  *b=(int*) calloc (n,sizeof(int)) ;

for (i=(n-1);i>=0;i--)
scanf("%d",&a[i]);
b[0]=1;

for (i=1;i<=(n-1);i++)
{
    max=0;
//printf("max=%d",max);
    for (j=0;j<=(i-1);j++)
    {
    if (     a[i]>=a[j]  &&  b[j]>max  )
       { 
   // printf("a[%d]>=a[j] is %d > %d",i,j,a[i],a[j]);
    max=b[j];
   //printf("max=%d",max);
       }
    }
    b[i]=max+1; 
   // printf("max=%d",max);
    //printf("b[%d]=%d\n",i,b[i]);  
}

for  (i=1;i<=(n-1);i++)
{
     if (  b[i]>  maxb)
     maxb  =  b[i];
}
printf("%d",maxb);
  
}
