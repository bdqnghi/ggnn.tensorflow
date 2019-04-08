void main()
{ int d[8][8],a=0,b=0,i=0,j=0,max[8],min[8],hang[8],lie[8],o=0;
scanf("%d,%d",&a,&b);
for(i=0;i<a;i++)
for(j=0;j<b;j++)
scanf("%d",&d[i][j]);
for(i=0;i<a;i++)
{max[i]=d[i][0];lie[i]=0;
for(j=1;j<b;j++)
if(d[i][j]>max[i]) {max[i]=d[i][j];lie[i]=j;}
}
for(j=0;j<b;j++)
{min[j]=d[0][j];hang[j]=0;
for(i=1;i<a;i++)
if(d[i][j]<min[j]) {min[j]=d[i][j];hang[j]=i;}
}
for(i=0;i<a;i++)
{if(i==hang[lie[i]])
{printf("%d+%d\n",i,lie[i]);
o++;}}
if(o==0) printf("No\n");
}

