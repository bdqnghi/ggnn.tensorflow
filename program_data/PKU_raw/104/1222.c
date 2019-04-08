int main(int argc, char* argv[])
{
	int x,y,a[11],b[11],i,j,m,n;
	i=0;
	j=0;
	int flag;
	flag=1;
	scanf("%d%d",&x,&y);
	do {a[i]=x;x=x/2;i=i+1;}
	while (x>=1);
		do {b[j]=y;y=y/2;j=j+1;}
		while (y>=1);
			for (m=0;m<11&&flag;m++)
			{
				for (n=0;n<11&&flag;n++)
				{
				if (a[m]==b[n]) 
				{
				printf("%d",a[m]);
				flag=0;
				}
				}
			}
	return 0;
}