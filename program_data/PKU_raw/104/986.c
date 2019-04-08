
void main()
{
int x,y,i,j;
scanf("%d %d",&x,&y);
for(;;)
{
if(x>y)
{
 if(x%2==0) x=x/2;
 else x=(x-1)/2;
}
else if(x<y)
  
{
 if(y%2==0) y=y/2;
 else y=(y-1)/2;

}
if(x==y) break;
}
printf("%d",x);
}