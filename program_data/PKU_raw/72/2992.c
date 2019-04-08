int h[20][20];
int sort(int l,int r)
{if(l>0)
{if(h[l-1][r]>h[l][r])
return 0;}
if(l<19)
{if(h[l+1][r]>h[l][r])
return 0;}
if(r>0)
{if(h[l][r-1]>h[l][r])
return 0;}
if(r<19)
{if(h[l][r+1]>h[l][r])
return 0;}
return 1;}
int main()
{int m,n,i,j;
scanf("%d %d",&m,&n);
for(i=0;i<m;i++)
	{for(j=0;j<n;j++)
{scanf("%d",&h[i][j]);}}
for(i=0;i<m;i++)
	{for(j=0;j<n;j++)
{if(sort(i,j)==1)
printf("%d %d\n",i,j);}}
}