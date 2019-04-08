void main()
{
int n,i,j,m=0,t=0,q=0;
long int a[100000];
long int k;
scanf("%d\n",&n);
for(i=0;i<n;i++)
scanf("%ld",&a[i]);
scanf("%ld",&k);

for(i=0;i<n;i++)
{if (a[i]!=k) {printf("%ld",a[i]);q=i;break;}}


for(j=q+1;j<n;j++)
	{
	if (a[j]==k) 
	{for(t=j;t<n-1;t++)
		{a[t]=a[t+1];
		}
	a[n-1]=' ';
	j=j-1;}
	}

for(i=q+1;i<n;i++)
if (a[i]!=' ') printf(" %ld",a[i]);
else break;
}