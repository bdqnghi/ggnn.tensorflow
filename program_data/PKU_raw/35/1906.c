void main()
{
	int hang[8]={-1,-1,-1,-1,-1,-1,-1,-1},d[8]={0,0,0,0,0,0,0,0};
int ma[8][8];
int i,m,n,t,tem,c[8]={0,0,0,0,0,0,0,0};
for (i=0;i<8;i++)
	for (t=0;t<8;t++)
	ma[i][t]=-1312;



scanf("%d,%d",&m,&n);
for (i=0;i<m;i++)
{for (t=0;t<n;t++)
	scanf("%d",&ma[i][t]);
}

for (i=0;i<m;i++)
	{for (t=0;t<n;t++)
	{if  (ma[i][t]!=-1312)
		if (ma[i][t]>hang[i])
		{hang[i]=ma[i][t];
		d[i]=t;}
	}
}

//for (i=0;i<m;i++)
//printf("%d %d\n",hang[i],d[i]);

for (i=0;i<m;i++)
{tem=d[i];
	for (t=0;t<m;t++)
	{if (hang[i]<ma[t][tem])
		c[i]++;
	}

}
tem=0;
for (i=0;i<m;i++)
{	
//	printf("%d\n",c[i]);
	if (c[i]==m-1)
		printf("%d+%d\n",i,d[i]);
	else 
		tem++;

}
if (tem==m)
printf("No");
}