int main()
{
int n,i,j;
scanf("%d",&n);
int num[n+n];
for(i=0;i<(n+n);i=i+2)
scanf("%d %d",&(num[i]),&(num[i+1]));
for(j=0;j<(n+n);j=j+2)
{
for(i=0;i<(n+n);i=i+2)
{
if(((num[j])<=(num[i+1]))&&((num[j+1])>=(num[i])))
{num[j]=num[i]<num[j]?num[i]:num[j];
num[i]=num[i]<num[j]?num[i]:num[j];
num[j+1]=num[i+1]>num[j+1]?num[i+1]:num[j+1];
num[i+1]=num[i+1]>num[j+1]?num[i+1]:num[j+1];}
}
}
for(j=0;j<(n+n);j=j+2)
{
for(i=0;i<(n+n);i=i+2)
{
if(((num[j])!=(num[i]))||((num[j+1])!=(num[i+1])))
{printf("no");
return 0;}
}
}
printf("%d %d",num[0],num[1]);
return 0;
}