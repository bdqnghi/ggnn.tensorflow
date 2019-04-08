int n;
void paixu (int* p)
{
    int k;
    for (int i=n-1;i>=0;i--)
    {
        for (int j=0;j<i;j++)
        {
            if (*(p+j)<*(p+j+1))
            {
                k=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=k;
            }
        }
    }
}
int main ()
{
    int a[1000],b[1000];
	int m;
    for (;;)
    {
        scanf("%d",&n);
        if (n==0) break;
		m=0;
        for (int i=0;i<n;i++) scanf("%d",&a[i]);
        for (int i=0;i<n;i++) scanf("%d",&b[i]);
        paixu (a);
        paixu (b);
        for (int i1=0,i2=0,j1=n-1,j2=n-1;;)
		{
			for (;a[i1]>b[i2];)
			{
				m++;
				i1++;
				i2++;
				if (i1>j1) break;
			}
			if (i1>j1) break;
			for (;a[j1]>b[j2];)
			{
				m++;
				j1--;
				j2--;
				if (i1>j1) break;
			}
			if (i1>j1) break;
			if (a[j1]<b[i2])
			{
				m--;
			}
			j1--;
			i2++;
			if (i1>j1) break;
		}
        printf("%d\n",200*m);
    }
    return 0;
}
