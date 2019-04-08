int main()
{
	int i=0,j=0,k,len,p,q,p1,q1,t;
	char b[1000];
	cin>>b;
	if((b[0]>='a'&&b[0]<='z')||(b[0]>='A'||b[0]<='Z'))
	{
		 len=strlen(b);k=0;
		 for(i=0;i<len;i++)
		 {   p=b[i]-'a';q=b[i]-'A';//cout<<"ok"<<endl;
			 for(j=0;j<len-i;j++)
			 {   p1=b[i+j]-'a';q1=b[i+j]-'A';
                if(p==p1||p==q1||q==p1||q==q1)
				  k++;
				else  {
					
					if(b[i]>='a'&&b[i]<='z')
					{cout<<"(";
					printf("%c",b[i]-'a'+'A');
					cout<<","<<k<<")";}
					else
					   cout<<"("<<b[i]<<","<<k<<")";
					k=0;break;}
			 }if(i+j-1==len-1)break;
			 else i=i+j-1;
			 //cout<<i<<endl;
		 }
		 if(b[i]>='a'&&b[i]<='z')
					{cout<<"(";printf("%c",b[i]-'a'+'A');cout<<","<<k<<")";}
					else
					cout<<"("<<b[i]<<","<<k<<")";
		 
	}
	else cout<<b<<endl;
  return 0;
}
