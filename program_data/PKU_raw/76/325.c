int main(){
 int n;
int a[5000][2];
int i,j;
int r;
int t0,t1;
scanf("%d",&n);
for(i=0;i<n;i++)
{ for(j=0;j<2;j++)
{ 
scanf("%d ",&a[i][j]);
}
}
for(i=0;i<n-1;i++)
{ for(j=i+1;j<n;j++)
{
if(a[i][0]>a[j][0])
{
t0=a[i][0];
t1=a[i][1];
a[i][0]=a[j][0];
a[i][1]=a[j][1];
a[j][0]=t0;
a[j][1]=t1;
}
}
}
r=a[0][1];
for(i=0;i<n;i++)
{
if(a[i][1]>r){r=a[i][1];
}
if(r<a[i+1][0])
{printf("no");
}
if(r<a[i+1][0])
{break;
}
}
if(r>=a[i+1][0])
{printf("%d %d",a[0][0],r);
}
return 0;
}