int main()
{
int n,k,a[1000],i,j,f;
scanf("%d %d",&n,&k);
f=0;
for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
    if(f==1) break;
    for(j=0;j<i;j++)
     {if(a[i]+a[j]==k) 
             {f=1;
              break;}
}
   }
if(f==1) printf("yes");
else printf("no");
}