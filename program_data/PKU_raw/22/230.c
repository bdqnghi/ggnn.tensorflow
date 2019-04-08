void main()
{
	int i=0,j,n,a[300],m,r;
	char c;
	do
	{
		scanf("%d",&a[i]);
		c=getchar();
		i++;
	}while(c!='\n');
	n=i;
	m=a[0];
	for(i=0;i<n;i++) m=a[i]>m?a[i]:m;
	r=1;
	for(i=0;i<n;i++) if(a[i]!=m) {r=0;break;}
	if(r==1) printf("No\n");
	else
	{		
		for(i=0;i<n;i++)
		{	
			r=1;
			for(j=0;j<n;j++)
			{
				if(a[j]==m) continue;
				if((m-a[i])<=(m-a[j])&&a[i]!=m) r=1;
				else {r=0;break;}
			}
			if(r==1) {printf("%d\n",a[i]);break;}
		}
	}
}