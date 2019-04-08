void main()
{
	int c,b,i,j,x[8][8]={0},a,k,t=0,z=0,y=0;
scanf("%d,%d",&c,&b);
for(i=0;i<c;i++)
   for(j=0;j<b;j++)
   scanf("%d",&x[i][j]);
for(i=0;i<c;i++)
{   a=x[i][0];
   for(j=0;j<b;j++)
      if(a<x[i][j]) 
         {a=x[i][j];t=j;}
   for(k=0;k<c;k++)
      if(a<x[k][t]) z++;
   if(z==c-1) {y=1;printf("%d+%d",i,t);break;}
}
if(y==0) printf("No");
}