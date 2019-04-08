int main()
{
	char a[300],b[50],c[50];
	int n,i,j,m,k,s=0,d,e;
	scanf("%s\n%s\n%s",a,b,c);
	n=strlen(b);
	m=strlen(a);
	for(i=0;i<m;i++){
		s=0;
		for(j=i,k=0;k<n;j++,k++){
			
			if(a[j]!=b[k]){
				 s=1; 
				 break;
			}
		} 
		if(s==0) break;}
		
		if(s==0){ 
			for(d=i,e=0;d<i+n;d++,e++){
	            a[d]=c[e];}}
			printf("%s",a);
			
		
		
	
    return 0;
}

