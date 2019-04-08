int main()
{
int decide(int x,int y);
int i,j,m,n,b;
int a[6][5];
for(i=0;i<5;i++)
for(j=0;j<5;j++)
scanf("%d",&a[i][j]);
scanf("%d %d",&m,&n);
b=decide(m,n);

if(b==0)
printf("error");
else
{
	for(j=0;j<5;j++)
	{
	a[5][j]=a[n][j];
	a[n][j]=a[m][j];
	a[m][j]=a[5][j];
	}
for(i=0;i<5;i++){
for(j=0;j<5;j++)
	{
	if(j!=4)  printf("%d ",a[i][j]);
    if(j==4)  printf("%d",a[i][j]);
	}
  printf("\n");
}
}
return 0;
}


int decide(int x,int y)
{
	int b=0;
if(x>=0)
if(x<4)
if(y>=0)
if(y<4)
{ 
b=1;
}
return b;
}