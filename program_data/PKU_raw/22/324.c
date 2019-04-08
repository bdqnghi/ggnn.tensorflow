int main()
{char a[100000];
long int max,submax,l,t,k,j,i,b[10000];
	gets(a);
	l=strlen(a);j=0;t=0;
	for(i=1;i<=500;i++)
	b[i]=0;
	for(i=0;i<=l-1;i++)
	{
		
		
		if(a[i]==',')
	{t=t+1;
		for(k=j;k<=i-1;k++)
		{if(a[k]=='0')b[t]=b[t]*10+0;
		if(a[k]=='1')b[t]=b[t]*10+1;
		if(a[k]=='2')b[t]=b[t]*10+2;
		if(a[k]=='3')b[t]=b[t]*10+3;
		if(a[k]=='4')b[t]=b[t]*10+4;
		if(a[k]=='5')b[t]=b[t]*10+5;
		if(a[k]=='6')b[t]=b[t]*10+6;
		if(a[k]=='7')b[t]=b[t]*10+7;
		if(a[k]=='8')b[t]=b[t]*10+8;
		if(a[k]=='9')b[t]=b[t]*10+9;
		}
	j=i+1;}
	
	}
	t=t+1;
for(k=j;k<=l-1;k++)
		{if(a[k]=='0')b[t]=b[t]*10+0;
		if(a[k]=='1')b[t]=b[t]*10+1;
		if(a[k]=='2')b[t]=b[t]*10+2;
		if(a[k]=='3')b[t]=b[t]*10+3;
		if(a[k]=='4')b[t]=b[t]*10+4;
		if(a[k]=='5')b[t]=b[t]*10+5;
		if(a[k]=='6')b[t]=b[t]*10+6;
		if(a[k]=='7')b[t]=b[t]*10+7;
		if(a[k]=='8')b[t]=b[t]*10+8;
		if(a[k]=='9')b[t]=b[t]*10+9;
		}
max=0;
for(i=1;i<=t;i++)
{
	if(b[i]>max)max=b[i];
}
submax=-1;

for(i=1;i<=t;i++)
if (b[i]!=max&&b[i]>submax)submax=b[i];
if(submax!=-1)printf("%d",submax);else printf("No");
}


