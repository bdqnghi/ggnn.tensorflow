int check(int a[5][5],int h,int l)
{
    int i,j;
    for (i=0;i<5;i++)//???
      if (a[h][i]>a[h][l]) return 0;//?????number
    for (i=0;i<5;i++)//scan hang
      if (a[i][l]<a[h][l]) return 0;
    return 1;
}
int main()
{
   int a[5][5],que=30302,n=0,posh,posl;
   int i,j;
   for (i=0;i<5;i++)
     for (j=0;j<5;j++)
       scanf("%d",&a[i][j]);
   for (i=0;i<5;i++)
     for (j=0;j<5;j++)
       if (check(a,i,j))
         {
             que=a[i][j];
             posh=i+1;
             posl=j+1;
         }

    if (que!=30302)
      printf("%d %d %d",posh,posl,que);
    else printf("not found");
  return 0;

}
