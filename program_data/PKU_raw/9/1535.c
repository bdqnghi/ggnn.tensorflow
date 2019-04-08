
struct data
{
	char id[100];
	int age;
};


int main()
{
	
	struct data old[1000];
	struct data young[1000];
	struct data temp;
	int n,i,p=0,q=0,len1,len2,k;
	char id[100];
	int age;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s%d",id, &age);
		if(age>=60){
			old[p].age=age;
			strcpy(old[p].id,id);
			p++;
		}else{
			young[q].age=age;
			strcpy(young[q].id,id);
			q++;
		}
	}
	len1=p;
	len2=q;
	for(k=1;k<len1;k++){
		for(i=0;i<len1-k;i++){
			if(old[i].age<old[i+1].age){
				temp=old[i+1];
				old[i+1]=old[i];
				old[i]=temp;
			}
		}
	}
	for(i=0;i<len1;i++){
		printf("%s\n",old[i].id);
	}
	for(i=0;i<len2;i++){
		printf("%s\n",young[i].id);
	}
	return 0;
}
	








