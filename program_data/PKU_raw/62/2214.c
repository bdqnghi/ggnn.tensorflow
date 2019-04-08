void move(char*t,int d){
	//for(;*(t-1)!=0;t++) *(t-d)=*t; ????
	for(;*t!=0;t++)
		*(t-d)=*t;
	*(t-d)=*t;
}
void deal(char*c){
	if(*c==0)return;
	else if(*c!=' ')deal(c+1) ;
	else{
		char*t=c+1;
		for(;*t==' ';t++);
		int d=t-c-1;
		if(d)move(t,d);
		//deal(t);????t????????
		deal(c+1);
	}
}
int main()
{
	char c[201];
	cin.getline(c,201);
	deal(c);
	cout<<c;
	return 0;
}