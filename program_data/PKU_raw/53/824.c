int main()
{
int a,n[100],i,m[100];
scanf("%d",&a);

for(i=0;i<a;i++)
{
scanf("%d",&(n[i]));
m[i]=0;
}
for(int j=0;j<a;j++)
{
for(i=j+1;i<a;i++)
if(n[j]==n[i]) m[i]++;
}
printf("%d",n[0]);
for(i=1;i<a;i++)
if(m[i]==0) printf(",%d",n[i]);
return 0;
}
