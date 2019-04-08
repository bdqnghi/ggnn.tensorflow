
int main(int argc, char* argv[])
{
	struct patient{
		char ID[10];
		int age;
	}pat[100],old[100];
	int n,i,j,k=0,a;
	char b[10];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s%d",pat[i].ID,&pat[i].age);
		if(pat[i].age>=60){
			strcpy(old[k].ID,pat[i].ID);
			old[k].age=pat[i].age;
			k++;
		}
	}
	for(i=0;i<k-1;i++){
		for(j=0;j<k-1-i;j++){
			if(old[j].age<old[j+1].age){
				a=old[j].age;
				old[j].age=old[j+1].age;
				old[j+1].age=a;
				strcpy(b,old[j].ID);
				strcpy(old[j].ID,old[j+1].ID);
				strcpy(old[j+1].ID,b);
			}
		}
	}
	for(i=0;i<k;i++)
		printf("%s\n",old[i].ID);
	for(i=0;i<n;i++){
		if(pat[i].age<60){
			printf("%s\n",pat[i].ID);
		}
	}
	return 0;
}