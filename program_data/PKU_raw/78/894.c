int main()
{
	int weight[4],k=0,i,t,w[4];
	char name[4]={'z','q','s','l'};char p;
	  for(weight[0]=1;weight[0]<=5;weight[0]++)
		for(weight[1]=1;weight[1]<=5;weight[1]++)
			if(weight[0]!=weight[1])
				for(weight[2]=1;weight[2]<=5;weight[2]++)
					if(weight[2]!=weight[0]&&weight[2]!=weight[1])
						for(weight[3]=1;weight[3]<=5;weight[3]++)
							if(weight[3]!=weight[0]&&weight[3]!=weight[1]&&weight[3]!=weight[2])
								if((weight[0]+weight[1])==(weight[2]+weight[3])&&
									(weight[0]+weight[3])>(weight[1]+weight[2])&&
									(weight[0]+weight[2])<weight[1])
									for(i=0;i<4;i++)
										w[i]=weight[i];
	for(k=1;k<=3;k++)
			for(i=0;i<=3-k;i++)
				if(w[i]<w[i+1]){
					t=w[i];
					w[i]=w[i+1];
					w[i+1]=t;
					p=name[i];
					name[i]=name[i+1];
					name[i+1]=p;}
	for(i=0;i<4;i++)
		cout<<name[i]<<' '<<w[i]*10<<endl;
	return 0;
}