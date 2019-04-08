struct student { int id; char yw;char sx;int zf;int pm;};
int main()
{
struct student a[100000],b[2];
int n,i,j;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d%d%d",&a[i].id,&a[i].yw,&a[i].sx);
for(i=0;i<n;i++)
a[i].zf=a[i].yw+a[i].sx;
j=0;
for(i=0;i<n;i++)
if(a[i].zf>j)
{j=a[i].zf;b[0]=a[i];}
printf("%d %d\n",b[0].id,b[0].zf);
j=0;
for(i=0;i<n;i++)
if(a[i].zf>j&&a[i].id!=b[0].id)
{j=a[i].zf;b[1]=a[i];}
printf("%d %d\n",b[1].id,b[1].zf);
j=0;
for(i=0;i<n;i++)
if(a[i].zf>j&&a[i].id!=b[0].id&&a[i].id!=b[1].id)
{j=a[i].zf;b[2]=a[i];}
printf("%d %d\n",b[2].id,b[2].zf);
}