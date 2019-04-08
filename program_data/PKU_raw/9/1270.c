struct patient{
		char ID[10];
		int age;
};

void paixu(struct patient pat[],int n)
{
	
	struct patient t;
	int i;
	int k;

	for(k=1;k<n;k++){
		for(i=0;i<n-k;i++){
			if(pat[i].age<pat[i+1].age){
				t=pat[i];
				pat[i]=pat[i+1];
				pat[i+1]=t;
			}
		}
	}
}

int main()
{
	struct patient pat;
	struct patient oldpat[100];
	struct patient youngpat[100];	

	int n;
	int i;
	int m=0;
	int k=0;

	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %d",pat.ID,&pat.age);
		if(pat.age>=60){
			oldpat[m]=pat;
			m++;
		}else{
			youngpat[k]=pat;
			k++;
		}
	}

	paixu(oldpat,m);

	for(i=0;i<m;i++){
		printf("%s\n",oldpat[i].ID);
	}
	for(i=0;i<k;i++){
		printf("%s\n",youngpat[i].ID);
	}

	return 0;
}

