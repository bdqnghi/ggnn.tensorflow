
struct number
{
    unsigned int shuzi;
	float pianli;
};

int main()
{
int i,j,n;
float average,sum=0;
scanf("%d",&n);

struct number num[301],t;

for(i=0;i<n;i++)
	scanf("%d",&num[i].shuzi);
for(i=0;i<n;i++)
sum=sum+num[i].shuzi;
average=sum/(float)n;
for(i=0;i<n;i++)
num[i].pianli=fabs(num[i].shuzi-average);
for(j=0;j<n;j++)
for(i=0;i<n-j-1;i++)
{if(num[i].pianli>num[i+1].pianli)
{
	t=num[i];
	num[i]=num[i+1];
	num[i+1]=t;
}
else
{
	if(num[i].pianli==num[i+1].pianli)
{ if(num[i].shuzi>num[i+1].shuzi)
	  { 	t=num[i];
	num[i]=num[i+1];
	num[i+1]=t;}
}
}
}

for(i=0;i<n-1;i++)
{
	
	if(num[i].pianli==num[n-1].pianli)
	{printf("%d,", num[i].shuzi);}

}
	printf("%d", num[n-1].shuzi);

	
return 1;
	}