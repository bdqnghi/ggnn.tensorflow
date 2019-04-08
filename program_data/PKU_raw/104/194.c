void main() 
{ 
	int x,y,i,m,n; 
	int a[15]={0},b[15]={0}; 
	
	scanf("%d %d",&x,&y); 
	
	a[0]=x; 
	b[0]=y; 
	
	if(x==y) 
	{ 
		printf("%d\n",x); 
		return; 
	} 
	
	for(i=0;i<11;i++) 
	{ 
		if(a[i]==0) 
		{ 
			m=i-1; 
			break; 
		} 
		
		else 
			a[i+1]=a[i]/2; 
	} 
	
	for(i=0;i<11;i++) 
	{ 
		if(b[i]==0) 
		{ 
			n=i-1; 
			break; 
		} 
		
		else b[i+1]=b[i]/2; 
	} 
	
	for(;;m--,n--) 
	{ 
		if(a[m]!=b[n]) 
			break; 
	} 
	
	printf("%d\n",a[m+1]); 
}
