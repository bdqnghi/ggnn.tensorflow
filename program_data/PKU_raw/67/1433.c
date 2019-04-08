int main()
{
int n;
scanf("%d",&n);
int i,a,b;
scanf("%d%d",&a,&b);
double c=(double)b/a; 
for (i=1; i<n; i++)
{
scanf("%d%d",&a,&b);
double d=(double)b/a; 
double t=d-c;
if (t>0.05) printf("better\n");
else if (t<-0.05) printf("worse\n");
else printf("same\n");
}
return 0;
}

