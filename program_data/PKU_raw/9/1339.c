struct patient
{
	char num[10]; 
	int age;
}pat[100];
int main()
{
	int n,i,m,k,f,j;
	char e[10];
    m=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s%d",&pat[i].num,&pat[i].age);
		if(pat[i].age>=60){
		    strcpy(e,pat[i].num);
			f=pat[i].age;
			for(k=i;k>m;k--){
				strcpy(pat[k].num,pat[k-1].num);
			}strcpy(pat[m].num,e);
		    pat[m].age=f;
			m++;
		}
	}for(i=0;i<m;i++){
		for(k=0;k<i;k++){
			if(pat[i].age>pat[k].age){
				f=pat[i].age;
			    strcpy(e,pat[i].num);
				for(j=i;j>k;j--){
					pat[j].age=pat[j-1].age;
					strcpy(pat[j].num,pat[j-1].num);
				}pat[k].age=f;
			    strcpy(pat[k].num,e);
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%s\n",pat[i].num);
	}
	return 0;
}