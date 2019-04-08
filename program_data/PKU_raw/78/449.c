int main()
{ 
	int z,q,s,l,t;
	char a[5];
	int b[5];
	for(z=10;z<=50;z=z+10)
		for(q=10;q<=50;q=q+10)
			for(s=10;s<=50;s=s+10)
				for(l=10;l<=50;l=l+10)
					if((z+q==s+l)&&(z+l>s+q)&&(z+s<q)){
	b[1]=z;b[2]=q;b[3]=s;b[4]=l;
	a[1]='z';a[2]='q';a[3]='s';a[4]='l';
	for(int i=1;i<=4;i++)
		for(int j=1;j<=3;j++)
			if(b[j]<b[j+1])
			{
				t=b[j];b[j]=b[j+1];b[j+1]=t;
				t=a[j];a[j]=a[j+1];a[j+1]=t;
			}
	for(int i=1;i<=4;i++)
		cout << a[i] << " " << b[i] << endl;
					}

	return 0;
}
