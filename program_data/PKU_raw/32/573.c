void main()
{
	int i,j,k,x,y,d,n;
	char a[101],b[101];
	scanf("%d",&n);


	for(j=1;j<=n;j++)
	{
	scanf("%s",a);
			scanf("%s",b);
			
			x=strlen(a);
			y=strlen(b);
printf("\n");
			d=x-y;
			k=0;

			for(i=x-1;i>=d;i--)
			if(a[i]<b[i-d])
				{
					a[i]=a[i]-b[i-d]+58;
					a[i-1]=a[i-1]-1;
					k++;
				}
			else 
			{
				a[i]=a[i]-b[i-d]+48;
				k++;
			}
			for(i=x-1;i>0;i--)
				if(a[i]<48)
				{
					a[i]=a[i]+10;
					a[i-1]=a[i-1]-1;
				}
if(a[0]==48)
k=1;
else 
k=0;
for(i=k;i<x;i++)
	printf("%c",a[i]);
printf("\n");

}
}