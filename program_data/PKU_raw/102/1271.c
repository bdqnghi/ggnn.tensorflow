int main()
{
int n,i,x,y,j;
char sex[40][9];
float h[40],f[40],m[40]; 
float t;
   
scanf("%d\n",&n);

for(i=0;i<n;i++)
scanf("%s %f\n",sex[i],&h[i]);

for(i=0,x=0,y=0;i<n;i++)
{if (strcmp(sex[i],"male")==0) {m[x]=h[i];x++;}
 else {f[y]=h[i];y++;}}
 
for(i=0;i<x-1;i++)
 for(j=i+1;j<x;j++)
 {if (m[i]>=m[j]){t=m[i];m[i]=m[j];m[j]=t;}}
 
for(i=0;i<y-1;i++)
 for(j=i+1;j<y;j++)
 {if (f[i]<=f[j]){t=f[i];f[i]=f[j];f[j]=t;}} 

printf("%.2f",m[0]);
if(x>2)
{for(i=1;i<x;i++)printf(" %.2f",m[i]);}

for(i=0;i<y;i++)
printf(" %.2f",f[i]);
}
