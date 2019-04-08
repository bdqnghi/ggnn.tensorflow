
int main()
{
char a[1001];
int n,i;
n=1;
scanf("%s",a);

if((a[0]>96)&&(a[0]<123))
a[0]=a[0]-32;
if(1==strlen(a))
{
printf("(%c,%d)",a[0],n);
}
for(i=1;i<strlen(a);i++)
{
if((a[i]>96)&&(a[i]<123))
a[i]=a[i]-32;
if(a[i-1]==a[i])
{
n=n+1;
}
else
{
printf("(%c,%d)",a[i-1],n);
n=1;

}
if(i==(strlen(a)-1))
printf("(%c,%d)",a[i],n);
}

return 0;
}