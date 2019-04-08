int main()
{
	int a[3],b[3],i=0,k=0;
	char rank[3];
	rank[0]='A';
	rank[1]='B';
	rank[2]='C';
	for(a[0]=0;a[0]<3;a[0]++)
	{
		for(a[1]=0;a[1]<3;a[1]++)
		{
			for(a[2]=0;a[2]<3;a[2]++)
			{
				b[0]=(a[1]>a[0])+(a[2]==a[0]);
				b[1]=(a[0]>a[1])+(a[0]>a[2]);
				b[2]=(a[2]>a[1])+(a[1]>a[0]);
				if(a[0]+b[0]==2&&a[1]+b[1]==2&&a[2]+b[2]==2)
				{
					for(k=0;k<=2;k++)
					{
						for(i=0;i<3;i++)
						{
							if(a[i]==k)
								cout<<rank[i];
						}
					}
					cout<<endl;
				}
			}
		}
	}
	cin.get();cin.get();
	return 0;
}