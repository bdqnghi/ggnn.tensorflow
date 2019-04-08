void main()
{
int a[5];
int i;
for(i=0;i<=4;i++)
a[i]='0';
scanf("%c%c%c%c%c",&a[4],&a[3],&a[2],&a[1],&a[0]);
for(i=0;i<=4;i++)
if((a[i]>='1')&&(a[i]<='9'))
printf("%c",a[i]);
}