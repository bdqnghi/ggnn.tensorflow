void hou(int n,int m){
	
	
	int a[300];
	int *p,i,k=0,o=0;
	
	p=a+1;
	for(i=1;i<=n;i++)
		*(p++)=i;
	p=a+1;
	while(o<n-1){
		
		if(*p!=0)k++;
		if(k==m){
			*p=0;
			k=0;
		    o++;}//*???N???????????N?????
		if(p<a+n)p++;
		else p=a+1;}
		
	p=a+1;
	while(*p==0)p++;
	printf("%d\n",*p);
}
	
void main(){
	int a[20][2];
	int i,j;
	for(i=0;i<20;i++){
		scanf("%d%d",&a[i][0],&a[i][1]);
		if((a[i][0]==0)&&(a[i][1]==0))break;
	}
	for(j=0;j<i;j++)
		hou(a[j][0],a[j][1]);
}

