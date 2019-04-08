//??????????5???????????????????????5??????????E????????2???3?? 
//A???????E??????? 
//B????????????????? 
//C???????A???????? 
//D???????C????????? 
//E???????D?????????? 
//????????????????????????????????????A?B?C?D?E??????

const int A=0;
const int B=1;
const int C=2;
const int D=3;
const int E=4;
int main()
{
	int array[5]={0};
	int used[6]={0};
	for(int k1=1;k1<=5;k1++)
	{
		for(int k2=1;k2<=5;k2++)
		{
			for(int k3=1;k3<=5;k3++)
			{
				for(int k4=1;k4<=5;k4++)
				{
					for(int k5=1;k5<=5;k5++)
					{
						array[A]=k1;
						array[B]=k2;
						array[C]=k3;
						array[D]=k4;
						array[E]=k5;
						if(array[E]==2||array[E]==3)
							continue;
						int finish=0;
						for(int i=A;i<=E;i++)
						{
							for(int j=i+1;j<=E;j++)
							{
								if(array[i]==array[j])
								{
									finish=1;
									break;
								}
								
							}
							if(finish)
								break;
						}
						if(finish)
							continue;

						int flag[5];
						flag[A]=(array[E]==1);
		                flag[B]=(array[B]==2);
		                flag[C]=(array[A]==5);
		                flag[D]=(array[C]!=1);
		                flag[E]=(array[D]==1);
						int rank1,rank2,rank3,rank4,rank5;
						for(int k=A;k<=E;k++)
							if(array[k]==1)
								rank1=k;
						if(flag[rank1]==0)
							continue;
						
						for(int k=A;k<=E;k++)
							if(array[k]==2)
								rank2=k;
						if(flag[rank2]==0)
							continue;
						
						for(int k=A;k<=E;k++)
							if(array[k]==3)
								rank3=k;
						if(flag[rank3]==1)
							continue;
						
						for(int k=A;k<=E;k++)
							if(array[k]==4)
								rank4=k;
						if(flag[rank4]==1)
							continue;
						
						for(int k=A;k<=E;k++)
							if(array[k]==5)
								rank5=k;
						if(flag[rank5]==1)
							continue;
						for(int k=0;k!=4;k++)
							cout<<array[k]<<" ";
						cout<<array[4];
					}
				}
			}
		}
	}
	cout<<endl;
	return 0;
}
