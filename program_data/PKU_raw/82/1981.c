//*************************
//     ????
//     ???  1300062709
//    2013.10.28
//**************************
int main()
{
	int n, i, shousuo[101], shuzhang[101], t=0, max;
	int shijian[101];
	cin>>n;

	for(i=1;i<=n;i++)
	{
		cin>>shousuo[i]>>shuzhang[i];
	}
	for(i=1;i<=n;i++)
	{
		if((shousuo[i]>=90)&&(140>=shousuo[i])&&(shuzhang[i]>=60)&&(90>=shuzhang[i]))
		{
			t++;
			shijian[i]=t;
		}
	    else 
		{	
			shijian[i]=t=0;
		}
	}
	max=shijian[1];
    for(i=1;i<=n;i++)
	{
	 if(max<shijian[i])	
		max=shijian[i];
	}
	
	 printf("%d",max);
	return 0;
}

	
