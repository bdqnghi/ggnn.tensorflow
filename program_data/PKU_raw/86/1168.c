int main()
{
	int n,t,a[100],i;
	scanf("%d",&n);
	
	while(n--){
		scanf("%d",&t);
		for(i=1;i<=t;i++)
			scanf("%d",&a[i]);
		if((a[t]+t*3)<60)
			printf("%d\n",60-t*3);
		else{
			for(i=1;i<=t;i++){
				if((a[i]+i*3>62)&&(a[i-1]+i*3-3<60))
					printf("%d\n",63-3*i);
				if(((a[i]+i*3<=62)&&(a[i]+i*3>=60))&&((a[i-1]+i*3-3)<60))
					printf("%d\n",a[i]);
			}
		}
	}
	return 0;
}
