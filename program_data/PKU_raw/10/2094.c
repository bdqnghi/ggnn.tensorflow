int h[25],n; 
int main() 
{  
int max(int a,int b);
int k,i;
scanf("%d",&n);
for(i=0;i<n;i++) scanf("%d",&h[i]);
k=max(50000,0);
printf("%d",k);
return 0;
} 
int max(int hmax,int b)
{
int x,y,z;
while(h[b]>hmax) b=b+1;
if(b==n)return 0;
x=max(hmax,b+1);
hmax=h[b];
y=1+max(hmax,b+1);
z=x>y?x:y;
return z;
}
