int main(){
	int x,y,z,a,b,c;
	int result;
	int i;
	while(i=1){
	scanf("%d%d%d%d%d%d",&x,&y,&z,&a,&b,&c);
	if(x==0&&y==0&&z==0&&a==0&&b==0&&c==0){
	break;
	}else{
	result=0;
	result=result+((60-y-1)*60)+60-z+(60*b)+c;
	result=result+(a+12-x-1)*60*60;
	printf("%d\n",result);
	}
	}
	return 0;
}

