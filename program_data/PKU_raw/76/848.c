int main()
{
int i,j,q=0,n;
int sz[50000][2];
int sz1[50000];
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<=1;j++)
{ 
scanf("%d",&sz[i][j]);
}
}
int max=sz[0][1],min=sz[0][0];

for(i=0;i<n;i++)
{
if(sz[i][1]>max)
{
max=sz[i][1];
}

}

for(i=0;i<n;i++)
{
if(sz[i][0]<min)
{
min=sz[i][0];

}
}
for(i=min*2;i<max*2;i++)
sz1[i]=1;
for(i=0;i<n;i++)
{
for(j=(sz[i][0]*2);j<=(sz[i][1]*2);j++)
{sz1[j]=0;
}
}
for(i=min*2;i<=max*2;i++)
{
if(sz1[i]==1){
printf("no");
q=1;
break;}
}
if(q==0)
printf("%d %d",min,max);
return 0;
}
