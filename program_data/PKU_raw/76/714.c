int main(){
    int n;
    scanf("%d",&n);
    int min[n],max[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d %d\n",&min[i],&max[i]);
    }
    int e;
    for(int k = 1 ; k <= n ; k++){
       for(int i = 0; i < n - k; i++){
    		if(min[i] > min[i+1]){
					e = min[i+1];
					min[i+1] = min[i];
					min[i] = e;
                    e = max[i+1];
    				max[i+1] = max[i];
					max[i] = e;
			}
	   }
    }
    for(int i=0;i<n-1;i++)
    {
        if(max[i]<min[i+1]){
           printf("no");
           break;}
        else if((max[i]>max[i+1])&&(i!=n-1))
     {
	   e=max[i];
	   max[i]=max[i+1];
	   max[i+1]=e;
	 }

        if(i+1==n-1)
        printf("%d %d",min[0],max[n-1]);
    }
 return 0;
}

