void main()
{
	int a,b=1,i,n,m,j,q[5000],t=0,w=0,p,k[5000],temp,c=0,o[100];
	
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
if(i%2==0)b=0;	
for(j=3;j<=sqrt(i);j=j+2)
	{
		if(i%j==0){b=0;break;}
	}
	if(b){q[t]=i;
	t++;}
	b=1;
	}
	for(i=0;i<t;i++)
    {
		k[i]=0;
                temp=q[i];
		while(temp!=0)
    {
	k[i]=k[i]*10+temp%10;
	temp=temp/10;
	
	}
	}
	for(i=0;i<t;i++)
		
if(k[i]==q[i]&&k[i]!=0)
{
o[c]=q[i];
c++;
}
if(c==0) printf("no");
else
{
for(i=0;i<c;i++)
i==0?printf("%d",o[i]):printf(",%d",o[i]);
}
} 
