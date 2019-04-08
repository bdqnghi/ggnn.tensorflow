int main()
{
	long double a,length;
//ab????n?????????????i?????
    char s[256],s1[256];
    long int m,i,b,n=0,w,j;
//w?????,j?????????
    cin>>a>>s>>b;
    length=strlen(s);
    for(i=0;i<length;i++)
{
    	m=s[i];
    	if(((m<=57)&&(m>=48))==1) m=m-48;
    	if(((m<=122)&&(m>=97))==1) m=m-87;
    	if(((m<=90)&&(m>=65))==1) m=m-55;
    	n=n+m*pow(a,length-i-1);
    }
    for(i=0;i<=256;i++)
{
    	w=abs(n/b);
    	if((n-(w*b))<=9) s1[i]=(n-(w*b))+48;  
//????????
    	else s1[i]=(n-(w*b))+55;
    	n=w;
    	if(w==0) 
         {
           j=i;break;
         }
//????
    	}
    for(i=j;i>=0;i--)
//????
    	cout<<s1[i];
    return 0;
}

