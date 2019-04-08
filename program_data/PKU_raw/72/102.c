void main()
{ int m,n;
scanf("%d%d",&m,&n);
int str[100][100];
int i,j,p,q,a,b;
a=n+2;b=m+2;
for(j=0;j<n+2;j++){str[0][j]=0;}
for(j=0;j<n+2;j++){str[a][j]=0;}
for(i=0;i<m+2;i++){str[i][0]=0;}
for(i=0;i<m+2;i++){str[i][b]=0;}
for(i=1;i<m+1;i++)
  for(j=1;j<n+1;j++)
  {  scanf("%d",&str[i][j]);
  }
 for(i=1;i<m+2;i++)
  for(j=1;j<n+2;j++)
  {if(str[i][j]>0)
  {if( (str[i][j]>=str[i][j-1])&&(str[i][j]>=str[i][j+1])&&(str[i][j]>=str[i-1][j])&&(str[i][j]>=str[i+1][j]))
  {p=i-1;q=j-1;
  printf("%d %d\n",p,q);}}}
}