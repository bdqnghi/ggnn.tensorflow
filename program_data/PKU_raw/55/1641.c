int main()
{
int a,b,c=0;
char num1[200],num2[200];
cin>>a>>num1>>b;
for(int i=0;i<strlen(num1);i++)
{
	if(num1[i]>=(int)'A'&&num1[i]<=(int)'Z')
		num1[i]+=32;
}
for(int i=0;i<strlen(num1);i++)
{
	if(num1[i]>=(int)'a'&&num1[i]<=(int)'z') c+=((int)num1[i]-87)*pow((double)a,(double)(strlen(num1)-1-i));
	else if(num1[i]>=(int)'1'&&num1[i]<=(int)'9') c+=((int)num1[i]-48)*pow((double)a,(double)(strlen(num1)-1-i));
}
if(c==0) cout<<c<<endl;
else{
	int j=0;
for(;;)
{
	if(c==0) break;
	if(c%b<10) num2[j]=(char)(c%b+48);
	else num2[j]=(char)(c%b+55);
	c=c/b;
	j++;
}
for(int i=j-1;i>=0;i--)
{
	cout<<num2[i];
}
cout<<endl;
}
return 0;
}
