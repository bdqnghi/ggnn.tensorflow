void main()
{
	int n, i, j, k=0, fake[100], count[100][100];
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &fake[i]);
		for(j=0;j<fake[i];j++){
			scanf("%d", &count[i][j]);
		}
	}
	for(i=0;i<n;i++){
		if(fake[i] == 0){
			printf("60\n");
		}
		else{
			for(j=0;j<fake[i];j++){
				if((count[i][j]+(j+1)*3)>=60){
					if(count[i][j]<(60-3*j)){
						printf("%d\n", count[i][j]);
						break;
					}
					else{
						if(j != 0){
							printf("%d\n", 60-3*j);
							break;
						}
						else{
							printf("60\n");
							break;
						}
					}
				}
				k+=1;
			}
			if(k == fake[i])
			printf("%d\n", 60-3*fake[i]);
			k = 0;
		}
	}
}