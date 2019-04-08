/*
 * ????suantizhong.cpp
 * ??????
 * ?????2012 10 21
 * ???????????????
 */



int main(){
	int z,q,s,l,f;  //??????z q s l??????f
	f=1;          //f????1
	int max(int a,int b,int c,int d);    //????max4
	for (z=1;z<=5;z++){   //z????1??z???5???????????z+1
		for (q=1;q<=5;q++){  //q????1??q???5???????????q+1
			if (q==z) q++;   //??q??z?q+1
			for (s=1;s<=5;s++){     //s????1??s???5???????????s+1
			    while (s==z || s==q) s++;     //s?z q??
			    for (l=1;l<=5;l++){      //l????1??l???5???????????l+1
			        while ((l==z || l==q) || l==s) l++;       //l?z q s??
                    if (l>5) break;                           //l???????????????
			        if (((z+q)==(s+l)&&(z+l)>(s+q))&&((z+s)<q)){
			        	if(max(z,q,s,l)==z) {
                        	cout <<"z "<<z*10<<endl;
                            z=0;
                        }
                        if(max(z,q,s,l)==q) {
                        	cout <<"q "<<q*10<<endl;
                        	q=0;
                        }
                        if(max(z,q,s,l)==s) {
                        	cout <<"s "<<s*10<<endl;
                        	s=0;
                        }
                        if(max(z,q,s,l)==l) {
                        	cout <<"l "<<l*10<<endl;
                        	l=0;
                        }
                        if(max(z,q,s,l)==z && max(z,q,s,l)!=0) {
                        	cout <<"z "<<z*10<<endl;
                            z=0;
                        }
                        if(max(z,q,s,l)==q && max(z,q,s,l)!=0) {
                        	cout <<"q "<<q*10<<endl;
                        	q=0;
                        }
                        if(max(z,q,s,l)==s && max(z,q,s,l)!=0) {
                        	cout <<"s "<<s*10<<endl;
                        	s=0;
                        }
                        if(max(z,q,s,l)==l && max(z,q,s,l)!=0) {
                        	cout <<"l "<<l*10<<endl;
                        	l=0;
                        }
                        if(max(z,q,s,l)==z && max(z,q,s,l)!=0) {
                        	cout <<"z "<<z*10<<endl;
                            z=0;
                        }
                        if(max(z,q,s,l)==q && max(z,q,s,l)!=0) {
                        	cout <<"q "<<q*10<<endl;
                        	q=0;
                        }
                        if(max(z,q,s,l)==s && max(z,q,s,l)!=0) {
                        	cout <<"s "<<s*10<<endl;
                        	s=0;
                        }
                        if(max(z,q,s,l)==l && max(z,q,s,l)!=0) {
                        	cout <<"l "<<l*10<<endl;
                        	l=0;
                        }
                        if(max(z,q,s,l)==z && max(z,q,s,l)!=0) {
                        	cout <<"z "<<z*10<<endl;
                            z=0;
                        }
                        if(max(z,q,s,l)==q && max(z,q,s,l)!=0) {
                        	cout <<"q "<<q*10<<endl;
                        	q=0;
                        }
                        if(max(z,q,s,l)==s && max(z,q,s,l)!=0) {
                        	cout <<"s "<<s*10<<endl;
                        	s=0;
                        }
                        if(max(z,q,s,l)==l && max(z,q,s,l)!=0) {
                        	cout <<"l "<<l*10<<endl;
                        	l=0;
                        }
			        	f=0;                              //?????????????????f???
                    }
                    if (f==0) break; //f???0?????
			    }
			    if (f==0) break; //f???0?????
			}
			if (f==0) break; //f???0?????
		}
		if (f==0) break; //f???0?????
	}
	return 0;
}

int max(int a,int b,int c,int d){
    int m;
    m=(a>b)?a:b;
    m=(m>c)?m:c;
    m=(m>d)?m:d;
    return (m);
}
