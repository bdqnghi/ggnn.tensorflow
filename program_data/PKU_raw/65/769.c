int main()
{
int n,i=0,j=0,k;
int a[200],b[200];
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d%d",&a[i],&b[i]);
}
for(k=0,i=0,j=0;k<n;k++)
{
if(a[k]==0&&b[k]==1)
i++;
else if(a[k]==1&&b[k]==2)
i++;
else if(a[k]==2&&b[k]==0)
i++;
else if(a[k]==0&&b[k]==2)
j++;
else if(a[k]==1&&b[k]==0)
j++;
else if(a[k]==2&&b[k]==1)
j++;
else
continue;
}
if(i>j)
printf("A");
if(i<j)
printf("B");
if(i==j)
printf("Tie");
return 0;
}