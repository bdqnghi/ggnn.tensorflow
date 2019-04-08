


int cmp(const void* e1,const void* e2)
{
	return *(int*)e2-*(int*)e1;
}

int main()
{
	int n;
	int King[1000];
	int Tian[1000];

	//??????
	int Win;
	//????
	int Lose;
	
	int begin;
	int end;

	int i,j;
	while(1)
	{
		Win=0;
		Lose=0;
		cin>>n;
		if(n==0)
			break;
		
		for(i=0;i<n;i++)
			cin>>Tian[i];
		for(i=0;i<n;i++)
			cin>>King[i];
		

		qsort(King,n,sizeof(int),cmp);
		qsort(Tian,n,sizeof(int),cmp);
		//??
		begin=0;
		end=n-1;
		//??
		i=0;j=n-1;
		while(i<=j)
		{
			//win
			if(King[i]<Tian[begin])
			{
				Win++;
				begin++;
				i++;
			}
			
			//lose
			else if(King[i]>Tian[begin])
			{
				Lose++;
				i++;
				end--;
			}

			//tie
			else if(King[i]==Tian[begin])
			{
				while(King[j]<Tian[end] && j>i && end>begin )
				{
					Win++;
					end--;
					j--;
				}
				if(King[j]>Tian[end])
				{
					Lose++;
					i++;
					end--;
				}
				else if(King[j]==Tian[end])
				{
					if(King[i]>Tian[end])
					{
						Lose++;
						end--;
						i++;
					}
					else if(King[i]==Tian[end])
					{
						end--;
						i++;
					}
				}
			}
		}
		
		cout<<(Win-Lose)*200<<endl;
	}

	return 0;
}

