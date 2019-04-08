struct myturn
{
	char ID[10];	int age;
};

int main()
{
	int n,i,j=0,max=0;
	struct myturn patient[100];
	scanf("%d",&n);			//	???????
	for(i=0;i<n;i++){
		scanf("%s%d",&patient[i].ID,&patient[i].age);
		if(patient[i].age>max) max=patient[i].age;			//	?????????
	}
	if(max>=60){		 // ??????max??????????
		for(max;max>=60;max--){
			for(i=0;i<n;i++){                    
				if(patient[i].age==max) {
					printf("%s\n",patient[i].ID);			//???????????0???“flag”?
					patient[i].age=0; j++;}	}	}	}
	for(i=0;i<n;i++){		// ??????ID?
		if(patient[i].age!=0){ printf("%s",patient[i].ID);
		j++;
		if(j<n) printf("\n");}
	}
	return 0;
}