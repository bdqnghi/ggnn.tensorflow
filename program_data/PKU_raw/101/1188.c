
int main()
{
	int a,b,c;
	int ra,rb,rc;
	char result[4];
	for(a=0;a<3;a++){
		for(b=0;b<3;b++){
			for(c=0;c<3;c++){
				ra=rb=rc=0;

				ra=(b>a)+(c==a);
				rb=(a>b)+(a>c);
				rc=(c>b)+(b>a);

				if( (a>b&&ra>=rb) || (a>c&&ra>=rc) || (b>a&&rb>=ra) || (b>c&&rb>=rc) || (c>a&&rc>=ra) || (c>b&&rc>=rb) || (a==b&&ra!=rb) || (b==c&&rb!=rc) || (a==c&&ra!=rc) )//?????
					continue;
				if(a!=b&&b!=c&&a!=c){
					result[a]='A';
					result[b]='B';
					result[c]='C';
					result[3]='\0';
					cout<<result<<endl;
				}
				else if(a==b){
					if(c<a)  cout<<"CAB"<<endl;
					else     cout<<"ABC"<<endl;
			    }
				else if(b==c){
					if(a<b)  cout<<"ABC"<<endl;
					else     cout<<"BCA"<<endl;
			    }
				else if(a==c){
					if(b<a)  cout<<"BAC"<<endl;
					else     cout<<"ACB"<<endl;
			    }
			}
		}
	}
	//while(1);
	return 0;
}