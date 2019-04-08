int main()
{
int a[18],m,i=0,j=0,k=0,l=0,n=0;

for(n=0;;n++)
{
scanf("%d",&a[0]);
if(a[0]==-1)
break;
else
{
for(i=1;;i++)
{
scanf("%d",&a[i]);
if(a[i]==0)
{m=i-1;break;}
}//??a[i]
i=0;
 
 for(i=0;i<=m;i++)
 {
  for(j=0;j<=m;j++)
   {
     if(a[j]==(2*a[i]))
     k++;
    }
  l=l+k;k=0;//printf("%d\n",l);
 }//????a[i],???a[i]??

printf("%d\n",l);
l=0;
}

}
return 0;
}