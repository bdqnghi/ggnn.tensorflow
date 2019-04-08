int main()
{
	int weight[4]={1,1,1,1};//????/10
	char name[4]={'z','q','s','l'};
	/*????*/
	for(weight[0]=1;weight[0]<=5;++weight[0]){
		for(weight[1]=1;weight[1]<=5;++weight[1]){
			for(weight[2]=1;weight[2]<=5;++weight[2]){
				for(weight[3]=1;weight[3]<=5;++weight[3]){
					if(weight[0]==weight[1]||weight[0]==weight[2]||weight[0]==weight[3]||weight[1]==weight[2]||weight[1]==weight[3]||weight[2]==weight[3])
						continue;
					else if(weight[0]+weight[1]==weight[2]+weight[3]&&weight[0]+weight[3]>weight[2]+weight[1]&&weight[0]+weight[2]<weight[1])
						break;
				}
				if(weight[0]+weight[1]==weight[2]+weight[3]&&weight[0]+weight[3]>weight[2]+weight[1]&&weight[0]+weight[2]<weight[1])
						break;
			}
			if(weight[0]+weight[1]==weight[2]+weight[3]&&weight[0]+weight[3]>weight[2]+weight[1]&&weight[0]+weight[2]<weight[1])
						break;
		}
		if(weight[0]+weight[1]==weight[2]+weight[3]&&weight[0]+weight[3]>weight[2]+weight[1]&&weight[0]+weight[2]<weight[1])
						break;
	}
	/*??*/
	int max=0,t;//?????????
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)//???????
		{
			if(max<weight[j])
			{
				max=weight[j];
				t=j;
			}
		}
		cout<<name[t]<<' '<<weight[t]*10<<endl;
		weight[t]=0;//??????
		max=0;//???max
	}
	return 0;
}
