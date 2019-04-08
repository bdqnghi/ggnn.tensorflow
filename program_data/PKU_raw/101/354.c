int main()
{
	int a[3];
	int i,j,k,r1,r2,r3,l,q,w,e;
	for(q=1;q<3;q++);
	{
		for(w=1;w<3;w++)
		{
			for(e=1;e<3;e++)
			{
				a[0]=q;
				a[1]=w;
				a[2]=e;
				i=((a[1]>a[0])+(a[2]==a[0]));
				j=((a[0]>a[1])+(a[0]>a[2]));
				k=((a[2]>a[1])+(a[1]>a[0]));
				r1=((i<=j&&a[0]>=a[1])||(i>=j&&a[0]<=a[1]));
				r2=((i<=k&&a[0]>=a[2])||(i>=k&&a[0]<=a[2]));
				r3=((j<=k&&a[1]>=a[2])||(j>=k&&a[1]<=a[2]));
				if(r1+r2+r3==3)
				{
										for(l=1;l<=3;l++)
					{
						if(a[0]==l)
							printf("A");
						if(a[1]==l)
							printf("B");
						if(a[2]==l)
							printf("C");
					}
					return 0;
				}
			}
		}
	}
	return 0;
}