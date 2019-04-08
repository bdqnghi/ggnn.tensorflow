int main()
{
int n,i;
float a,b,c,d,x,y,e,f;
scanf("%d",&n);
scanf("%d %d",&a,&b);
x=b/a;
for (i=1;i<n;i++){
scanf("%d %d",&c,&d);
y=d/c;
e=y-x;
f=x-y;
if (e>0.05) printf("better\n");
else if (f>0.05) printf("worse\n");
else if (e<=0.05&&f<=0.05) printf("same\n");
}
return 0;
}
