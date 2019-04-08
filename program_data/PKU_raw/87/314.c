int main()
{
int a[100][6],b,g;
for(b=0;b<100;b++){
scanf("%d %d %d %d %d %d\n",&a[b][0],&a[b][1],&a[b][2],&a[b][3],&a[b][4],&a[b][5]);
if(a[b][0]==0&&a[b][1]==0&&a[b][2]==0){break;}
g=3600-a[b][1]*60-a[b][2]+(12-(a[b][0]+1)+a[b][3])*3600+a[b][4]*60+a[b][5];
printf("%d\n",g);}
return 0;}
 
