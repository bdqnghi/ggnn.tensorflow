

void main()
{
	int N, i, num1[100]={0}, num2[100]={0}, scholar[100]={0}, x, y, sum;
	char name[100][20], condition[100][7];
	scanf("%d", &N);
	for(i=0;i<N;i++){
		scanf("%s%d%d", name[i], &num1[i], &num2[i]);
		gets(condition[i]);
	}
	for(i=0;i<N;i++){
		if((num1[i]>80) && (condition[i][5] != '0'))
			scholar[i]+=8000;
		if((num1[i]>85) && (num2[i]>80))
			scholar[i]+=4000;
		if(num1[i]>90)
			scholar[i]+=2000;
		if((num1[i]>85) && (condition[i][3] == 'Y'))
			scholar[i]+=1000;
		if((num2[i]>80) && (condition[i][1] == 'Y'))
			scholar[i]+=850;
	}
	sum=scholar[0];
	for(i=1;i<N;i++){
		if(scholar[i]>x){
			x=scholar[i];
			y=i;
		}
		sum+=scholar[i];
	}
	printf("%s\n%d\n%d", name[y], x, sum);
}



