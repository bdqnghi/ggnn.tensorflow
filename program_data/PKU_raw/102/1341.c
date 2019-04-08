int main()
{
	struct{
		char gender[6];
		float h;
	}a[50],b[50],c[50],t;
	int n,i,j=0,k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%f",&a[i].gender,&a[i].h);
	}
	for(i=0;i<n;i++)
	{
		if(strcmp(a[i].gender,"male")==0)
		{
			b[j]=a[i];
			j++;
		}
		else
		{
			c[k]=a[i];
			k++;
		}
	}
	int nan,nv;
	nan=j;
	nv=k;
	for(i=0;i<nan;i++)
	{
		for(j=nan-1;j>i;j--)
		{
			if(b[j].h<b[j-1].h)
			{
				t=b[j];
				b[j]=b[j-1];
				b[j-1]=t;
			}
		}
	}
	for(i=0;i<nv;i++)
	{
		for(j=nv-1;j>i;j--)
		{
			if(c[j].h>c[j-1].h)
			{
				t=c[j];
				c[j]=c[j-1];
				c[j-1]=t;
			}
		}
	}
	printf("%1.2f",b[0].h);
	for(i=1;i<nan;i++)printf(" %1.2f",b[i].h);
	for(i=0;i<nv;i++)printf(" %1.2f",c[i].h);
}