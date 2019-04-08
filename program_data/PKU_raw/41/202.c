
 




int main()
{

	
	
	int n;
	
	int com[6];
	int say[6];
	int fir,sec;

	int i,judge;
	for(com[1]=1;com[1]<=5;com[1]++)
	{
		if(com[1]==1)
		{
			fir=1;
		}
		if(com[1]==2)
		{
			sec=1;
		}
		for(com[2]=1;com[2]<=5 ;com[2]++)
	{
		if(com[2]==com[1])
			continue;
		if(com[2]==1)
		{
			fir=2;
		}
		if(com[2]==2)
		{
			sec=2;
		}

		for(com[3]=1;com[3]<=5 ;com[3]++)
	{
		if(com[3]==com[1] || com[3]==com[2])
			continue;
		if(com[3]==1)
		{
			fir=3;
		}
		if(com[3]==2)
		{
			sec=3;
		}
		for(com[4]=1;com[4]<=5 ;com[4]++)
	{
		if(com[4]==com[1] || com[4]==com[2] || com[4]==com[3])
			continue;
		if(com[4]==1)
		{
			fir=4;
		}
		if(com[4]==2)
		{
			sec=4;
		}
		com[5]=15-com[1]-com[2]-com[3]-com[4];
		if(com[5]==com[1] || com[5]==com[2] || com[5]==com[3] ||  com[5]==com[4])
		{
			continue;
		}
		if(com[5]==1)
		{
			fir=5;
		}
		if(com[5]==2)
		{
			sec=5;
		}
		say[1]=(com[5]==1);
		say[2]=(com[2]==2);
		say[3]=(com[1]==5);
		say[4]=(com[3]!=1);
		say[5]=(com[4]==1);


		judge=(com[5]==1)+(com[2]==2)+(com[1]==5)+(com[3]!=1)+(com[4]==1);
		if(judge==2 && say[fir]==1 && say[sec]==1 && com[5]!=2 && com[5]!=3)
		{
			for(i=1;i<=4;i++)
			{
				cout<<com[i]<<" ";
			}
			cout<<com[5];

		
		}
		}
		}
		}
	}

	

	
	
    



	
	
			












return 0;
}


