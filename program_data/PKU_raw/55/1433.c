int ctruth(char);
char itruth(int);
int main()
{
    int a,b,i,j,k,S=0,len;
	
	char m[32],n[32];
	    
	   cin>>a>>m>>b;
        len=strlen(m);	
	for(i=0;m[i]!='\0';i++)
		if(m[i]<=90&&m[i]>=65)m[i]+=32;
	for(i=0;i<=len-1;i++)
		S+=ctruth(m[len-i-1])*pow(a,i);
	   
	if(S<b)cout<<itruth(S);
	else{
	    k=S;
		for(i=0;k>=b;i++)
	{
		n[i]=itruth(k%b);
		k=k/b;
		}n[i]=itruth(k);
	  for(j=i;j>=0;j--)
		  cout<<n[j];}
      return 0;
}
 int ctruth(char a)
 {	
	 int t;
	 if(a>=48&&a<=57)t=a-48;
	 if(a>=97&&a<=122)t=a-87;
	 return t;
 }
 char itruth(int a)
 {
	 char c;
	 if(a>=0&&a<=9)c=a+48;
	 if(a>=10&&a<=35)c=a+55;
	 return c;
 }