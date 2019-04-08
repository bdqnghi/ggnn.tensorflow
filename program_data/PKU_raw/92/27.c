

int myCompare(const void *int_a, const void *int_b)
{
	return *(int*)int_b - *(int*)int_a;
}

int main()
{
	int n, i;
	int *QiWang;
	int *TianJi;
	int *QFast;
	int *TFast;
	int *QSlow;
	int *TSlow;
	int countWin;

	while(1){

		scanf("%d", &n);
		if(n==0)
			break;
		if(((QiWang=(int*)malloc(n*sizeof(int)))==NULL)
			||((TianJi=(int*)malloc(n*sizeof(int)))==NULL)){
			printf("Error: memory out! (1)/n");
			exit(-1);
		}
		for(i=0; i<n; i++){
			scanf("%d", &TianJi[i]);
		}
		for(i=0; i<n; i++){
			scanf("%d", &QiWang[i]);
		}
		qsort(TianJi, n, sizeof(int), myCompare);
		qsort(QiWang, n, sizeof(int), myCompare);

		TFast = TianJi;
		QFast = QiWang;
		TSlow = TianJi + n - 1;
		QSlow = QiWang + n - 1;

		countWin = 0;
		while(1){
			if(*TSlow<*QSlow){
				countWin --;
				TSlow --;
				QFast ++;
			}else if(*TSlow>*QSlow){
				countWin ++;
				TSlow --;
				QSlow --;
			}else{
				if(TFast!=TSlow){
					if(*TFast<*QFast){
						countWin --;
						QFast ++;
						TSlow --;
					}else if(*TFast==*QFast){
						if(*QFast>*TSlow)
							countWin --;
						QFast ++;
						TSlow --;
					}else{
						countWin ++;
						QFast ++;
						TFast ++;
					}
				}else{
					break;
				}
			}
			if(TFast>TSlow)
				break;
		}
		printf("%d\n", 200*countWin);
		free(TianJi);
		free(QiWang);
	}

	return 0;
}