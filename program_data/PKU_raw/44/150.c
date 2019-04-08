
int reverse(int num);

int main(int argc, char* argv[])
{
	int i,num,result;
	
	for(i=0;i<6;i++){
		scanf("%d",&num);

		result=reverse(num);

		printf("%d\n",result);
	}

	return 0;
}

int reverse(int num){
	
	int b=0,i;

		if(num>=0){
			for(i=0;;i++){
				b=num%10+10*b;
				num=num/10;
				if(num==0){
					break;
				}
			}
		}else{
			num=abs(num);
			for(i=0;;i++){
				b=num%10+10*b;
				num=num/10;
				if(num==0){
					break;
				}
			}
			b=-b;
		
		}

	return b;

}
