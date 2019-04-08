int main()
{
	char name[5]={0};
	char s;
	int i,j,k,m,weight[5]={0},t;
	for(i=5;i>0;i--)//?
	{for(j=5;j>0;j--){j!=i;//?
	for(k=5;k>0;k--){k!=i&&k!=j;//?
	for(m=5;m>0;m--){m!=i&&m!=j&&m!=k;//?
	if((i+j==m+k)&&(i+m>j+k)&&(i+k<j))
	{
		weight[1]=i*10;name[1]='z';
		weight[2]=j*10;name[2]='q';
		weight[3]=k*10;name[3]='s';
		weight[4]=m*10;name[4]='l';
	} 
	}			  	
	}
	}
	}
	for(j=1;j<=3;j++)
	{
		for(i=1;i<=4-j;i++)//????
		{ 
			if(weight[i]<weight[i+1])
			{
				t=weight[i];weight[i]=weight[i+1];weight[i+1]=t;
				s=name[i];name[i]=name[i+1];name[i+1]=s;
			}
		}
	}
	for(i=1;i<=4;i++)//??
	{
		cout<<name[i]<<" "<<weight[i]<<endl;
	}
   return 0;
}
