
int main()

{

int n,i,j,t;

char q=',';

    scanf("%d",&n);

int s[500],z[500]={100};

for(i=0;i<n;i++)
{
scanf("%d ",&s[i]);
if(s[i]%2!=0)
{
z[i]=s[i];
}
}

for(i=0;i<n;i++)
{
for(j=n-1;j>0;j--)
{
if(z[j]<z[j-1])
{
t=z[j];

z[j]=z[j-1];

z[j-1]=t;
}
}
}

int m=0;

for(i=0;i<n;i++)
{
if(z[i]==0)continue;

if(z[i]!=0&&m==0)
{
printf("%d",z[i]);

m=1;
}

         else printf("%c%d",q,z[i]);
}

return 0;

}

