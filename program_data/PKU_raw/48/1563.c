int main()
{const int d=10;
	int a[d][d],b[d][d];
int i,j,k,m,n,fx,fy;
scanf("%d%d",&m,&n);
memset(a,0,sizeof(a));
a[5][5]=m;
for(i=0;i<n;i++)
{
	memset(b,0,sizeof(b));
	for(k=1;k<d-1;k++)
	{ for(j=1;j<d-1;j++)
    { b[k][j]+=a[k][j];
	for(fx=-1;fx<=1;fx++)
	{for(fy=-1;fy<=1;fy++)
	  b[k+fx][j+fy]+=a[k][j];
	}
	}
	}
	memcpy(a,b,sizeof(a));}
	for(i=1;i<d;i++)
	{ for(j=1;j<d-1;j++)
	printf("%d ",a[i][j]);
	printf("%d\n",a[i][d-1]);
	}
	return 0;
}

