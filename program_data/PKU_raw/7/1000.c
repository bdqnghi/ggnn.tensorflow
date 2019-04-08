main()
{
int i,j=0,count=0,h;
char a[260],b[260],c[260];
scanf("%s",&a);
scanf("%s",&b);
scanf("%s",&c);

for(i=0;i<=strlen(a)-1;i++)
{
    if(a[i]==b[j])
    {
    count+=1;
    j+=1;
    }
    else
    {j=0;count=0;}
    if(count==strlen(b))
    {h=i;break;}
}
if(count==strlen(b))
{
for(i=0;i<=h-strlen(b);i++)
{
printf("%c",a[i]);
}
for(i=0;i<=strlen(c)-1;i++)
{
printf("%c",c[i]);
}
for(i=h+1;i<=strlen(a)-1;i++)
{
printf("%c",a[i]);
}
}
else
{printf("%s",a);}
}
