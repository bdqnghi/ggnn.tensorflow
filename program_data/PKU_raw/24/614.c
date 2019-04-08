int main(){
	char juzi[NUM*LEN];
	char danci[NUM][LEN];
	int i, k, index;
	int maxLenDanCiIndex=0, minLenDanCiIndex=0;
	gets(juzi);
index = 0;
for(i = 0; ; i++){
	for(k = 0; ;){
		if(juzi[index] != ' ' && juzi[index] != 0){
			danci[i][k] = juzi[index];
			index++;
			k++;
		}else{
			danci[i][k] = 0;
			index++;
			k++;
			break;
		}
	}
	if(juzi[index-1] == 0){
		break;
	}
}
	
for(k = 1; k <= i; k++){
	if(strlen(danci[k]) > strlen(danci[maxLenDanCiIndex])){
		maxLenDanCiIndex = k;
	}

	if(strlen(danci[k]) < strlen(danci[minLenDanCiIndex])){
		minLenDanCiIndex = k;
	}
}
printf("%s\n", danci[maxLenDanCiIndex]);
printf("%s\n", danci[minLenDanCiIndex]);

	return 0;
}
