int main(){
    int n,i,s=0;
	float t,p=0,q;
	int a[10];
	int sz[10];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
    for(i=0;i<n;i++){
		s=s+a[i];
	}
	for(int m=0;m<n;m++){
		scanf("%d",&sz[m]);
		i=m;
	   if(sz[m]<=100&&sz[m]>=90){    
			    t=4.0;				
	   }
	   if(sz[m]<=89&&sz[m]>=85)	{	
				t=3.7;				
	   }				
	   if(sz[m]<=84&&sz[m]>=82){
				t=3.3;			
	   }
	   if(sz[m]<=81&&sz[m]>=78){
				t=3.0;				
	   }
	   if(sz[m]<=77&&sz[m]>=75){
				t=2.7;			
	   }
	   if(sz[m]<=74&&sz[m]>=72){
				t=2.3;				
	   }
       if(sz[m]<=71&&sz[m]>=68){
				t=2.0;			
	   }
       if(sz[m]<=67&&sz[m]>=64){
				t=1.5;				
	   }
       if(sz[m]<=63&&sz[m]>=60){
				t=1.0;				
	   }
	   if(sz[m]<=59){				
				t=0;				
	   }
       p=p+t*a[i];
	}
q=p/s;
	printf("%.2f",q);
	return 0;
}