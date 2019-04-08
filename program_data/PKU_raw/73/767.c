struct dian
{
    int x;
    int y;
    int zhi;       
};
int main()
{
   int a[5][5];       
   int c,e,i,j,count=0;
   struct dian b[5];
   struct dian andian;
   for(i=0;i<5;i++)
   for(j=0;j<5;j++)
   scanf("%d",&a[i][j]);
   for(i=0;i<5;i++)            //  i ?? ?? 
   { 
                   int d=0;
                   andian.zhi=a[i][0];
                   andian.x=1;
                   andian.y=i+1;
                   for(j=1;j<5;j++)  {if(andian.zhi<a[i][j])  {andian.zhi=a[i][j];andian.x=1+j;}} //????????? 
                   c=andian.zhi;
                   for(j=0;j<5;j++) if(a[j][andian.x-1]<c)  d++;
                   if(d==0){printf("%d %d %d\n",andian.y,andian.x,andian.zhi);count++;}
   }
   if(count==0)  printf("not found");
getchar();getchar();getchar();
}
