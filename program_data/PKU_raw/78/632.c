
int main(){
	 int z,q,s,l;
	 for(z=10;z<=50;z=z+10){
		 for(q=10;q<=50;q=q+10){
			 for(s=10;s<=50;s=s+10){
				 for(l=10;l<=50;l=l+10){
					 if((z+q == s+l) && (z+l >s+q) && (z+s<q)){//??????z,q,s,l
						 if ((z>q)+(z>s)+(z>l)==3) cout<<'z'<<' '<<z<<endl;//???????
						 if ((q>z)+(q>s)+(q>l)==3)cout<<'q'<<' '<<q<<endl;
						 if ((s>z)+(s>q)+(s>l)==3)cout<<'s'<<' '<<s<<endl;
						 if ((l>z)+(l>s)+(l>q)==3)cout<<'l'<<' '<<l<<endl;
						 if ((z>q)+(z>s)+(z>l)==3) cout<<'z'<<' '<<z<<endl;
						 if ((q>z)+(q>s)+(q>l)==2)cout<<'q'<<' '<<q<<endl;//???????
						 if ((s>z)+(s>q)+(s>l)==2)cout<<'s'<<' '<<s<<endl;
						 if ((l>z)+(l>s)+(l>q)==2)cout<<'l'<<' '<<l<<endl;
						 if ((z>q)+(z>s)+(z>l)==1) cout<<'z'<<' '<<z<<endl;//???????
						 if ((q>z)+(q>s)+(q>l)==1)cout<<'q'<<' '<<q<<endl;
						 if ((s>z)+(s>q)+(s>l)==1)cout<<'s'<<' '<<s<<endl;
						 if ((l>z)+(l>s)+(l>q)==1)cout<<'l'<<' '<<l<<endl;
						 if ((z>q)+(z>s)+(z>l)==0) cout<<'z'<<' '<<z<<endl;//???????
						 if ((q>z)+(q>s)+(q>l)==0)cout<<'q'<<' '<<q<<endl;
						 if ((s>z)+(s>q)+(s>l)==0)cout<<'s'<<' '<<s<<endl;
						 if ((l>z)+(l>s)+(l>q)==0)cout<<'l'<<' '<<l<<endl;

					 }
					 }
				 }
		 	 }
	 	 }
		return 0;
	}
