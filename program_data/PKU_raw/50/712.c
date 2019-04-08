int nn(int x);
int main(){
	int h[12],i,y,r=0;
	scanf("%d",&y);
	for(i=1;i<=12;i++){
		if((nn(i)-5-(7-y+1))%7==0){
			h[r]=i;
			r++;
		}
	}
	for(i=0;i<r;i++){
		printf("%d\n",h[i]);
	}
		return 0;
}
int nn(int x){
	int z,t=13;
		for(z=0;z<x;z++){
			if(z==1||z==5||z==3||z==7||z==8||z==10||z==12)
				t+=31;
			else if(z==2)
				t+=28;
			else if(z==4||z==6||z==9||z==11)
				t+=30;
		}
	return t;
}