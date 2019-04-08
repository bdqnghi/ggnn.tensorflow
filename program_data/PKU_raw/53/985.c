void main()
{
int a[300],b[300],i,j=0,n;
int eva(int x,int y,int b[]);
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d ",&a[i]);
for(i=0;i<n;i++)
{
if(eva(a[i],j,b))    {b[j]=a[i];j=j+1;}
}
for(i=0;i<j-1;i++)
printf("%d,",b[i]);
printf("%d",b[j-1]);
}

int eva(int x,int y,int b[])
{int i;
for(i=0;i<y;i++)
if (x==b[i]) {return(0);break;}
 return(1);
}