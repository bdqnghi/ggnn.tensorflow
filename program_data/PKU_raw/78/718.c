
int main() {
	int z=10,q=10,s=10,l=10,a;
	for(z=10;z<=50;z=z+10){
		for(q=10;q<=50;q=q+10){
			for(s=10;s<=50;s=s+10){
				for(l=10;l<=50;l=l+10){
					if((z+q==s+l)&&(z+l>s+q)&&(z+s<q))break;}
				if((z+q==s+l)&&(z+l>s+q)&&(z+s<q))break;}
			if((z+q==s+l)&&(z+l>s+q)&&(z+s<q))break;}	
		if((z+q==s+l)&&(z+l>s+q)&&(z+s<q))break;}		//???????????????????????
	for(a=50;a>=10;a=a-10){
		if(z==a)cout<<"z "<<a<<endl;
		if(q==a)cout<<"q "<<a<<endl;
		if(s==a)cout<<"s "<<a<<endl;
		if(l==a)cout<<"l "<<a<<endl;}					//???????
	return 0;
}
