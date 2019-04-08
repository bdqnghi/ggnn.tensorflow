int main()
{
	int a[7]={0},b[7]={0};//define and null
	int i=0,sum=0;//??sum????1,2?????????
	for(a[1]=1;a[1]<=5;a[1]++)
	{
	for(a[2]=1;a[2]<=5;a[2]++)
	{
		if(a[1]==a[2])continue;
		for(a[3]=1;a[3]<=5;a[3]++)
		{
			if(a[3]==a[2]||a[3]==a[1])continue;
			for(a[4]=1;a[4]<=5;a[4]++)
			{
				if(a[4]==a[3]||a[4]==a[2]||a[4]==a[1])continue;//put aside this condition
				for(a[5]=1;a[5]<=5;a[5]++)
				{
					sum=0;
					if(a[5]==a[4]||a[5]==a[3]||a[5]==a[2]||a[5]==a[1])continue;//??????????
					b[1]=(a[5]==1);
					b[2]=(a[2]==2);
					b[3]=(a[1]==5);
					b[4]=(a[3]!=1);
					b[5]=(a[4]==1);

					for(i=1;i<=5;i++)
					{
						if(b[i]==1&&(a[i]==1||a[i]==2)){sum++;}//to see that?????????,and use sum to show if 1&&2 all tell the truth
					}
					if((b[1]+b[2]+b[3]+b[4]+b[5]==2)&&a[5]!=2&&a[5]!=3&&sum==2)//check if the condition is suited
					{
						cout<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<" "<<a[5]<<endl;//putout
					}

				}
			}
		}
	}
	}
	return 0;//return 0 cannot be forgotten!!!?
}
