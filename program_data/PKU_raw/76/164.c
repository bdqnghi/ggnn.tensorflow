int main(){ 
	int i=0,n;
	int front=0,back=0; 
	scanf("%d",&n);
	if(n<3||n>50000) {  
		printf("no");
		return 0;
	}
	int *a=(int *)malloc(n*sizeof(int)); 
	int *b=(int *)malloc(n*sizeof(int)); 
	while(i<n) { 
		scanf("%d %d",a+i,b+i); 
		if(a[i]>b[i])  {  
			printf("input error");   
			return 0;  
		}
		if((front!=back&&a[i]<front)||front==back) {  
			front = a[i];
			back  = b[i]; 
		} 
		i++;
	}
	for(i=0;i<n;i++){ 
		if(front<=a[i]&&a[i]<=back&&back<b[i]) 
		{ 
			back  = b[i];  
			i=-1; 
		}
	}
	for(i=0;i<n;i++){ 
		if(a[i]<front||b[i]>back)  {
			printf("no");
			return 0;  
}
 }
	free(a);
	free(b); 
	printf("%d %d\n",front,back);
}
