int main(){
	int i,l;
	char c[1000];
	gets(c);
	l=strlen(c);
	int a;
	a=0;
	for(i=0;i<l;i++)
		if(c[i]>=97&&c[i]<=122)
			c[i]=c[i]-32;
	for(i=0;i<l;i++)
	{if(c[i]==c[i+1])
			a++;
	else 
	{cout<<"("<<c[i]<<","<<a+1<<")";
	a=0;}}

	
				
			
			return 0;
}
