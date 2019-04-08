int main(){
int a,b;
scanf("%d%d",&a,&b);
while(a!=b)
{
if(a>b)a/=2;
else b/=2;
}
printf("%d",a);
}