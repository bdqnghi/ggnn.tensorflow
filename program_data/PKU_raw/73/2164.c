
int main()
{
	int num[5][5],i,k,j,x,y,max=0,count=0,z=0;
	
	for(i=0;i<5;i++)
	{
		for(k=0;k<5;k++) cin>>num[i][k];
	}

	for(i=0;i<5;i++)
	{
		max=0;x=0;y=0;
		count=0;
		for(k=0;k<5;k++)
		{
			if (num[i][k]>max) {max=num[i][k];x=i;y=k;}
		}
		
		for(j=0;j<5;j++)
		{
			if (max<num[j][y]) count++;
		}
	
		if(count==4) {cout<<x+1<<" "<<y+1<<" "<<num[x][y]<<endl;z++;}
		if(z==0&&i==4) cout<<"not found"<<endl;
	}
	return 0;
}

