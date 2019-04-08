int main()                                  //?????
{
	int p=0;                                //??????p
	char k=0;
	for(int z = 1 ; z < 6 ; z++)            //?????????????z,q,s,l
	{
		for(int q = 1 ; q < 6 ; q++)
		{
			for(int s = 1 ; s < 6 ; s++)
			{
				for(int l = 1 ; l < 6 ; l++)
				{
					if(z+q==s+l && z+l>q+s && z+s<q && z!=q && z!=s && z!=l && q!=s && q!=l && s!=l)    //????
					{
						int a[4];                                //??????
						char b[4];                               //???????
						a[0]=z*10;                                  //???????
						a[1]=q*10;
						a[2]=s*10;
						a[3]=l*10;
						b[0]='z';                                //????????
						b[1]='q';
						b[2]='s';
						b[3]='l';
						for(int i = 0 ; i < 4 ; i++)             //???a??????
						{
							for(int j = i+1 ; j < 4 ; j++)       
							{
								if(a[i]<a[j])
								{
									p=a[j];
									a[j]=a[i];
									a[i]=p;
									
									k=b[j];
									b[j]=b[i];
									b[i]=k;
								}
								else 
									continue;
							}
						}
						cout<<b[0]<<" "<<a[0]<<'\n';             //????
						cout<<b[1]<<" "<<a[1]<<'\n';
						cout<<b[2]<<" "<<a[2]<<'\n';
						cout<<b[3]<<" "<<a[3]<<'\n';	
					}
					else 
						continue;
				}
			}
		}
	}
	return 0;                                                   

}

