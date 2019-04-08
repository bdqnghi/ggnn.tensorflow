int main()
{
	int n,i,j;
	float sza[10],szb[10],szc[10],szd[10];
	float x=0,y=0,z;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%f",&(sza[i]));
	}
	for(i=0;i<n;i++)
	{
		scanf("%f",&(szb[i]));
	}
for(i=0;i<n;i++)
{
	if(szb[i]<=100&&szb[i]>=90)
	{
szc[i]=4.0;
	}
	else if(szb[i]<=89&&szb[i]>=85)
	{
		szc[i]=3.7;
	}
else if(szb[i]<=84&&szb[i]>=82)
	{
		szc[i]=3.3;
	}
else if(szb[i]<=81&&szb[i]>=78)
	{
		szc[i]=3.0;
	}
else if(szb[i]<=77&&szb[i]>=75)
	{
		szc[i]=2.7;
	}
else if(szb[i]<=74&&szb[i]>=72)
	{
		szc[i]=2.3;
	}
else if(szb[i]<=71&&szb[i]>=68)
	{
		szc[i]=2.0;
	}
else if(szb[i]<=67&&szb[i]>=64)
	{
		szc[i]=1.5;
	}
else if(szb[i]<=63&&szb[i]>=61)
	{
		szc[i]=1.0;
	}
else if(szb[i]<=60)
	{
		szc[i]=0;
	}
}
for(i=0;i<n;i++)
{
	szd[i]=sza[i]*szc[i];
}
for(i=0;i<n;i++)
{
	x+=szd[i];
	y+=sza[i];
}
z=x/y;
printf("%.2f",z);
return 0;
}

