int main()
{
	int i,j,N;
	char ti[50],beiti[50];
	scanf("%s%s",&ti,&beiti);
	for(i=0;i<(strlen(beiti)-strlen(ti)+1);i++){
		N=0;
		for(j=0;j<strlen(ti);j++){
			if(beiti[i+j]==ti[j]){
				N++;
			}
		}
		if(N==strlen(ti)){
			printf("%d\n",i);
			break;
		}
	}
	return 0;
}