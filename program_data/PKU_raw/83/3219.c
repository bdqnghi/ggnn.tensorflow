
int main(){
	
	int n;
	
    int sz[10];
    int a[10];
	float x=0,y=0,GPA;
	
	scanf("%d",&n);
	
	for(int i=0;i<=n-1;i++){
		
		scanf("%d",&(a[i])); 

		y+=a[i];
	}
	for(int p=0;p<=n-1;p++){
		
		scanf("%d",&(sz[p])); 
	}
    for(int j=0;j<=n-1;j++){
		
		
		if((sz[j])>=90){
			
			x+=4.0*a[j];
			
		}
		else if((sz[j])>=85&&(sz[j])<90){
			
			x+=3.7*a[j];
			
		}
        else if((sz[j])>=82&&(sz[j])<85){
			
			x+=3.3*a[j];
			
		}
		else if((sz[j])>=78&&(sz[j])<82){
			
			x+=3.0*a[j];
			
		}
		else if((sz[j])>=75&&(sz[j])<78){
			
			x+=2.7*a[j];
			
		}
		else if((sz[j])>=72&&(sz[j])<75){
			
			x+=2.3*a[j];
			
		}
		else if((sz[j])>=68&&(sz[j])<72){
			
			x+=2.0*a[j];
			
		}
   	    else if((sz[j])>=64&&(sz[j])<68){
			
			x+=1.5*a[j];
			
		}
		else if((sz[j])>=60&&(sz[j])<64){
			
			x+=1.0*a[j];
			
		}
		else if((sz[j])<60){
			
			x+=0;
			
		}
		
	}
	GPA=x/y;
	
	printf("%.2f",GPA);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
}