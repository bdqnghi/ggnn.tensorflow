struct pat{
	char ID[10];
	int age;
};

int  main() 
{
	int n,i;
	scanf("%d",&n);
	struct pat * p[100];
	struct pat * old[100];
	struct pat * young[100],*temp;

	for(i=0;i<n;i++){
		p[i]=(struct pat*)malloc(len);
		scanf("%s %d",p[i]->ID,&p[i]->age);
	}
	int k=0,j=0;
	for(i=0;i<n;i++){
		if(p[i]->age>=60){
			old[k]=p[i];
			k++;
		}
		else{
			young[j]=p[i];
			j++;
		}
	}
	int lenold=k,lenyoung=j;
	for(k=1;k<lenold;k++){
		for(i=0;i<lenold-k;i++){
			if(old[i]->age<old[i+1]->age){
				temp=old[i];
				old[i]=old[i+1];
				old[i+1]=temp;
			}
		}
	}
	for(i=0;i<lenold;i++){
		printf("%s\n",old[i]->ID);
	}
	for(i=0;i<lenyoung;i++){
		printf("%s\n",young[i]->ID);
	}

	return 0;

} 