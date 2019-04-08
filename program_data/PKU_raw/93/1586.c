int main(){
	int a,b,c,d;
	int w=3;
	int z=5;
	int x=7;
	scanf("%d",&a);
	b=a%3;
	c=a%5;
	d=a%7;
	if (b==0&&c==0&&d==0)
		printf("%d %d %d",w,z,x);
	else if(b==0&&c==0)
		printf("%d %d",w,z);
	else if(b==0&&d==0)
		printf("%d %d",w,x);
	else if(c==0&&d==0)
		printf("%d %d",z,x);
	      else if(b==0)
			  printf("%d",w);
		       else if(c==0)
				   printf("%d",z);
			        else if(d==0)
						printf("%d",x);
					      else printf("n");
	 return 0;
						  
}
					
