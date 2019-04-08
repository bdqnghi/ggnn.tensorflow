int main()
{
int n,a,i,begin,end,flag=0,x1,x2,y1,y2; 
scanf("%d",&n); 
for (i=1;i<=n*n;i++){
scanf("%d",&a); 
if (a==0)
{
if (flag==0) begin=i; 
flag=1;
end=i;
}
}
x1=(begin+n-1)/n; 
y1=begin%n; 
x2=(end+n-1)/n;
y2=end-n*(x2-1); 
 
printf("%d\n",(x2-x1-1)*(y2-y1-1));
return 0;
}
