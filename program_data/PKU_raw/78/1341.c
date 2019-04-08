int main()
{
	int a[4],b[4],T,i,j,c[4];
	for(a[0]=1;a[0]<6;a[0]++)
		for(a[1]=1;a[1]<6;a[1]++)
			for(a[2]=1;a[2]<6;a[2]++)
				for(a[3]=1;a[3]<6;a[3]++)
					if( (a[0]+a[1]==a[2]+a[3])+(a[0]+a[3]>a[1]+a[2])+(a[0]+a[2]<a[1])==3&&a[0]!=a[1]&&a[0]!=a[2]&&a[0]!=a[3]&&a[1]!=a[2]&&a[1]!=a[3]&&a[2]!=a[3])
					{	for(i=0;i<4;i++)
							c[i]=a[i];

						for(i=0;i<4;i++)
						{
							b[i]=a[i];
							for(j=i;j<4;j++)
								if(b[i]<a[j])
								{
									T=a[j];
									a[j]=b[i];
									b[i]=T;
								}
						}
						goto finish;
					}
finish:
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
			if(b[i]==c[j])
			{
				if(j==0)
					cout<<"z "<<b[i]*10<<endl;
				else if(j==1)
					cout<<"q "<<b[i]*10<<endl;
				else if(j==2)
					cout<<"s "<<b[i]*10<<endl;
				else if(j==3)
					cout<<"l "<<b[i]*10<<endl;
				break;
			}
	}



					
					return 0;

}