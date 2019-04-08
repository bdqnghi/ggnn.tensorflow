int main()
{
	int n,i,a,b,t,s;
	float x,y;
	cin>>n;
	cin>>a>>b;
	x=b*1.0/a;
	for (i=1;i<=n-1;i++)
	{cin>>t>>s;
	  y= s*1.0/t;
	  if (y-x>0.05) cout<<"better"<<endl;
	  if (x-y>0.05) cout<<"worse"<<endl;
	  if(x-y<=0.05&&y-x<=0.05) cout<<"same"<<endl;
	}
	return 0;
}
	    