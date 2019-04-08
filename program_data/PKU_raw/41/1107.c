int main(){
	int a,b,c,d,e;
	int h[5];
	for(a=1;a<=5;a++)
		for(b=1;b<=5;b++){
			if(b==a)continue;
			for(c=1;c<=5;c++){
				if(c==a||c==b)continue;
				for(d=1;d<=5;d++){
					if(d==a||d==b||d==c)continue;
					for(e=1;e<=5;e++){
						if(e==a||e==b||e==c||e==d)
							continue;
						if(e==2||e==3)       //e??2?3
							continue;
						h[0]=(a==1||a==2)+(e==1);
						h[1]=(b==1||b==2)+(b==2);
						h[2]=(c==1||c==2)+(a==5);
						h[3]=(d==1||d==2)+(c!=1);
	                    h[4]=(e==1)+(d==1)        ;                              //???????????????
						if((h[0]+h[1]+h[2]+h[3]+h[4]==4)&&(h[0]%2==0)&&(h[1]%2==0)
								&&(h[2]%2==0)&&(h[3]%2==0)&&(h[4]%2==0)){        //??????????
							cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
													}


					}
				}
			}
		}
	return 0;
}
