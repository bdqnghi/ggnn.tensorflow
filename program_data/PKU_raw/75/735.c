/*
 *???: party.cpp
 *??: ???
 *????: 2012-11-09
 *??: 
 */



int main()
{
	int times[1000]={0};
	int start[1000],end[1000];
	int nPeople=0,mostPeople;
	char str[10000];
	cin.getline(str,sizeof(str));
	int readnum=0;
	for (int i=0; ;i++){
		switch(str[i]){
			case ',':
			case '\0':
				start[nPeople++]=readnum;
				readnum=0;
				break;
			default:
				readnum=readnum*10+str[i]-'0';
		}
		if (!str[i])
			break;
	}
	for (int i=0;i<nPeople;i++){
		char endchr;
		if (i<nPeople-1)
			endchr=',';
		else endchr='\n';
		cin.getline(str,sizeof(str),endchr);
		end[i]=atoi(str);
	}
	for (int i=0;i<nPeople;i++){
		for (int j=start[i];j<end[i];j++)
			times[j]++;
	}
	mostPeople=times[0];
	for (int i=1;i<1000;i++){
		if (times[i]>mostPeople)
			mostPeople=times[i];
	}
	cout << nPeople << ' ' << mostPeople << endl;
}


