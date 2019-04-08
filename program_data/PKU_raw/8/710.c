int a,b;
void shuru();
void paixu1();
void paixu2();
int main()
{
shuru();
paixu1();
paixu2();




return 0;











}
void shuru()
{cin>>a>>b;
}
void paixu1()
{   int i,j,t;
    int c[100];
	for(i=0;i<a;i++)
		cin>>c[i];
	for(i=0;i<a-1;i++)
		for(j=0;j<a-1-i;j++)
		{ 
			if(c[j]>c[j+1])
			{
				t=c[j];
				c[j]=c[j+1];
				c[j+1]=t;
			
			
			
}
}
		for(i=0;i<a;i++)
			cout<<c[i]<<" ";
}
void paixu2()
{   int i,j,t;
    int c[100];
	for(i=0;i<b;i++)
		cin>>c[i];
	for(i=0;i<b-1;i++)
		for(j=0;j<b-1-i;j++)
		{ 
			if(c[j]>c[j+1])
			{
				t=c[j];
				c[j]=c[j+1];
				c[j+1]=t;
			
			
			
}
}
		for(i=0;i<b-1;i++)
			cout<<c[i]<<" ";
		cout<<c[b-1];
}