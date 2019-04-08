int main()
{
   int a[100][6];
   int i,j;
   int h,total,m,s;
   for(i=0;i<100;i++)
   {
       for(j=0;j<6;j++)
       {
           scanf("%d",&a[i][j]);
        }
     if(a[i][0]==0&&a[i][1]==0&&a[i][2]==0&&a[i][3]==0&&a[i][4]==0&&a[i][5]==0)
        {
           m=i;
           break;
 
        }
    }
    for(i=0;i<m;i++)
    {
      h=0;
      s=0;
      total=0;
      h=a[i][3]+12-a[i][0];
      s=a[i][4]*60+a[i][5]-a[i][1]*60-a[i][2];
      total=h*3600+s;
      printf("%d\n",total);
    }
      return 0;
 }
