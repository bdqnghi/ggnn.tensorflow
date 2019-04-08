void main(){
	
	int c,i,f,s,m,n,x;
    int b;
	
	scanf("%d",&c);
	for(i=1;i<=c;i++){
    scanf("%d",&b);
    scanf("%d%d",&f,&s);
    m=n=0;
	if(b%4==0){
         
		if (b%100==0){
			if(b%400==0){
			 int a[12]={31,29,31,30,31,30,31,31,30,31,30,31};
			
			for(x=0;x<f-1;x++){
				m=m+a[x];
			     }
			for(x=0;x<s-1;x++){
				m=m-a[x];
			     }
			    if(m%7==0){
				printf("YES\n");
			     }
			    else printf("NO\n");
			}
			else{
                 int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
			
			   for(x=0;x<f-1;x++){
				   m=m+a[x];
			      }
			   for(x=0;x<s-1;x++){
				   m=m-a[x];
			      }
			    if(m%7==0){
				printf("YES\n");
			      }
			   
			    else printf("NO\n");
		       }
		}
		else{
             int a[12]={31,29,31,30,31,30,31,31,30,31,30,31};
			
			for(x=0;x<f-1;x++){
				m=m+a[x];
			}
			for(x=0;x<s-1;x++){
				m=m-a[x];
			}
			    if(m%7==0){
				printf("YES\n");
			}
			    else printf("NO\n");
		}
	}
	else{

       int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
			
			for(x=0;x<f-1;x++){
				m=m+a[x];
			}
			for(x=0;x<s-1;x++){
				m=m-a[x];
			}
			    if(m%7==0){
				printf("YES\n");
			}
			    else printf("NO\n");
	}
	}
}
	





