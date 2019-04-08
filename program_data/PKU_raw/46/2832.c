int a[100][100]={0};
int main()
{void p(char c,int b1,int b2,int b3,int b4);
 int i,j,k,l,n,m;
 scanf("%d%d",&m,&n);
 for(i=0;i<m;i++)
  for(j=0;j<n;j++)
   scanf("%d",&a[i][j]);
 p('y',0,0,n-1,m-1);
}
void p(char c,int b1,int b2,int b3,int b4)
{
 int i,j,k,l;
 if(c=='y')
 {for(i=b1;i<=b3;i++)
   printf("%d\n",a[b2][i]);
  if(b2!=b4) 
   p('x',b1,b2+1,b3,b4);}
 if(c=='x')
 {for(i=b2;i<=b4;i++)
   printf("%d\n",a[i][b3]);
  if(b1!=b3) 
   p('z',b1,b2,b3-1,b4);}
 if(c=='z')
 {for(i=b3;i>=b1;i--)
   printf("%d\n",a[b4][i]);
  if(b2!=b4) 
   p('s',b1,b2,b3,b4-1);}
 if(c=='s')
 {for(i=b4;i>=b2;i--)
   printf("%d\n",a[i][b1]);
  if(b1!=b3) 
   p('y',b1+1,b2,b3,b4);}
}

