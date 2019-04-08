int main()
{int a,b,c;
for(a=1;a<=3;a++)
	for(b=1;b<=3;b++)
		for(c=1;c<=3;c++)
{if(((a<b)+(a==c)+a==(b<a)+(c<a)+b)&&((a<b)+(a==c)+a==(b<c)+(a<b)+c))
{if((a>b)&&(b>c))cout<<"CBA"<<endl;
{if((a>c)&&(c>b))cout<<"BCA"<<endl;
{if((b>a)&&(a>c))cout<<"CAB"<<endl;
{if((b>c)&&(c>a))cout<<"ACB"<<endl;
{if((c>a)&&(a>b))cout<<"BAC"<<endl;
if((c>b)&&(b>a))cout<<"ABC"<<endl;}}}}}}
return 0;
}