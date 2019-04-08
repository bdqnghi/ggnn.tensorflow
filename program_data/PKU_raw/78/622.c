int main(){
	int z,q,s,l;
	for(z=1;z<=5;++z)
		for(q=1;q<=5;++q)
			for(s=1;s<=5;++s)
				for(l=1;l<=5;++l)
				{	if((s+l==z+q)+(z+l>s+q)+(z+s<q)==3)
	{
	   int a[4]={10000*z+'z',10000*q+'q',10000*s+'s',10000*l+'l'};
	int i,j,t;
	for(j=0;j<=3;j++)
		for(i=0;i<=3-j;i++)
			if(a[i]<a[i+1])
			{t=a[i];a[i]=a[i+1];a[i+1]=t;}
	 int b[4]={a[0]/1000,a[1]/1000,a[2]/1000,a[3]/1000};
	    cout<<(char)(a[0]%10000)<<" "<<b[0]<<'\n'
	        <<(char)(a[1]%10000)<<" "<<b[1]<<'\n'
	        <<(char)(a[2]%10000)<<" "<<b[2]<<'\n'
	        <<(char)(a[3]%10000)<<" "<<b[3]<<'\n';
	break;
	}
		       }

    return 0;

}
