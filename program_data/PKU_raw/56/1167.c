int main() 
{
	int n;
    scanf("%d",&n);
	int y=0;
	int z=0;
	for(int i=0;i<5;i++){        
        if(n/10!=0){			
			y = n%10;
			z= 10*z+10*y;
		}
		if(n/10==0){
			z +=n;
		}
        n = n/10;
	}
	printf("%d",z);
    return 0;
}