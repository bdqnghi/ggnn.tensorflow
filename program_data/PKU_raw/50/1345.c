int yue(int a);
int main()
{
	int w,i;
	scanf("%d",&w);
	for(i=1;i<=12;i++){
		if(w==7){
			printf("%d\n",i);
		}
		w+=yue(i)%7;
		if(w>7)
			w-=7;
	}
	return 0;
}
int yue(int a){
	if(a==1||a==3||a==5||a==7||a==8||a==10||a==12)
		return 31;
	else if(a==2)
		return 28;
	else
		return 30;
}