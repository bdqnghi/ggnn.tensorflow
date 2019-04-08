//---------------
//   ?????
//   2010/12/22
//     ADE
//---------------


int get(int arr[1000])//?????????????
{
	int t=0,i=0;
	char c;
	cin>>arr[i];
         i++;
	while((c=cin.get())!='\n')
	{
		cin>>arr[i];
		i++;
	}
	return i;//?????
}
int main()
{
	int i,k,s[1000],e[1000],time[1000],num,max=0,endtime=0;//max???????endtime??????
	for(i=0;i<1000;i++)
		s[i]=e[i]=time[i]=0;
	num=get(s);
	num=get(e);
	for(i=0;i<num;i++)
	{
		if(endtime<e[i])endtime=e[i];  //??????
		for(k=s[i];k<e[i];k++)  //?i?????????????+1
			time[k]++;
	}
	for(i=0;i<endtime;i++)
		if(max<time[i])
			max=time[i];
	cout<<num<<" "<<max;
	return 0;
}
