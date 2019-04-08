int main()
{
	int a,b,c,d,e,f,g;
	scanf("%d",&a);
	b=a%3;
	c=a%5;
	d=a%7;
	e=b-0;
	f=c-0;
	g=d-0;
	if(e==0&&f==0&&g>0){
		printf("3 5");
	}else if(e==0&&g==0&&f>0){
		printf("3 7");
	}else if(f==0&&g==0&&e>0){
		printf("5 7");
	}else if(e==0&&g>0&&f>0){
		printf("3");
	}else if(f==0&&g>0&&e>0){
		printf("5");
	}else if(g==0&&e>0&&f>0){
		printf("7");
	}else if(g>0&&e>0&&f>0){
		printf("n");
	}else if(e==0&&g==0&&f==0){
		printf("3 5 7");
	}
	return 0;
}
