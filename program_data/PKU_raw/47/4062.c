int main()
{int n=0;
    scanf("%d",&n);
    int i=0,as[100];
    while(i<n)
	{scanf("%d",&as[i]);
	i++;
	}
int zx[100];
i=0;
while(i<n)
{
	zx[i]=as[i];
	i++;
}
i=n-1;
while(i>0)
{
	printf("%d ",zx[i]);
		i--;
}
printf("%d",zx[0]);
}