int main()
{
int a,c,i,j;
int k=0;
scanf("%d%d",&a,&c);
int b[100][100];
for(i=0;i<100;i++){
for(j=0;j<100;j++)
{b[i][j]=0;
}}
for(i=1;i<=a;i++){
for(j=1;j<=c;j++)
{scanf("%d",&b[i][j]);
}}
for(i=1;i<=a;i++){
for(j=1;j<=c;j++){
if(b[i][j]>=(b[i][j-1])&&
b[i][j]>=(b[i-1][j])&&
b[i][j]>=(b[i][j+1])&&
b[i][j]>=(b[i+1][j]))
printf("%d %d\n",i-1,j-1);
}}
return 0;
} 
