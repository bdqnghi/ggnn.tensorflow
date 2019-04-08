int main(){
	int number[5][5],i,p,judge[5][5],name,min,max;
	for(i=0;i<5;i++){for(p=0;p<5;p++){scanf("%d",&number[i][p]);judge[i][p]=0;}}
	for(i=0;i<5;i++){max=number[i][0];name=0;for(p=0;p<5;p++){if(number[i][p]>max){name=p;max=number[i][p];}}   judge[i][name]++;}
	for(p=0;p<5;p++){min=number[0][p];name=0;for(i=0;i<5;i++){if(number[i][p]<min){name=i;min=number[i][p];}}   judge[name][p]++;}
	for(i=0;i<5;i++){for(p=0;p<5;p++){if(judge[i][p]==2){printf("%d %d %d",i+1,p+1,number[i][p]);return 0;}}}
	printf("not found");

	

    return 0;}