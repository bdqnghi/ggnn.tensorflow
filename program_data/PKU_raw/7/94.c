int dingwei(char duan[50],char chang[50])
{
	int i,geshu1=0,geshu2=0;
	for(i=0;duan[i]!='\0';i++){
		geshu1+=1;
	}
	for(i=0;chang[i]!='\0';i++){
		geshu2+=1;
	}
	int j,cishu=0,weizhi=0;
	for(i=0;i<=(geshu2-geshu1);i++){
		for(j=0;j<geshu1;j++){
			if(duan[j]==chang[i]){
				cishu++;
				i++;
			}else{
				break;
			}
		}
		if(cishu==geshu1){
			weizhi=i-geshu1;
			break;
		}else{
			cishu=0;
			continue;
		}
	}
	if(cishu==0){
		return -1;
	}else{
		return weizhi;
	}
}
int main()
{
	char zfc[300],beiti[256],ti[256];
	scanf("%s%s%s",zfc,beiti,ti);
	int lenzfc,lenbt,lent,weizhi,i;
	lenzfc=strlen(zfc);
	lenbt=strlen(beiti);
	lent=strlen(ti);
	weizhi=dingwei(beiti,zfc);
	if(weizhi<0){
		printf("%s\n",zfc);
	}else{
		if(lenbt==lent){
			for(i=0;i<lenbt;i++){
				zfc[weizhi+i]=ti[i];
			}

		}
		else if(lenbt>lent){
			for(i=0;i<lent;i++){
				zfc[weizhi+i]=ti[i];
			}
			for(i=0;i<(lenzfc-lenbt-weizhi);i++){
				zfc[weizhi+lent+i]=zfc[weizhi+lenbt+i];
			}
			zfc[lenzfc-lenbt+lent]='\0';
		}else if(lenbt<lent){
			for(i=lenzfc-1;i>=weizhi+lenbt;i--){
				zfc[i+lent-lenbt]=zfc[i];
			}
			for(i=0;i<lent;i++){
				zfc[weizhi+i]=ti[i];
			}
			zfc[lenzfc+lent-lenbt]='\0';
		}
		printf("%s\n",zfc);
	}
	return 0;
}
