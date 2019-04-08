void main()
{
   int a[15][17],i,num,j,k,l,h;
   scanf("%d",&a[0][0]);
   for(j=0;j<=15&&a[j][0]!=-1;j++)
   {for(i=1;i<=15&&a[j][i-1]!=0;i++)
 scanf("%d",&a[j][i]);
 scanf("%d",&a[j+1][0]); }
   for(l=0;l<=14&&a[l][0]!=-1;l++)
   {num=0;
   for(k=0;k<=15&&a[l][k]!=0;k++)
   {for(h=0;h<=15&&a[l][h]!=0;h++)
   {if(a[l][k]==2*a[l][h]) num++;}}
   printf("%d\n",num);}
}