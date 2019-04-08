int main()
{
    int n,i,x,y;
x=0;
y=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++){
        scanf("%d %d",&a[i],&b[i]);
        }
    for(i=0;i<n;i++){
        if(a[i]==0&&b[i]==1){
           x++;
      } if(a[i]==0&&b[i]==2){
           y++;
           }if(a[i]==1&&b[i]==2){
           x++;
}if(a[i]==1&&b[i]==0){
y++;
}if(a[i]==2&&b[i]==0)
{x++;
}if(a[i]==2&&b[i]==1){
y++;}
}
if(x>y){
printf("A");}
else if(x==y){
printf("Tie");}
else if(x<y){
printf("B");}
           return 0;
           }

