int main()
{
int a[5][5];
int b[5][5]={0};
for(int i=0;i<5;i++)
for(int j=0;j<5;j++)
scanf("%d",&a[i][j]);
int num,max;
for(int j=0;j<5;j++)
{
max=-65535;
for(int i=0;i<5;i++)
if(a[j][i]>max)
{
num=i;
max=a[j][i];
}
b[j][num]=1;
}
int min;
int zhishi=0;
for(int i=0;i<5;i++)
{
min=65535;
for(int j=0;j<5;j++)
if(a[j][i]<min)
{num=j;min=a[j][i];}
if(b[num][i]==1)
{printf("%d %d %d",num+1,i+1,a[num][i]);zhishi=1;}
}
if(!zhishi)
printf("not found");
}