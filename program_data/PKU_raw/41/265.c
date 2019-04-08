int main(){
	int a,b,c,d,e;
    for(a=1;a<6;a++){
		for(b=1;b<6;b++){
			if(b==a)continue;//?????
			for(c=1;c<6;c++){
				if((c==b)+(c==a)!=0)continue;
				for(d=1;d<6;d++){
					if((d==c)+(d==b)+(d==a)!=0)continue;
					for(e=1;e<6;e++){
						if((e==d)+(e==c)+(e==b)+(e==a)+(e==2)+(e==3)!=0)continue;
						if((e==1)+(b==2)+(a==5)+(c!=1)+(d==1)==2){//??????,???"????????????????????"??
							int w[5];
							w[a-1]=(e==1);
							w[b-1]=(b==2);
							w[c-1]=(a==5);
							w[d-1]=(c!=1);
							w[e-1]=(d==1);
							if((w[0]==1)+(w[1]==1)==2)cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
							else continue;//???????????,?????-1,????????????,??????????1
							}
						}
					}
				}
			}
		}
	return 0;
}