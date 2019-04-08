
int main()
{
	void hanshu();
	hanshu();

	return 0;
}

void hanshu()
{
	int m,n;
	int i,j,k,l,p,q;
	int a[100];
	int b[100];
	int c[200];
	int temp;
	int z,d,s;

	scanf("%d%d",&m,&n);

	for(i=0;i<m;i++)
		scanf("%d",&a[i]);

	for(j=0;j<n;j++)
		scanf("%d",&b[j]);

	for(k=1;k<n;k++)
	{
		for(l=0;l<m-k;l++)
		{
			if(a[l]>a[l+1])
			{
				temp=a[l];
				a[l]=a[l+1];
				a[l+1]=temp;
			}
		}
	}

	for(p=1;p<n;p++)
	{
		for(q=0;q<n-p;q++)
		{
			if(b[q]>b[q+1])
			{
				temp=b[q];
				b[q]=b[q+1];
				b[q+1]=temp;
			}
		}
	}

	for(d=0;d<m;d++)
		c[d]=a[d];

	for(s=m;s<m+n;s++)
		c[s]=b[s-m];

	printf("%d",c[0]);

	for(z=1;z<n+m;z++)
		printf(" %d",c[z]);

}


