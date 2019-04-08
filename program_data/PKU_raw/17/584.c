char x[110]={'\0'},y[110]={'\0'};
int i,j,k,l;
int f()
{
	for(i=0;i<l-1;i++)
			{
				for(j=1;i+j<l;j++)
				{
					if(x[i]=='('&&x[i+j]==' ') {continue;}         //???????????
					if(x[i]=='('&&x[i+j]=='(') {break;}          //?????????????
					if(x[i]=='('&&x[i+j]==')') {x[i]=' ';x[i+j]=' ';}      //??????????????????
				}
			}
	k++;
	if(k==l) {return 0;}
	if(k!=l) {f();}
}
int main()
{
	while(cin.getline(x,110,'\n'))
	{
		strcpy(y,x);
		l=strlen(x);
		for(i=0;i<l;i++)
			{
				if(x[i]!='('&&x[i]!=')')  {x[i]=' ';}
			}        //?????????????
			k=0;
			f();
			cout<< y <<endl;  //????????
		for(i=0;i<l;i++)     //???????
		{
			if(x[i]=='(') {cout<<"$";}
			if(x[i]==')') {cout<<"?";}
			if(x[i]==' ') {cout<<" ";}
		}
		cout<<endl;
	}
	return 0;
}