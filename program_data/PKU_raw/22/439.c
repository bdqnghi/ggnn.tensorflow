void main()
{
	int num[300];
	char a;
	int i,largest=0,second=0,n;
	for(i=0;i<300;i++){
		scanf("%d%c",&num[i],&a);
		if(a!='\n'){
			if(num[i]>largest){
				second=largest;
				largest=num[i];
			}
			else if((num[i]<largest)&&(num[i]>second)){
				second=num[i];
			}
		}
		else{
			if(num[i]>largest){
				second=largest;
				largest=num[i];
			}
			else if((num[i]<largest)&&(num[i]>second)){
				second=num[i];
			}
			n=i;
			break;
		}
	}
	if(n==0){
		printf("No");
	}
	else{
		if(second==0){
		printf("No");
	}
    	else{
	    	printf("%d",second);
		}
	}
}