void run(int x){
	int lt;
	if(x==1){
		printf("End");
	}
	else if(x%2){
		lt=x*3+1;
		printf("%d*3+1=%d\n",x,lt);
		run(lt);
	}
	else if(x!=2){
		lt=x/2;
		printf("%d/2=%d\n",x,lt);
		run(lt);
	}
	else{
		printf("2/2=1\nEnd");
	}
}
int main(){
	int a;
	cin>>a;
	run(a);
	
}