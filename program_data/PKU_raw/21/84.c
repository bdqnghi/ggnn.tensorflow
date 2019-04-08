void main()
{
int i,n,a[305],sum,z;
int aver,x=0,y;
scanf("%d",&n);
for(i=0,sum=0;i<n;i++)
 {scanf("%d",&a[i]);sum+=a[i];}
aver=(sum+n-2)/n;
for(i=0;i<n;i++)
 {y=a[i]-aver;
 if(y<0) y=0-y;
 if(x<y) x=y;}
for(i=0;;i++){
  y=a[i]-aver;
  if(y==x||y==0-x) {printf("%d",a[i]),z=i;break;}
  else continue;}
for(i=z+1;i<n;i++){
 y=a[i]-aver;
 if(y==x||y==0-x) printf(",%d",a[i]);}
}

