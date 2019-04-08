int main()
{
	int n,c[100],m;
	float t;
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		scanf("%d",&c[i]);
	}
	for(int i=0;i<m;i++){
	        float s=0,a=2,b=1; 
			for(n=1;n<=c[i];n++){
		        s=s+(float)a/b;
		        t=a;a+=b;b=t;
			}	
		    printf("%.3f\n",s);
				
	}
	
	


	return 0;
}

