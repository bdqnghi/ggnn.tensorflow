int main()
{
	int i,j,a[3],CC1=(a[1]>a[0])+(a[2]==a[0]),CC2=(a[0]>a[1])+(a[0]>a[2]),CC3=(a[2]>a[1])+(a[2]>a[0]),b[3]={CC1,CC2,CC3},temp;
	char c[3]={'A','B','C'},t;
	for (a[0]=0;a[0]<3;a[0]++)
	{
		for (a[1]=0;a[1]<3;a[1]++)
			for (a[2]=0;a[2]<3;a[2]++)
			{
				if ((b[0]+a[0]==2)&&(b[1]+a[1]==2)&&(b[2]+a[2]==2))
				{
					for (i=0;i<3;i++)
					{
						for (j=0;j<3-i-1;j++)
							if (a[j]<a[j+1])
							{
								temp=a[j];
									t=c[j];
									a[j]=a[j+1];
									c[j]=c[j+1];
									a[j+1]=temp;
									c[j+1]=t;
							}
					}
					for (i=2;i>=0;i--) cout<<c[i];
				}
			}
	}
	return 0;
}