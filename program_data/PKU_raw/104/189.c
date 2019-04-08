void main()
{
	int x,y,i,j,max,min,a[100],b[100];
	int t=0;
	scanf("%d%d",&x,&y);
max=(x>y)?x:y;min=(x<y)?x:y;
a[0]=max;b[0]=min;
for (i=0;i<=20;i++)
{a[i+1]=a[i]/2;
b[i+1]=b[i]/2;}
for (i=0;i<=20;i++)
{if(t==1) break;
	for (j=0;j<=20;j++)
	{if (a[i]==b[j])
{printf("%d",a[i]);
	t=1;}}}}