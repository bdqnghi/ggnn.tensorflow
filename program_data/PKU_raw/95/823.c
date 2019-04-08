void main()
{
int i,k=0;
int a[80],b[80];

a[0]=getchar();
if ((a[0]>=65)&&(a[0]<=90)) a[0]=a[0]+32;

for(i=1;a[i-1]!='\n';i++)
{a[i]=getchar();
	if ((a[i]>=65)&&(a[i]<=90)) a[i]=a[i]+32;
}

b[0]=getchar();
if ((b[0]>=65)&&(b[0]<=90)) b[0]=b[0]+32;
for(i=1;b[i-1]!='\n';i++)
{b[i]=getchar();
	if ((b[i]>=65)&&(b[i]<=90)) b[i]=b[i]+32;
}

for(i=0;((a[i-1]!='\n')&&(b[i-1]!='\n'));i++)
{if (a[i]>b[i]) {printf(">");continue;}
else if (a[i]<b[i]) {printf("<");continue;}
else if (a[i]==b[i]) k=k+1;
}

if (k==i) printf("=");

}