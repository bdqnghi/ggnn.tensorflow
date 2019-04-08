void main(){
	int N;
	int a1=3,a2=5,a3=7;
	scanf("%d",&N);
	if (N%a1==0 && N%a2==0 && N%a3==0)
		printf("3 5 7\n");
	else if (N%a1==0 && N%a2==0 && N%a3!=0)
	printf("3 5\n");
	else if(N%a2==0&&N%a3==0&&N%a1!=0)
		printf("5 7\n");
	else if(N%a1==0&&N%a3==0&&N%a2!=0)
		printf("3 7\n");
	else if(N%a1==0&&N%a2!=0&&N%a3!=0)
		printf("3\n");
	else if(N%a2==0&&N%a1!=0&&N%a3!=0)
		printf("5\n");
	else if (N%a3==0&&N%a1!=0&&N%a2!=0)
		printf("7\n");
	else if(N%a1!=0&&N%a2!=0&&N%a3!=0)
		printf("n\n");
}
	
		


		
	
