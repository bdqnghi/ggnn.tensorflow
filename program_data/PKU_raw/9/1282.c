struct ILL{
	char id[10];
	int age;
};
int main()
{
	struct ILL ill[100];
    int n,i,k,j=0,Age[100],x;
	char a[100][10],b[10];
	scanf("%d",&n);
	for (i=0;i<n;i++){
		scanf("%s",ill[i].id);
	    scanf("%d",&ill[i].age);
	    if (ill[i].age>=60)
		{ strcpy(a[j],ill[i].id);
		  Age[j]=ill[i].age;
		  j++;
		}
	}
	for (i=0;i<j-1;i++){
		for (k=0;k<j-i-1;k++){
			if (Age[k]<Age[k+1]){
				strcpy(b,a[k+1]);
			    strcpy(a[k+1],a[k]);
			    strcpy(a[k],b);
				x=Age[k];
				Age[k]=Age[k+1];
				Age[k+1]=x;
			}
		}
	}
	for (i=0;i<j;i++){
		puts(a[i]);
	}
	for (i=0;i<n;i++){
		if (ill[i].age<60){
			printf("%s\n",ill[i].id);
		}
	}
	return 0;
}
