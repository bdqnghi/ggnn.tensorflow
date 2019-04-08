
void main()
{
  int a[8][8];
  int h,l,i,j,k,temp,count,hh,ll;
  scanf("%d,%d",&h,&l);
  for(i=0;i<=h-1;i++)
    {
       for(j=0;j<=l-1;j++) scanf("%d",&a[i][j]);
    }
  for(i=0;i<=h-1;i++)  
    {
      temp=a[i][0];count=0;
      for(k=1;k<=l-1;k++)
      { temp=temp>a[i][k]?temp:a[i][k];}
      for(j=0;j<=l-1;j++) {if(temp==a[i][j]) {ll=j; break;}}
      for(k=0;k<=h-1;k++)
      { if(a[i][ll]>a[k][ll]) break;
        else count++;
      }
      if(count==h) {hh=i;break;}
    }
  if(count!=h) printf("No");
  else printf("%d+%d",hh,ll);
}
