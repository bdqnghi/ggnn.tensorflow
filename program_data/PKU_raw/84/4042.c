
int main()
{
	int b,max=0,lmax=0,a[100000];
	scanf("%d",&b);
	a[0]=0;
	for(int i=0;i<b;i++)
	{ scanf("%d",&a[i]); 
	   if (a[i]>=max)
	   {max=a[i];}
	}

	for(int k=0;k<b;k++)
	{  if((a[k]>=lmax)&&(a[k]<max))
	{lmax=a[k];
	}
	}
	printf("%d\n",max);
	printf("%d\n",lmax);
	return 0;
}


