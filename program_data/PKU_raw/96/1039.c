int main()
{
	int i,j,k,l;
	char a[100],b[100],c[100];
	cin>>a;
    l=strlen(a);

    
    for(i=0;i<l;i++)
    {
    	b[i]=a[i]-'0';
    	c[i]=0;
    }
    if(l==1)
    {
    	cout<<0<<endl<<b[0]+48-48;
    	return 0;
    }
    c[l]=0;
    for(i=0;i<l;i++)
    {
    	c[i]=fabs(10*c[i]+b[i]);
    	c[i+1]=fabs(c[i]%13);
    	c[i]=fabs(c[i]/13);
    	
    }
    if(c[1]!=0){c[1]=c[1]+'0';cout<<c[1];}
    if(b[0]==1&&b[1]<3&&l<3) cout<<0;
    for(i=2;i<l;i++)
    {
    	c[i]=c[i]+'0';
    	cout<<c[i];
    }
    cout<<endl;
    cout<<c[l]+48-48;
    return 0;
}    