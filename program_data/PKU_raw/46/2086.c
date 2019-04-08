int main(){
	
int m,n,sz[100][100],x,y,z,a,b,w=0,i;
	
scanf("%d %d",&m,&n);
	
for(int p=0;p<m;p++)
	
{
	
	
for(int q=0;q<n;q++)
	
	
{
	
	
	
scanf("%d",&sz[p][q]);
	
	
}
	
}
	
if(m>n)
	
	
i=n;
	
else
	
	
i=m;
	
for(x=0;x<i/2;x++)
	
{
	
	
for(y=0+x;y<n-1-x;y++)
	
	
{
	
	
	
printf("%d\n",sz[x][y]);
	
	
}
	
	
for(z=0+x;z<m-1-x;z++)
	
	
{
	
	
	
printf("%d\n",sz[z][y]);
	
	
}
	
	
for(a=n-1-x;a>0+x;a--){
	
	
	
printf("%d\n",sz[z][a]);
	
	
}
	
	
for(b=m-1-x;b>0+x;b--)
	
	
{
	
	
	
printf("%d\n",sz[b][a]);
	
	
}
	
}
	
if(m%2==1&&n>=m)
	
{
	
	
w=m/2;
	
	
for(y=w;y<=n-1-w;y++)
	
	
	
printf("%d\n",sz[w][y]);
	
}
	
else if(n%2==1&&m>=n)
	
{
	
	
w=n/2;
	
	
for(x=w;x<=m-1-w;x++)
	
	
	
printf("%d\n",sz[x][w]);

	
}
	
return 0;
}

