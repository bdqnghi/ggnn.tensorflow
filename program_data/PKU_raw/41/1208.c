int main()
{
	for(int a=1;a<=5;a++)
		for(int b=1;b<=5;b++)
			for(int c=1;c<=5;c++)
				for(int d=1;d<=5;d++)
					for(int e=1;e<=5;e++){
						if(a==b||a==c||a==d||a==e)continue;
						if(b==c||b==d||b==e)continue;
						if(c==d||c==e)continue;
						if(d==e)continue;
						if(e==2||e==3)continue;
						int a1=(e==1);
						int b1=(b==2);
						int c1=(a==5);
						int d1=(c!=1);
						int e1=(d==1);
						if((a==1||a==2)!=(a1==1))continue;
						if((b==1||b==2)!=(b1==1))continue;
						if((c==1||c==2)!=(c1==1))continue;
						if((d==1||d==2)!=(d1==1))continue;
						if((e==1||e==2)!=(e1==1))continue;
						cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e<<endl;
						break;
					}
	return 0;
}