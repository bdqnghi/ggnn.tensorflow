// ?????.cpp : Defines the entry point for the console application.
//

int fen(int x,int y);
int main(int argc, char* argv[])
{
	int i,m,n,sum;
	scanf("%d",&sum);
	for(i=0;i<sum;i++){
		scanf("%d%d",&m,&n);
		printf("%d\n",fen(m,n));
	}
	return 0;
}


int fen(int x,int y){
	int result=0;
	if(y!=1)result+=fen(x,y-1);
	if(x-y>=0&&y!=1)result+=fen(x-y,y);
	if(y==1){
		result++;
		return result;
	}
	return result;
}

