int main()
{
    char n[100],m[100];
    int i,j,a,b,num=0,x[100],y[100];
    cin>>a>>n>>b;
    for(i=0;i<strlen(n);i++)
    {
	if(n[i]>='A' && n[i]<='Z')x[i]=n[i]-'A'+10;
	else if(n[i]>='a' && n[i]<='z')x[i]=n[i]-'a'+ 10;
	else if(n[i]>='0' && n[i]<='9')x[i]=n[i]-'0';
	num=num*a+x[i];	
    }         
    for(i=0;;i++)
   {
	y[i]=num%b;
	num=(num-y[i])/b;
	if(y[i]>=0 && y[i]<=9)
	     m[i]=y[i]+'0';
	else m[i]=y[i]-10+'A';
	if (num == 0)	break;
   }                                  
    for(j=i;j>=0;j--)
   {
	cout<<m[j];           
   }
	return 0;
}