int main()
{
	int z,q,s,l,weight[4],i,j,temp1;
	char name[4],temp2;
	for ( z=10;z<=50;z+=10 )
	{
		for ( q=10;q<=50;q+=10 )
		{
			if ( q == z )
			{
				continue;
			}
			for ( s=10;s<=50;s+=10 )
			{
				if ( ( s == q ) || ( s == z ) )
				{
					continue; 
				}
				l=z+q-s;
				if ( ( l<=50 ) && ( l != z ) && ( l != q ) && ( l != s ) && ( z+l>s+q ) && ( z+s<q ) )
				{
					name[0]='z';
					weight[0]=z;
					name[1]='q';
					weight[1]=q;
					name[2]='s';
					weight[2]=s;
					name[3]='l';
					weight[3]=l;
					for ( i=3;i>0;i-- )
					{
						for ( j=0;j<i;j++ )
						{
							if ( weight[i]>weight[j] )
							{
								temp1=weight[i];
								weight[i]=weight[j];
								weight[j]=temp1;
								temp2=name[i];
								name[i]=name[j];
								name[j]=temp2;
							}
						}
					}
					for ( i=0;i<4;i++ )
					{
						cout<<name[i]<<" "<<weight[i]<<endl;
					}
				}
			}
		}
	}
	return 0;
}
