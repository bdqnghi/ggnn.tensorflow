
struct info
{
	char num[10];
	int age;
};
struct info1
{
	char num1[10];
	int age1;
};
int main(int argc, char* argv[])
{
	struct info patient[101];
	struct info1 old[101];
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=0,j=0;i<n;i++){
		scanf("%s %d",&patient[i].num,&patient[i].age);
		if(patient[i].age>=60){
			strcpy(old[j].num1,patient[i].num);
			old[j].age1=patient[i].age;
			j++;
		}
	}
	int m=j;
	for(j=1;j<m;j++){
		for(i=0;i<m-j;i++){
			if(old[i].age1<old[i+1].age1){
				old[100]=old[i];
				old[i]=old[i+1];
				old[i+1]=old[100];
			}
		}
	}
	for(i=0;i<m;i++){
		printf("%s\n",old[i].num1);
	}
	for(i=0;i<n;i++){
		if(patient[i].age<60){
			printf("%s\n",patient[i].num);
		}
	}
	return 0;
}