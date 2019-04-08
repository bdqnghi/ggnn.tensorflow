int main()
{
int m1=0;
int m2=0;
int i=1;
int mtemp;
char ch;

do{

	scanf("%d",&mtemp);
	if(mtemp>m1)
	{   m2=m1;
	m1=mtemp;
	}
	else if(mtemp>m2&&mtemp<m1)
	{
		m2=mtemp;
	}

	ch=getchar();
	i=i++;
	
}while(ch==',');

if(m1==m2||m2==0||i==2)
{printf("No");
}
else 
printf("%d",m2);

return 0;

}