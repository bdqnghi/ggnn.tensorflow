int main()
{
	int z,q,s,l,a[4];char b[4]={'z','q','s','l'};
	for(z=10;z<=50;z=z+10)
	{
		for(q=10;q<=50;q=q+10)
		{
			if(q!=z)
				for(s=10;s<=50;s=s+10)
				{
					if((s!=q)&&(s!=z))
						for(l=10;l<=50;l=l+10)
						{
							if((l!=s)&&(l!=q)&&(l!=z))
								
								if(((z+q)==(s+l))&&((z+l)>(q+s))&&((z+s)<q))
								{
									a[0]=z;
									a[1]=q;
									a[2]=s;
									a[3]=l;
									for(int k=0;k<4;k++)
									{
										for(int j=0;j<3-k;j++)
										{
											int q;
											char p;
											if(a[j]>a[j+1])
											{
												q=a[j];
												a[j]=a[j+1];
												a[j+1]=q;
												p=b[j];
												b[j]=b[j+1];
												b[j+1]=p;
											}
										}
									}
									for(int w=0;w<4;w++)
									{
										cout<<b[3-w]<<" "<<a[3-w]<<endl;
									}
								}
						}
				}
		}
	}
    return 0;
}