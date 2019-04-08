char f(int a[5])
{
  int i,j;char c='t';
  if(a[0]==0||a[0]==1) {if(a[4]!=0) c='f';}
  else {if(a[4]==0) c='f';}
  if(a[1]==0||a[1]==1) {if(a[1]!=1) c='f';}
  else {if(a[1]==1) c='f';}
  if(a[2]==0||a[2]==1) {if(a[0]!=4) c='f';}
  else {if(a[0]==4) c='f';}
  if(a[3]==0||a[3]==1) {if(a[2]==0) c='f';}
  else {if(a[2]!=0) c='f';}
  if(a[4]==0||a[4]==1) {if(a[3]!=0) c='f';}
  else {if(a[3]==0) c='f';}
  if(a[4]==1||a[4]==2) c='f';
  return c;
}
main()
{
  int a[5]={0};char s[120]={'\0'};int i,t=0;
  int x1,x2,x3,x4,x5;
  for(x1=0;x1<5;x1++)
  {
    for(x2=0;x2<5;x2++)
    {
       if(x2!=x1) 
        for(x3=0;x3<5;x3++)
        {
          if(x3!=x1&&x3!=x2) 
           for(x4=0;x4<5;x4++)
           {
              if(x4!=x1&&x4!=x2&&x4!=x3) 
               for(x5=0;x5<5;x5++)
               {
                  if(x5!=x1&&x5!=x2&&x5!=x3&&x5!=x4)
                  {
                     a[0]=x1;a[1]=x2;a[2]=x3;a[3]=x4;a[4]=x5;
                     s[t]=f(a);
                     if(s[t]=='t') {for(int j=0;j<5;j++) {if(j!=4)printf("%d ",a[j]+1); else printf("%d\n",a[j]+1);}}
                     t++;
                  }
               }
           }
        }
    }
  }
  getchar();
  getchar();
  getchar();
}
