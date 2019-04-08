int main()
{
	int r,t=1,i=0,n,k;
    char a[1000];
	cin.getline(a,1000);
	for(i=1;a[i-1]!='\0';i++)
	{
		if(a[i-1]==a[i]||a[i-1]-a[i]==32||a[i-1]-a[i]==-32)
			t++;
		else
		{
			cout<<"("<<((int)a[i-1]<97?a[i-1]:(char)(a[i-1]-32))<<","<<t<<")";
			t=1;
		}


	}
	
 	return 0;
}
