int main()
{
	int a,b,c,d,e,f;
	int sum,h,m,s;
	while(1){
		scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		if(a==0)
			break;
		d+=12;
		if(e>b){
			if(f>=c){
				h=d-a;
			    m=e-b;
			    s=f-c;
			}
			else{
				h=d-a;
				m=e-b-1;
				s=f+60-c;
			}
		}
		else if(e==b){
			if(f>=c){
				h=d-a;
			    m=e-b;
			    s=f-c;
			}
			else{
				h=d-a-1;
				m=59;
				s=f+60-c;
			}
		}
		else if(e<b){
			if(f>=c){
				h=d-a-1;
			    m=e-b+60;
			    s=f-c;
			}
			else{
				h=d-a-1;
				m=e-b+60-1;
				s=f+60-c;
			}

		}
		sum=h*3600+m*60+s;
		printf("%d\n",sum);
	}
	return 0;
}