int main()
{
	int i=0,j,total_num=0,num=0,minx,maxy,max_num=0,lenx,leny,mark=0;
		//i?j??????total_num?????minx???????maxy????????max_num????????
	int x[10000],y[10000];//??????
	char strx[10000],stry[10000];//????????
	cin.getline(strx,10000);
	cin.getline(stry,10000);
	lenx=strlen(strx);
	leny=strlen(stry);
	while(i<=lenx)
		//??????????????
	{
		if(strx[i]!=',' && strx[i]!='\0')
			mark++;
		else
		{
			if(mark==1)
				x[total_num]=strx[i-1]-'0';
			if(mark==2)
				x[total_num]=strx[i-1]-'0'+(strx[i-2]-'0')*10;
			if(mark==3)
				x[total_num]=strx[i-1]-'0'+(strx[i-2]-'0')*10+(strx[i-3]-'0')*100;
			mark=0;
			total_num++;
		}
		i++;
	}
	total_num=0;
	i=0;
	while(i<=leny)
		////??????????????
	{
		if(stry[i]!=',' && stry[i]!='\0')
			mark++;
		else
		{
			if(mark==1)
				y[total_num]=stry[i-1]-'0';
			if(mark==2)
				y[total_num]=stry[i-1]-'0'+(stry[i-2]-'0')*10;
			if(mark==3)
				y[total_num]=stry[i-1]-'0'+(stry[i-2]-'0')*10+(stry[i-3]-'0')*100;
			mark=0;
			total_num++;
		}
		i++;
	}
	cout<<total_num<<" ";
	for(i=0;i<total_num;i++)
		//???????????????
	{
		if(i==0)
		{
			minx=x[i];
			maxy=y[i];
		}
		else
		{
			if(x[i]<minx)
				minx=x[i];
			if(y[i]>maxy)
				maxy=y[i];
		}
	}
	for(i=minx;i<=maxy;i++)
		//??????????????????????
	{
		for(j=0;j<=total_num;j++)
		{
			if(x[j]<=i && y[j]>i)
				num++;
		}
		if(num>=max_num)
		{
			max_num=num;
		}
		num=0;
	}
	cout<<max_num<<endl;
	return 0;
}