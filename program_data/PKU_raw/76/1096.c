int main()
{  

    int n;  
    int a[50000], b[50000], c[20000]={0};  
    int i, j, x=0, y=0, k=0; 


	scanf("%d",&n);  
	for(i=0;i<n;i++)
		scanf("%d %d",&a[i],&b[i]); 
	
	for(i=0; i<n; i++) { 
		for(j=0; j<20000; j++){
			if(j%2==0){
				if(j/2>=a[i]&&j/2<=b[i])
					c[j]=1;
			}else{
				if((j-1)/2>=a[i]&&(j+1)/2<=b[i])
				    c[j]=1;
			}
		}
	}

		

	for(i=0; i<=20000; i++){
		if(c[i]==1){
			x=i;
			break;
		}
	}

	for(i=20000; i>=x; i--){
		if(c[i]==1){
			y=i;
			break;
		}
	}

	for(i=x; i<=y; i++){
		if(c[i]==0){
			printf("no\n");
			break;
		}
		else {
			k++;
			continue;
		}
	}
	if(k==y-x+1)
		printf("%d %d", x/2, y/2);

	return 0;
}
