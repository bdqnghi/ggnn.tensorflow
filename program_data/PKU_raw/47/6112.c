int main(){ 
	int i,n,s[100];
    scanf("%d/n",&n);
	for(i=0;i<n;i++){scanf("%d",&s[i]);};
	for(i=n-1;i>=0;i--)
	{
		if(i!=0){
			printf("%d ",s[i]);}
		else{printf("%d",s[i]);};
	}
	
	return 0;
}
