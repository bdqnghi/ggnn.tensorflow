void bubble_sort(int a[],int n)
{
	int i,k,t;
	for(k=n-1;k>0;k--){
		for(i=0;i<k;i++){
			if(a[i]>a[i+1]){
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
		
}

int main()
{
	int i, n,a[MAX],u,j=0,b[MAX], m;
   scanf("%d",&n);
   for(i=0;i<n;i++){
      scanf("%d",&a[i]);
	  }
   bubble_sort(a,n);

   for(i=0;i<n;i++){    
	   if(a[i]%2!=0){
		b[j]=a[i];
		j++;
	   }
   }
    m=j;
		
	for(j=0;j<m;j++){ 
		if(j==0){
			printf("%d",b[j]);
		}
		else {
			printf(",%d",b[j]);
		
	}
   } 
   return 0;
}


