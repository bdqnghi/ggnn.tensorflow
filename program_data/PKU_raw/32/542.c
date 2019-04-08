
int main()
{
int a[100],b[100],temp;
int n=0;
n=getchar()-48;
while ((temp=getchar())!=10) n=n*10+temp-48;
int i=0,j;
int ca=0,cb=0;
for(int k=1;k<=n;k++)
{
        ca=0;cb=0;
while ((temp=getchar())!=10) {a[ca]=temp-48;ca++;}
ca--;
while ((temp=getchar())!=10) {b[cb]=temp-48;cb++;}
cb--;
for(i=cb;i>=0;i--) {a[ca-cb+i]-=b[i];}
for(i=ca;i>=1;i--) if(a[i]<0) {a[i]+=10;a[i-1]-=1;}
i=0;
while(a[i]==0) i++;
for(j=i;j<=ca;j++) cout<<a[j]; cout<<"\n";
if(k!=n) temp=getchar();
}


}
