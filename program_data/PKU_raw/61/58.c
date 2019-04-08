main()
{
int a,b,c,i,j;
int d[1000];
int e[1000];
scanf("%d",&a);
for(i=0;i<a;i++)
scanf("%d",&d[i]);
for(i=0;i<a;i++)
{e[0]=1;
e[1]=1;
if(d[i]<=2)
printf("1");
else
{for(j=2;j<d[i];j++)
e[j]=e[j-1]+e[j-2];
printf("%d\n",e[j-1]);
}
}
}