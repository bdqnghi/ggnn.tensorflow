
int main()
{
	int a[12][32],w,i,numOfDay,j;  //a[i][j]??(i+1)?j?
	                               //?????????????????????w?????
	                               //????????numOfDay??????????
	cin>>w;
	a[0][1]=w;
	for(i=0;i<12;i++){
		switch(i){
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:numOfDay=31;break;
		case 3:
		case 5:
		case 8:
		case 10:numOfDay=30;break;
		case 1:numOfDay=28;break;
		}
		for(j=1;j<=numOfDay;j++){                 //?????
			w=w%7;                                //????????
			a[i][j]=w;
			w++;
		}
		if(a[i][13]==5)
			cout<<i+1<<endl;
	}
	return 0;
}
