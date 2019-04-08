struct dui
{int nannv;
int weizhi;
}a[100];
void shuchu(struct dui a[100],int n)
{
	int i=1,j,h=1;
	do
	{
		if(a[i].nannv ==0)
		{
			printf("%d %d\n",a[i-1].weizhi-1 ,a[i].weizhi-1 );
			if(i<n)
			{
				for(j=i;j<=n;j++)
				{
					a[j-1]=a[j+1];
					a[j]=a[j+2];
					j++;
				}
				n=n-2;
			}
			else
				n=0;
			i=1;
		}
		else
			i++;
	}while(n!=0);
}
int main()
{
	int i,n,j=0,k=0;
	char s[100],nan;
	scanf("%s",s);
	n=strlen(s);
	nan=s[0];
	for(i=1;i<=n;i++)
	{
		if(s[i-1]==nan)
		{
			a[i].nannv =1;
			a[i].weizhi =i;
		}
		else
		{
			a[i].nannv =0;
			a[i].weizhi =i;
		}
	}
	shuchu(a,n);
}