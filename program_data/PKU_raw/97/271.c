int main(int argc, char* argv[])
{
	int data[6]={100,50,20,10,5,1};
	int num[6]={0};
	int sum,i;
	scanf("%d",&sum);
	for(i=0;i<6;i++){
		for(;;){
			if(sum-data[i]>=0){
				sum=sum-data[i];
		        num[i]++;
			}
			else break;
		}

	    printf("%d\n",num[i]);
	}

    return 0;
}

