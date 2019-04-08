
int reverse(int x);
int main()
{
	int re_num,num,i;
	for(i=0;i<6;i++){
		scanf("%d",&num);
		re_num=reverse(num);
		printf("%d\n",re_num);
	}
	return 0;
}

int reverse(int x){
	int a,b,c,d,e,y;
	a=x/10000;
	b=x/1000%10;
	c=x/100%10;
	d=x/10%10;
	e=x%10;
	if(a!=0){
	y=e*10000+d*1000+c*100+b*10+a;
	}
	  else if(b!=0){
		  y=e*1000+d*100+c*10+b;
	  }
	  else if(c!=0){
		  y=e*100+d*10+c;
	  }
	  else if(d!=0){
		   y=e*10+d;
	  }
	  else{
		  y=e;
	  }

	return y;
}