void main()
{
int a[25],b[25],k,i,j,max=0;
scanf("%d",&k);
for(i=0;i<k;i++) {scanf("%d",&a[i]);b[i]=1;}
for(i=1;i<k;i++)
 for(j=0;j<i;j++)
  if(a[j]>=a[i]) {if(b[j]+1>b[i]) b[i]=b[j]+1;}
for(i=0;i<k;i++) 
 if (b[i]> max) max=b[i];  
printf("%d",max);
}