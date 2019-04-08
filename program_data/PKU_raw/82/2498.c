int main()
{
int n,i,j,k,t;
int a[100][2]={0};
int b[101]={0};
b[0]=0;
k=0;
scanf("%d\n",&n);
for(i=0;i<n;i++)
{
  for(j=0;j<2;j++)
  scanf("%d",&a[i][j]);
}
for(i=0;i<n;i++)
{
	k=i+1;
	if(90<=a[i][0]&&a[i][0]<=140&&60<=a[i][1]&&a[i][1]<=90)
	{
    b[k]=b[k-1]+1;
	}
	else
	{
	b[k]=0;
	}
}
for(i=0;i<n;i++)
{
for(j=0;j<n-i;i++)
 if(b[i]>b[i+1])
 {
 t=b[i];
 b[i]=b[i+1];
 b[i+1]=t;
 }
}
printf("%d",b[n]);
return 0;
}