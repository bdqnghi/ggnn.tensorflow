void main()
{int a[20001];
int i,k,j=0,n,fil=101,m=0,g=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d",&a[i]);}
k=0;
a[n]=101;

while(k<n)
{
  
for(i=0;i<k;i++)
   {
    if(a[i]==a[k])
    k++;
   }
for(i=0;i<k;i++)
   {
    if(a[i]==a[k])
    k++;
   }
if(k==0)
printf("%d",a[k]),k++;

else
if(k<n&&k>0)
printf(" %d",a[k]),k++,m++;
}

}