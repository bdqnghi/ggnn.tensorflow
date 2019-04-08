
int main()
{
    int i,a[6],k,j;
	scanf("%d",&i);
	for (k=1;k<=10;k++)
	{
		a[k]=(int)((int)(i/pow(10,k-1))-(int)(i/pow(10,k))*10);
		if (a[k]==0) break;
	}

	for (j=1;j<k;j++)
		printf("%d",a[j]);

	return 0;
}