void main()
{
char st1[100],st2[100];
int i,n,m;
int n1[128],n2[128];

for (i=0;i<100;i++)
{st1[i]=0;
st2[i]=0;}
for (i=0;i<128;i++)
{n1[i]=0;
n2[i]=0;}

scanf("%s %s",st1,st2);

for (i=0;i<100;i++)
{n=st1[i];
m=st2[i];

n1[n]++;n2[m]++;
}
n=0;
for (i=0;i<128;i++)
{if (n1[i]==n2[i])
	n=n+1;
}
if (n==128)
printf("YES\n");
else
printf("NO\n");


}