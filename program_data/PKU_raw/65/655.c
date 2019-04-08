int main(){
int a[400];
int i,j,n,m,s,p,q;
scanf("%d",&n);
m=2*n;
p=n/2;
for(i=0;i<m;i++)
{
scanf("%d",&(a[i]));
}
s=0;
q=0;
for(j=0;j<m;j=j+2)
{
   if(a[j]==1&&a[j+1]==2)
   s=s+1;
   else if(a[j]==0&&a[j+1]==1)
   s=s+1;
   else if(a[j]==2&&a[j+1]==0)
   s=s+1;
   else if(a[j]==2&&a[j+1]==1)
   q=q+1;
   else if(a[j]==1&&a[j+1]==0)
   q=q+1;
   else if(a[j]==0&&a[j+1]==2)
   q=q+1;
}
 if (s==q)
 printf("Tie");
 else if(s>q)
 printf("A");
 else if(s<q)
 printf("B");
return 0;
}