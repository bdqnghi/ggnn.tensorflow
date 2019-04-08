int main()
{
	int ass,bss,css;
	for(int a=1;a<4;a++){
		for(int b=1;b<4;b++){
			for(int c=1;c<4;c++){
				int as=(b>a)+(c==a);
				int bs=(a>b)+(a>c);
				int cs=(c>b)+(b>a);
				if(!(a<=b&&as<=bs||a<=c&&as<=cs||b<=c&&bs<=cs||b<=a&&bs<=as||c<=a&&cs<=as||c<=b&&cs<=bs)){
					ass=a,bss=b,css=c;
				}
			}
		}
	}
	if(ass>=bss&&bss>=css)cout<<"CBA"<<endl;
	if(ass>=css&&css>=bss)cout<<"BCA"<<endl;
	if(bss>=ass&&ass>=css)cout<<"CAB"<<endl;
	if(bss>=css&&css>=ass)cout<<"ACB"<<endl;
	if(css>=ass&&ass>=bss)cout<<"BAC"<<endl;
	if(css>=bss&&bss>=ass)cout<<"ABC"<<endl;
	return 0;
} 