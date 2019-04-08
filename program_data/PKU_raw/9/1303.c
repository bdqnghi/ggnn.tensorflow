struct patient
{
	char num[11];
	int age;
}sick[101];
int main()
{
	int n,i,j,k,r,s;
	s=0;
	r=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",sick[i].num);
		scanf("%d",&sick[i].age);
	}
	int old[101]={0};
	int young[101]={0};
	for(i=0;i<n;i++){
		if(sick[i].age>=60){
			for(j=0;j<=s;j++){
				if(sick[i].age>sick[old[j]].age||j==s){
					if(j==s){
						old[s]=i;
						s=s+1;
						break;
					}
					else{
						for(k=s;k>=j;k--){
							old[k+1]=old[k];
						}
						old[j]=i;
						s=s+1;
						break;
					}
				}
			}
		}
		else{
			young[r]=i;
			r=r+1;
		}
	}
	for(i=0;i<s;i++){
		printf("%s\n",sick[old[i]].num);
	}
	for(i=0;i<r;i++){
		printf("%s\n",sick[young[i]].num);
	}

	return 0;
}