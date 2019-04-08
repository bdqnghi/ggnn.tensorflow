
int main()
{
	int n,i,a[100],m,next;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{scanf("%d",&a[i]);}
     if(a[0]>a[1])
	 { m=a[0];
	 next=a[1];}
	 if(a[1]>a[0])
	 {m=a[1];
	 next=a[0];}
	 for(i=0;i<n;i++)
	 {if(a[i]>m)
	 m=a[i];}
	 for(i=0;i<n;i++)
	 {if(a[i]<m&&a[i]>next)
		 next=a[i];}
	printf("%d\n%d",m,next);
	return 0;
}