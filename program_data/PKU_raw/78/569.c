int main()
{
	int z,q,s,l;
	for(z=1;z<=5;z++)
		for(q=1;q<=5;q++)
			for(s=1;s<=5;s++)
				for(l=1;l<=5;l++)
				{
					if((z+q==s+l)&&(z+l>s+q)&&(z+s<q)&&((z-q)*(z-s)*(z-l)*(q-s)*(q-l)*(s-l)!=0))
						{
							int weight[4]={z,q,s,l};
							char name[4]={'z','q','s','l'};
							int j=0,k=0;
							for(j=0;j<3;j++)
							{
								for(k=0;k<3-j;k++)
								{
									if(weight[k]<weight[k+1])
									{
										int s;s=weight[k];weight[k]=weight[k+1];weight[k+1]=s;
										char t;t=name[k];name[k]=name[k+1];name[k+1]=t;
									}
								}
							}
							for(k=0;k<4;k++)
								cout<<name[k]<<' '<<weight[k]<<'0'<<endl;
					    }
				}
				return 0;
}