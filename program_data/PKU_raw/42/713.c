int main()
{int a[100000],n,m,j,i,*p;
scanf("%d",&n);
p=a;
for (i=0;i<n;i++)
scanf("%d",p++);
scanf("%d",&m);
p=a;

for(i=0;i<n;i++)
{if (*(p+i)==m)
{for(j=i;j<n;j++)
*(p+j)=*(p+j+1);
i=i-1;n=n-1; }}
p=a;

for(i=0;i<n-1;i++,p++)
printf("%d ",*p);
printf("%d",*p);
      } 
      

      
