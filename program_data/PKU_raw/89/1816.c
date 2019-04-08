
int main()
{
	int i,n,k=0,know,known;
	scanf("%d",&n);
	int * flag =(int *) malloc(sizeof(int)*n);
	int * knownum =(int *) malloc(sizeof(int)*n);	
	for( i = 0; i < n; i ++){
		flag[i]=0;
		knownum[i]=0;
	}

	while(1){
		scanf("%d %d",&know,&known);
		if(know == 0 && known ==0)
			break;
		flag[know]=1;
		knownum[known]++;
	}

	for(i = 0; i < n; i ++)
		if(flag[i] ==0 && knownum[i]==n-1){
			k=1;
			printf("%d\n",i);
		}

	if(k == 0)
		printf("NOT FOUND\n");

	return 0;
}



