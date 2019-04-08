struct In {char name[21];int g1;int g2;char y1;char y2;int g3;int g;} ;
int main()
{int i,n,b,d=0,m=0;
scanf("%d",&n);
struct In a[101];
for(i=0;i<n;i++)
{scanf("%s %d %d %c %c %d",a[i].name,&a[i].g1,&a[i].g2,&a[i].y1,&a[i].y2,&a[i].g3);if(a[i].g3>0) b=1;else b=0;
a[i].g=(a[i].g1/81)*b*8000+(a[i].g1/86)*(a[i].g2/81)*4000+(a[i].g1/91)*2000+(a[i].g1/86)*(a[i].y2/81)*1000+(a[i].g2/81)*(a[i].y1/81)*850;}
for(i=0;i<n;i++)
{d=d+a[i].g;
if(a[i].g>m) m=a[i].g;}
for(i=0;i<n;i++)
if(a[i].g==m){printf("%s\n%d\n%d\n",a[i].name,a[i].g,d); break;}
return 0;}