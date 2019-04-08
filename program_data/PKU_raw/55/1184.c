int main()
{
long num=0,reminder;
int a,b,i,j;
char figure1[100],figure2[100];
cin>>a;
getchar();
for(i=0;;i++)
{
	figure1[i]=getchar();
	if(figure1[i]>='a'&&figure1[i]<='z')
		figure1[i]=figure1[i]-87;
	else if(figure1[i]>='A'&&figure1[i]<='Z')
		figure1[i]=figure1[i]-55;
	else if(figure1[i]>=42&&figure1[i]<=57)
		figure1[i]=figure1[i]-'0';
	else
		break;
	num=num*a+figure1[i];
}
reminder=num;
cin>>b;
for(j=0;;j++)
{
	if(reminder%b>=10)
		figure2[j]=reminder%b+55;
	else 
		figure2[j]=reminder%b+'0';
	reminder=reminder/b;
	if(reminder==0)
		break;	
}
for(;j>=0;j--)
	cout<<figure2[j];
cout<<endl;
return 0;
}
