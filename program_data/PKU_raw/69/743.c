int main()
{
    char a1[251],b1[251],a[251],b[251],str[252];
    int i,prime=0;
    cin>>a1>>b1;
    memset(a,'\0',sizeof(a));
    memset(b,'\0',sizeof(b));
    int l,l1=strlen(a1),l2=strlen(b1);
    if(l1==1 && a1[0]=='0' && l2==1 && b1[0]=='0') cout<<0;
    for(i=0;i<l1;i++)
    {
    	a[l1-i-1]=a1[i];
    }
    for(i=0;i<l2;i++)
    {
    	b[l2-i-1]=b1[i];
    }
    for(i=strlen(a)-1;;i--)
    {
    	if(a[i]!='0') break;
    	else { a[i]='\0'; l1--; }
    }
    for(i=strlen(b)-1;;i--)
    {
        if(b[i]!='0') break;
        else { b[i]='\0'; l2--; }
    }
    if(l1>l2) l=l1;
        else l=l2;
    for(i=l1;i<l;i++)
    	a[i]='0';
    for(i=l2;i<l;i++)
    	b[i]='0';
    for(i=0;i<l;i++)
    {
    	int t=(int)(a[i]-'0')+(int)(b[i]-'0')+prime;
    	if(t>9) { t=t-10; prime=1; }
    	else prime=0;
    	str[i]=(char)(t+'0');
    }
    if(prime) { str[i]='1'; l++; }
    for(i=l-1;i>=0;i--)
    	cout<<str[i];
	return 0;
}





