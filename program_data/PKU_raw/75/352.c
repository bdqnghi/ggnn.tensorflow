/*        ?????
??????           2010.11.24    */
int main()
{
	int i,j,num,max;
	int count[1000]={0};
	int x[10000]={0};
	int y[10000]={0};
	char ent[100000]={'\0'};
	char exi[100000]={'\0'};
	cin.getline(ent,sizeof(ent));
	cin.getline(exi,sizeof(exi));
	//cout<<ent<<endl;
	i=0;
	j=0;
	while(j<strlen(ent))
		if(ent[j]!=',')
		{
			x[i]=10*x[i]+ent[j]-'0';
			j++;
		}
		else
		{
			j++;
			i++;
		}
	i=0;
	j=0;
	while(j<strlen(exi))
		if(exi[j]!=',')
		{
			y[i]=10*y[i]+exi[j]-'0';
			j++;
		}
		else
		{
			j++;
			i++;
		}
	//cout<<x[0]<<123<<y[0]<<endl;
	num=i+1;
	for(i=0;i<num;i++)
		for(j=x[i];j<y[i];j++)
			count[j]++;
	max=count[0];
	for(i=1;i<1000;i++)
		if(count[i]>max)
			max=count[i];
	cout<<num<<" "<<max<<endl;
	return 0;
}
