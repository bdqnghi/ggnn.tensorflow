int main()
{
int t,i1,i3,i2,i4,len,m;
int a[100000];
char str[100000];
scanf ("%d",&t);
for (i1=1;i1<=t;i1++)
{
m=0;
scanf("%s",str);
len=strlen(str);
memset(a,0,sizeof(a));
for (i2=1;i2<=len-1;i2++)
{
for (i3=0;i3<=i2-1;i3++)
{
if (str[i2]==str[i3])
{
a[i3]=a[i3]+1;
a[i2]=a[i2]+1;
break;
}
}
}
for (i4=0;i4<=len-1;i4++)
{
if (a[i4]==0)
{
printf ("%c\n",str[i4]);
m=1;
break;
}
}
if (m==0)
printf ("no\n");
}
}