int main()
{
	char a[10000];
	gets(a);
	int length[301]={0};
	int i,geshu=0,state=OUT;

	geshu=0;

	for(i=0;a[i]!='\0';i++){
		if(a[i]==' '){
			state=OUT;
		}
		else{
			if(state==OUT){
				geshu++;
				length[geshu]++;
				state=IN;
			}
			else if(state==IN){
				length[geshu]++;
			}
		}
	}

	for(i=1;i<geshu;i++){
		printf("%d,",length[i]);
	}
	printf("%d",length[geshu]);

	return 0;
}
