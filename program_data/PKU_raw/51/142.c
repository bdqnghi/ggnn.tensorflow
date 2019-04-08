

void main()
{
char in[500];
char gram[500][6];
int cr[500];

int i,n,t,len,q;
int max=0;
for (i=0;i<500;i++)
{in[i]=0;cr[i]=0;}


scanf("%d",&n);
scanf("%s",in);

len=strlen(in);
q=len+1-n;

for (i=0;i<500;i++)
for (t=0;t<6;t++)
	gram[i][t]=0;

for (i=0;i<q;i++)
	for (t=0;t<n;t++)
	{gram[i][t]=in[i+t];
	}


for (i=0;i<q;i++)
for (t=0;t<q;t++)
	if (strcmp(gram[i],gram[t])==0)
	cr[i]++;


for (i=0;i<q;i++)
max=M(max,cr[i]);
if (max==1)
printf("NO");
else
{
printf("%d\n",max);

for (i=q-1;i>=0;i--)
for (t=i-1;t>=0;t--)
	if (strcmp(gram[i],gram[t])==0)
	cr[i]=0;
for (i=0;i<q;i++)
	if (cr[i]==max)
	printf("%s\n",gram[i]);

}


}