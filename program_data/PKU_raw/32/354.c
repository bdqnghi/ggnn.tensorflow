int main()
{
	int n, a[100]={0}, b[100]={0}, c[100]={0}, l1, l2, i, j;
	char begin1[101]={0}, begin2[101]={0};
	int compare(int a, int b);
	scanf("%d\n", &n);
	for(i=0;i<n;i++){
		scanf("%s", begin1);
		scanf("%s", begin2);
		if(i!=n-1)
		    scanf("\n");
		l1 = strlen(begin1);
		l2 = strlen(begin2);
		for(j=0;j<compare(l1, l2);j++){
			if(l1>=l2){
			    a[j] = (int)begin1[j]-48;
				if(j<l2)
			        b[j+l1-l2] = (int)begin2[j]-48;
			}
			else{
				if(j<l1)
				    a[j+l2-l1] = (int)begin1[j]-48;
			    b[j] = (int)begin2[j]-48;
			}
		}
		for(j=compare(l1, l2)-1;j>=0;j--){
			if(a[j]-b[j]>=0)
				c[j] = a[j] - b[j];
			else{
				c[j] = 10+a[j]-b[j];
				a[j-1] = a[j-1]-1;
			}
		}
		for(j=0;j<compare(l1, l2);j++){
			printf("%d", c[j]);
			c[j]=0;
			begin1[j]='\0';
			begin2[j]='\0';
			a[j]=0;
			b[j]=0;
		}
		printf("\n");
		
	}
	return 0;
}
int compare(int a, int b){
	if(a>=b)
		return a;
	else
		return b;
}


		
