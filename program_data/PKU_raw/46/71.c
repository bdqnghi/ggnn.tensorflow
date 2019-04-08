int main()
{
int i,j,k=0,b=1,h=1,l=1,x,y,a[100][100];
scanf("%d%d",&x,&y);
for(i=1;i<=x;i++)
{for(j=1;j<=y;j++)
{scanf("%d",&a[i][j]);}}
while(k<x*y-1)
{switch(b)
 {case 1:
  {for(i=h;i<=y-h;i++)
   {printf("%d\n",a[h][i]);}
   b=2;
   k+=y-2*h+1;break;}
  case 2:
  {for(i=l;i<=x-l;i++)
   {printf("%d\n",a[i][y-l+1]);}
   b=3;
   k+=x-2*l+1;break;}
  case 3:
  {for(i=y-h+1;i>=h+1;i--)
   {printf("%d\n",a[x-h+1][i]);}
   b=4;
   k+=y-2*h+1;
   h++;break;}
  case 4:
  {for(i=x-l+1;i>=l+1;i--)
   {printf("%d\n",a[i][l]);}
   b=1;
   k+=x-2*l+1;
   l++;break;}}}
if(x==y)
{printf("%d",a[h][l]);}
else if(b==2){printf("%d",a[h][y-h+1]);}
else if(b==3){printf("%d",a[x-l+1][y-l+1]);}
else if(b==4){printf("%d",a[x-h+1][h]);}
else if(b==1){printf("%d",a[l][l]);}
return 0;
}
