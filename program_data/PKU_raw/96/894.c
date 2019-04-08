int lenth,num[110];
void function(int i);
int main()
{   
	char a[110],s;
	int i=0,j=0,special;
	while((s=cin.get())!='\n')
	{a[i]=s;i++;}lenth=i-1;
	for(i=0;i<=lenth;i++)
		num[i]=a[i]-'0';
	//??????int??
	if(lenth<1)
		{special=num[0];
	cout<<special/13<<endl;
	cout<<special%13;}
	else if(lenth==1)
	    {special=num[0]*10+num[1];
	cout<<special/13<<endl;
	cout<<special%13;}
	else
	function(0);
	

	
	return 0;
}
int ans[110],yu; //???lenth-1
void function(int i)
{  if(i<=lenth-1){
   ans[i]=(10*num[i]+num[i+1])/13;
   num[i+1]=(10*num[i]+num[i+1])%13;
   function(i+1);}
   else 
   {if(ans[0]!=0)cout<<ans[0];
	for(i=1;i<=lenth-1;i++)
	    cout<<ans[i];
    cout<<endl;
    yu=num[i];
	cout<<yu;
   }
   
}

