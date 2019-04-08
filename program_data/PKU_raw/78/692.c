
int main() {
	int z,q,s,l,x;
	for(z=10;z<=50;z=z+10)
		{for(q=10;q<=50;q=q+10)
			{for(s=10;s<=50;s=s+10)
				{for(l=10;l<=50;l=l+10)
				{x=(((z+q)==(s+l))+((z+l)>(s+q))+((z+s)<q));
				if(x==3) {
				if((z>q)&&(q>s)&&(s>l))cout <<"z"<<" "<<z<<endl <<"q"<<" "<<q<<endl<<"s"<<" "<<s<<endl<<"l"<<" "<<l;
				if((z>q)&&(q>l)&&(l>s))cout <<"z"<<" "<<z<<endl <<"q"<<" "<<q<<endl<<"l"<<" "<<l<<endl<<"s"<<" "<<s;
				if((z>s)&&(s>l)&&(l>q))cout <<"z"<<" "<<z<<endl <<"s"<<" "<<s<<endl<<"l"<<" "<<l<<endl<<"q"<<" "<<q;
				if((z>s)&&(s>q)&&(q>l))cout <<"z"<<" "<<z<<endl <<"s"<<" "<<s<<endl<<"q"<<" "<<q<<endl<<"l"<<" "<<l;
				if((z>l)&&(l>s)&&(s>q))cout <<"z"<<" "<<z<<endl <<"l"<<" "<<l<<endl<<"s"<<" "<<s<<endl<<"q"<<" "<<q;
				if((z>l)&&(l>q)&&(q>s))cout <<"z"<<" "<<z<<endl <<"l"<<" "<<l<<endl<<"q"<<" "<<q<<endl<<"s"<<" "<<s;
				if((q>z)&&(z>s)&&(s>l))cout <<"q"<<" "<<q<<endl <<"z"<<" "<<z<<endl<<"s"<<" "<<s<<endl<<"l"<<" "<<l;
				if((q>z)&&(z>l)&&(l>s))cout <<"q"<<" "<<q<<endl <<"z"<<" "<<z<<endl<<"l"<<" "<<l<<endl<<"s"<<" "<<s;
				if((q>s)&&(s>z)&&(z>l))cout <<"q"<<" "<<q<<endl <<"s"<<" "<<s<<endl<<"z"<<" "<<z<<endl<<"l"<<" "<<l;
				if((q>s)&&(s>l)&&(l>z))cout <<"q"<<" "<<q<<endl <<"s"<<" "<<s<<endl<<"l"<<" "<<l<<endl<<"z"<<" "<<z;
				if((q>l)&&(l>z)&&(z>s))cout <<"q"<<" "<<q<<endl <<"l"<<" "<<l<<endl<<"z"<<" "<<z<<endl<<"s"<<" "<<s;
				if((q>l)&&(l>s)&&(s>z))cout <<"q"<<" "<<q<<endl <<"l"<<" "<<l<<endl<<"s"<<" "<<s<<endl<<"z"<<" "<<z;
				if((s>z)&&(z>q)&&(q>l))cout <<"s"<<" "<<s<<endl <<"z"<<" "<<z<<endl<<"q"<<" "<<q<<endl<<"l"<<" "<<l;
				if((s>z)&&(z>l)&&(l>q))cout <<"s"<<" "<<s<<endl <<"z"<<" "<<z<<endl<<"l"<<" "<<l<<endl<<"q"<<" "<<q;
				if((s>q)&&(q>z)&&(z>l))cout <<"s"<<" "<<s<<endl <<"q"<<" "<<q<<endl<<"z"<<" "<<z<<endl<<"l"<<" "<<l;
				if((s>q)&&(q>l)&&(l>z))cout <<"s"<<" "<<s<<endl <<"q"<<" "<<q<<endl<<"l"<<" "<<l<<endl<<"z"<<" "<<z;
				if((s>l)&&(l>z)&&(z>q))cout <<"s"<<" "<<s<<endl <<"l"<<" "<<l<<endl<<"z"<<" "<<z<<endl<<"q"<<" "<<q;
				if((s>l)&&(l>q)&&(q>z))cout <<"s"<<" "<<s<<endl <<"l"<<" "<<l<<endl<<"q"<<" "<<q<<endl<<"z"<<" "<<z;
				if((l>z)&&(z>q)&&(q>s))cout <<"l"<<" "<<l<<endl <<"z"<<" "<<z<<endl<<"q"<<" "<<q<<endl<<"s"<<" "<<s;
				if((l>z)&&(z>q)&&(s>q))cout <<"l"<<" "<<l<<endl <<"z"<<" "<<z<<endl<<"s"<<" "<<s<<endl<<"q"<<" "<<q;
				if((l>q)&&(q>z)&&(z>s))cout <<"l"<<" "<<l<<endl <<"q"<<" "<<q<<endl<<"z"<<" "<<z<<endl<<"s"<<" "<<s;
				if((l>q)&&(q>s)&&(s>z))cout <<"l"<<" "<<l<<endl <<"q"<<" "<<q<<endl<<"s"<<" "<<s<<endl<<"z"<<" "<<z;
				if((l>s)&&(s>z)&&(z>q))cout <<"l"<<" "<<l<<endl <<"s"<<" "<<s<<endl<<"z"<<" "<<z<<endl<<"q"<<" "<<q;
				if((l>s)&&(s>q)&&(q>z))cout <<"l"<<" "<<l<<endl <<"s"<<" "<<s<<endl<<"q"<<" "<<q<<endl<<"z"<<" "<<z;
				return 0;}}}}}
}