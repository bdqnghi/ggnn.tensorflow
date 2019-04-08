

int main()
{
 
 int sz[8][8],i,n,k,l,max[8],min[8],p=0,q[8],ma[1],sum=0;
scanf("%d,%d",&n,&k);
for(i=0;i<n;i++)
{for(l=0;l<k;l++)
{scanf("%d",&(sz[i][l]));}
}


for(i=0;i<n;i++)
{ma[0]=0;
for(l=0;l<k;l++)
{
if(sz[i][l]>ma[0])
{ma[0]=sz[i][l];
ma[1]=l;
 
}
}
max[i]=ma[1];
}
for(i=0;i<n;i++)
{q[i]=1;}
for(p=0;p<n;p++)
{
for(i=0;i<n;i++)
{min[0]=sz[p][max[p]];
if(sz[i][max[p]]<min[0])
{
q[p]=0;
break;}
}
if(q[p]==1)
{printf("%d+%d",p,max[p]);
break;}
}

for(i=0;i<n;i++)
{sum+=q[i];}
if(sum==0)
{printf("No");}

  return 0;
}
