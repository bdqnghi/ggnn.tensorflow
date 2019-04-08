int main()
{
	int max1,max2,n,num;
	int i=1;
	scanf("%d",&n);
	while(i<=n){
		scanf("%d",&num);
		if(i==1){
                   max1=num;
		   }
		if(i==2){
			if(max1>num){
				max1=max1;
				max2=num;
			}else{ 
				max2=max1;
				max1=num;
			}
		}else{
			    if((max2>num)){
		     	max1=max1;
			    max2=max2;
				}
			    if((max2<=num)&&(max1>=num)){
				max1=max1;
				max2=num;
                                    }
				if(max1<=num){
					max2=max1;
					max1=num;
					
				}
			}
		i++;
	}
	printf("%d\n",max1);
	printf("%d\n",max2);
return 0;
}
