struct patient{
	char name[11];
	int age;
	int order;
};
int main(){
	struct patient peo[NO];
	int n,i,count=0,COUNT,j,k,e,agedata[NO],a=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",&peo[i].name);
		scanf("%d",&peo[i].age);
	}
	for(i=0;i<n;i++){
		if(peo[i].age>=60){
			count++;
			agedata[a]=peo[i].age;
			a++;
		}
	}//count number of old people 
	COUNT=count;
	for(i=0;i<n;i++){
		if(peo[i].age<60){
			peo[i].order=count;
			count++;
		}
	}// record order for young people
	for(k=1;k<COUNT;k++){
		for(j=0;j<COUNT-k;j++){
			if(agedata[j]<agedata[j+1]){
				e=agedata[j+1];
				agedata[j+1]=agedata[j];
				agedata[j]=e;
			}
		}
	}//rearrage age of old people
	for(i=0;i<COUNT;i++){
		for(j=0;j<n;j++){
			if(peo[j].age==agedata[i]){
				peo[j].order=i;
			}
		}
	}// record order for old people
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(peo[j].order==i){
				printf("%s\n",peo[j].name);
			}
		}
	}
	return 0;
}