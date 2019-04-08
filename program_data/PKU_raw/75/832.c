int main()
{
	char x[5000],y[5000];               //????????????????
	char str_x[5000][4],str_y[5000][4]; 
	int time_x[5000],time_y[5000];
	int num[5000]={0}; 
	
	int k=0,i=0,j=0;
	int m,sum=1,max=0;

	cin.getline(x,5000);              //???????????
	cin.getline(y,5000);

	for(m=0;m<strlen(x);m++)          //????
	    if(x[m]==',')
			sum+=1;	
	cout<<sum<<" ";
		
	for(k=0;k<strlen(x);k++)          //?????????????????????
	{
		if(x[k]!=',')
		{
			str_x[i][j]=x[k];
			j++;
		}
		else
		{
			i++;
			j=0;
		}
	}
	i=0;
	j=0;

	for(k=0;k<strlen(y);k++)
	{
		if(y[k]!=',')
		{
			str_y[i][j]=y[k];
			j++;
		}
		else
		{
			i++;
			j=0;
		}
	}

	for(i=0;i<sum;i++)                  //?????????????
	{
		time_x[i]=atof(str_x[i]);
		time_y[i]=atof(str_y[i]);
	}

	for(i=0;i<sum;i++)                  //????????????
	{
		while(time_x[i]<time_y[i])
		{
			num[time_x[i]]++;
			time_x[i]++;
			
		}
	}

	for(j=0;j<5000;j++)                 //???????????
		if(num[j]>max)
			max=num[j];
	cout<<max;

	return 0;
}