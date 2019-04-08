int main()
{char a=44,b,c;
int x[301],y,z,i=1,j;
while(a==44)
{scanf("%d%c",&x[i],&a);if(a!=44)y=i;i++;}
for(i=1;i<=y-1;i++)
{if(x[i]>x[i+1]) {z=x[i];x[i]=x[i+1];x[i+1]=z;}
if(x[i]==x[i+1])x[i]=0;}
for(i=1;i<=y-2;i++)
{if(x[i]>x[i+1]) {z=x[i];x[i]=x[i+1];x[i+1]=z;}}

if(x[y]==x[y-1]||y==1||x[y-1]==0)printf("No");
else printf("%d",x[y-1]);
}