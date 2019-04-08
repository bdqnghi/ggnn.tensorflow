int main()
{
	int i,j,n,a,b,c,p,m,q;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		p=0;
		scanf("%d %d %d",&a,&b,&c);
		m=(b>c)?b:c;
		q=(b<c)?b:c;
        if((a%4==0)&&(a%100!=0)||(a%400==0)){
           if(q<=2&&m>2){
           	  p=p+1; 
           }
		      	
        }
        for(j=q;j<m;j++)
		{
        	if(j==1||j==3||j==5||j==7||j==8||j==10)
	           p+=31;	
	        if(j==2)
	           p+=28;		        
	        if(j==4||j==6||j==9||j==11)
	           p+=30;	           
        }
        if(p%7==0)
        	printf("YES\n");
		if(p%7!=0)
		    printf("NO\n");         		
	}
	
}