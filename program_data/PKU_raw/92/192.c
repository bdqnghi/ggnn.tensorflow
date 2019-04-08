void sort(int a[],int n)
{
	int t,i;
	t=a[n-1];
	for(i=n-1;i>0;i--)
		a[i]=a[i-1];
    a[0]=t;
}
void main()
{
    int a[1010],b[1010],k1,k2,max,max1,max2,j,t,n=1,i;
	scanf("%d",&n);
    for(;n!=0;)
	{max=-10000;
		
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
				for(i=0;i<n;i++)
		scanf("%d",&b[i]);
        for(i=0;i<n;i++)
		{ k1=i;k2=i;max1=a[i];max2=b[i];          
		           for(j=i+1;j<n;j++)
					{
					if(a[j]>max1)  {max1=a[j];k1=j;}
					if(b[j]>max2)  {max2=b[j];k2=j;}
				   }
					t=a[i];a[i]=a[k1];a[k1]=t;
					t=b[i];b[i]=b[k2];b[k2]=t;
		}
		for(i=0;i<n;i++)
		{   		     t=0;
		for(j=0;j<n;j++){if(a[j]>b[j])  t=t+200;
		                  if(a[j]<b[j]) t=t-200;}
		if(t>max)  max=t;sort(a,n);

		}
		printf("%d\n",max);
		scanf("%d",&n);
		}
}
