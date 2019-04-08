int main()
{
int m,n,i,j,d;
scanf("%d,%d",&m,&n);
int a[7][7];
for(i=0;i<m;i++){
for(j=0;j<n;j++){
scanf("%d",&a[i][j]);
}
}
for(i=0;i<m;i++){
int y=0;
int max=a[i][0];
for(j=0;j<n;j++){
if(max<a[i][j]){
max=a[i][j];
y=j;}}
int x=0;
int min=a[0][y];
for(int k=0;k<m;k++){
if(min>a[k][y]){
min=a[k][y];
x=k;}}
if(i==x)
{printf("%d+%d",i,y);
break;
}
else{
d=1;
continue;
}}
if(d==1)
printf("No");
return 0;
}
