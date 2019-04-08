int main()
{
	int weight[4],i,j,p;
	char name[4]={'z','q','s','l'};
	for(weight[0]=1;weight[0]<=5;weight[0]++)
		for(weight[1]=1;weight[1]<=5;weight[1]++)
			for(weight[2]=1;weight[2]<=5;weight[2]++)
			{
				weight[3]=weight[1]+weight[0]-weight[2];
				if((weight[0]+weight[3])>(weight[1]+weight[2])&&(weight[0]+weight[2])<weight[1])
				{
					for(i=1;i<4;i++)
						for(j=0;j<4-i;j++)
							if(weight[j]<weight[j+1])
							{
								p=weight[j];
								weight[j]=weight[j+1];
								weight[j+1]=p;
								p=name[j];
								name[j]=name[j+1];
								name[j+1]=p;
							}
					for(i=0;i<4;i++)
					{
						weight[i]*=10;
						cout<<name[i]<<" "<<weight[i]<<endl;
					}
				}

			}
	return 0;
}