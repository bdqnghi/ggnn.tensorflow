int main()
{
	int a[5][5];
	int i,j;
	int min[5],max[5];
	int pd=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(j=0;j<5;j++){
		for (i=0;i<5;i++){
			if(i==0){
				min[j]=a[i][j];
				
			}
			else if(a[i][j]<min[j]){
				min[j]=a[i][j];
			
			}
		}
	}
	
	
	for(i=0;i<5;i++){
		for (j=0;j<5;j++){
			if(j==0){
				max[i]=a[i][j];
			}
			else if(a[i][j]>max[i]){
				max[i]=a[i][j];
			}
		}
	}
    for(j=0;j<5;j++){
		for (i=0;i<5;i++){
			if(max[i]==min[j]){
				pd=1;
				printf("%d %d %d",i+1,j+1,max[i]);
			}
		}
	}
	if (pd==0){
		printf("not found");
	}

return 0;}
