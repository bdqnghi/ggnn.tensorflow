char c[45];
int main()
{  
	int n,cnt=0,s=0;
	cin>>n;
	while(cnt<=n)
	{  
		while(1){
		memset(c,0,sizeof(c));
		cin>>c;//??????
		cnt++;
	  if(cnt==1||cnt==n){if(cnt==1) {cout<<c;s=strlen(c);}
	  							else cout<<' '<<c<<endl;}
	  else {s+=strlen(c)+1;
			if(s>80){cout<<endl<<c;break;}
		else cout<<' '<<c;}
		}
		s=strlen(c);
	}
		
}