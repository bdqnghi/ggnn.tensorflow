int main()
{
	int weight[4],i,j,k;
	char name[4][2]={"z","q","s","l"},t[2];
	for (weight[0]=1;weight[0]<5;weight[0]++)
	{
		for (weight[1]=1;weight[1]<5;weight[1]++)
		{
			for (weight[2]=1;weight[2]<5;weight[2]++)
			{
				for (weight[3]=1;weight[3]<5;weight[3]++)
				{
					if (weight[0]+weight[1]==weight[2]+weight[3] && weight[0]+weight[3]>weight[2]+weight[1] && weight[0]+weight[2]<weight[1])
						break;
				}
				if (weight[0]+weight[1]==weight[2]+weight[3] && weight[0]+weight[3]>weight[2]+weight[1] && weight[0]+weight[2]<weight[1])
						break;
			}
			if (weight[0]+weight[1]==weight[2]+weight[3] && weight[0]+weight[3]>weight[2]+weight[1] && weight[0]+weight[2]<weight[1])
						break;
		}
		if (weight[0]+weight[1]==weight[2]+weight[3] && weight[0]+weight[3]>weight[2]+weight[1] && weight[0]+weight[2]<weight[1])
						break;
	}
	for (i=0;i<4;i++)
	{
		for(j=1;j<4-i;j++)
		{
			if(weight[j-1]<weight[j])
			{
				k=weight[j-1];weight[j-1]=weight[j];weight[j]=k;
				strcpy(t,name[j-1]);
				strcpy(name[j-1],name[j]);
				strcpy(name[j],t);
			}
		}
	}
	for (i=0;i<4;i++)
		cout <<name[i]<<" "<<10*weight[i]<<endl;
	return 0;	

}

