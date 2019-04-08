const int base=250;
const int start=5;
int ans[300];
main()
{
void trans(char s[],int num[]);
void plus(int a[],int b[]);
int minus(int a[],int b[]);
void print(int num[]);
int judge(int a[],int b[]);

int a[300],b[300];
char sa[300],sb[300];
int n;
scanf("%d",&n);
for (int i=1;i<=n;i++)
{
getchar();
gets(sa);
gets(sb);
memset(a,0,300*sizeof(int));
memset(b,0,300*sizeof(int));
memset(ans,0,300*sizeof(int));
trans(sa,a);
trans(sb,b);
b[0]=0-b[0];
if (a[0]*b[0]>0)
{
plus(a,b);
ans[0]=a[0];
}
else 
{
int flag=judge(a,b);
if (flag==0) {printf("0\n"); continue;}
if (flag>0)
{minus(a,b);ans[0]=a[0];}
else {minus(b,a);ans[0]=b[0];}
}
print(ans);
}
getchar();getchar();getchar();getchar();
}

void trans(char s[],int num[])
{
int len=strlen(s),b=0;
num[0]=1;
if (s[0]=='-') {len--; b++; num[0]=-1;}
for (int t=0;t<len;t++)
{
num[base-len+t+1]=s[t+b]-'0';
}
num[1]=base-len+1;
}

int judge(int a[],int b[])
{
if (a[1]<b[1]) return 1;
else if (a[1]>b[1]) return -1;
else {
     int t,p=0,floor=a[1]<b[1]?a[1]:b[1];
     for (t=floor;t<=base&&p==0;t++)
     p=a[t]-b[t];
     if (p==0) return 0;
     else return p>0?1:-1;
     }
}

void check(int num[])
{
int p;
for (p=start;num[p]==0&&p<=base;p++);
num[1]=p;
}

void plus(int a[],int b[])
{
int floor=a[1]<b[1]?a[1]:b[1];
for (int t=base;t>=floor;t--)
{
int k=ans[t]+a[t]+b[t];
ans[t]=k%10;
ans[t-1]+=k/10;
}
if (ans[floor-1]!=0) ans[1]=floor-1;
else ans[1]=floor;
}

void minus(int a[],int b[])
{
int floor=a[1]<b[1]?a[1]:b[1];
for (int t=base;t>=floor;t--)
{
int k=ans[t]+a[t]-b[t];
if (k<0) {ans[t-1]-=1; k+=10;}
ans[t]=k%10;
ans[t-1]+=k/10;
}
check(ans);
}

void print(int num[])
{
if (num[0]<0) printf("-");
for (int t=num[1];t<=base;t++)
printf("%d",num[t]);
printf("\n");
}
