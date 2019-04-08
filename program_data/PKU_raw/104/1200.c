

int main()
{
	int x,y,i,j,k=0;
	scanf ("%d %d",&x,&y);
	int a[10];
	int b[10];
	for (i=0;i<10;i++)
		{
			a[i]=x;
			x/=2;
		}
		for (i=0;i<10;i++)
		{
			b[i]=y;
			y/=2;
		}
		for (i=0;i<10;i++)
		{
			for (j=0;j<10;j++)
				if (a[i]==b[j])
				{printf ("%d",a[i]);
				 k=1;
				break;}
			if (k==1)
				break;

		}
	return 0;
}