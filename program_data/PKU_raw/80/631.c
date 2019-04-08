int main()
{
	int sy,sm,sd,ey,em,ed,i,sum=0;
	cin>>sy>>sm>>sd>>ey>>em>>ed;//????????
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};//???????????
	int b[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};//???????????
	for(i=sy;i<ey;i++)//???
		{if((i%4==0&&i%100!=0)||(i%400==0))
			sum+=366;
		else
			sum+=365;
		}
	if((sy%4==0&&sy%100!=0)||(sy%400==0))//???
	for(i=0;i<sm;i++)
		sum-=b[i];
	else
		for(i=0;i<sm;i++)
				sum-=a[i];
	if((ey%4==0&&ey%100!=0)||(ey%400==0))
	for(i=0;i<em;i++)
		sum+=b[i];
	else
		for(i=0;i<em;i++)
				sum+=a[i];
      sum=sum-sd;//?????
      sum=sum+ed;

      cout<<sum;//??
  return 0;



}