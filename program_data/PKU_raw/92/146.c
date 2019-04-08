

int MyCmp(const void* x,const void* y)
{
	return *((int*)y) - *((int*)x);
}

int main()
{
	int HorseNum,i,WinMatch,LoseMatch;
	int TianLastHorse,TianFirstHorse,QiFirstHorse,QiLastHorse;
	int TianHorse[1001];
	int QiHorse[1001];
	while(cin>>HorseNum){
		if( 0 == HorseNum )
			break;
		for(i = 1;i <= HorseNum;i ++)
			cin>>TianHorse[i];
		for(i = 1;i <= HorseNum;i ++)
			cin>>QiHorse[i];
		qsort(TianHorse+1,HorseNum,sizeof(int),MyCmp);
		qsort(QiHorse+1,HorseNum,sizeof(int),MyCmp);
		//TianHorse QiHorse ?????
		TianLastHorse = QiLastHorse = HorseNum;
		TianFirstHorse = QiFirstHorse = 1;
		WinMatch = LoseMatch = 0;
		while( TianFirstHorse <= TianLastHorse){
			if( TianHorse[TianFirstHorse] > QiHorse[QiFirstHorse] ){
				WinMatch ++;
				TianFirstHorse ++;
				QiFirstHorse ++;
			}
			else if( TianHorse[TianFirstHorse] < QiHorse[QiFirstHorse] ){
				//tian????????qi????
				LoseMatch ++;
				TianLastHorse --;
				QiFirstHorse ++;
			}
			else{
				//??????
				if( TianHorse[TianLastHorse] > QiHorse[QiLastHorse]){
					//??????
					WinMatch ++;
					TianLastHorse --;
					QiLastHorse --;
				}
				else {
					//????????
					if( TianHorse[TianLastHorse] < QiHorse[QiFirstHorse] )
						LoseMatch ++;
					TianLastHorse --;
					QiFirstHorse ++;
				}
			}
		}
		/*if( QiHorse[QiFirstHorse] < TianHorse[TianFirstHorse] )
			WinMatch ++;
		if( QiHorse[QiFirstHorse] > TianHorse[TianFirstHorse] )
			LoseMatch ++;*/
		cout<<( WinMatch - LoseMatch) * 200 <<endl;
	}
	return 0;
}















