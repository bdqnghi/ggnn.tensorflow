
int main()
{
	char num1[251]={0},num2[251]={0};
	int i,j,l;
	int anw1[251]={0},anw2[251]={0};
	cin>>num1;
	cin>>num2;
	l=strlen(num1);
	for(j=0,i=strlen(num1)-1;i>=0;i--,j++)
			anw1[j]=num1[i]-'0';
	for(j=0,i=strlen(num2)-1;i>=0;i--,j++)
			anw2[j]=num2[i]-'0';
	for(i=0;i<=250;i++)
	{       
		    if(anw1[i]+anw2[i]<10)  
			{ 
				anw1[i]=anw1[i]+anw2[i];
				continue;
			}
			if(anw1[i]+anw2[i]>=10)
			{
			
				l=anw1[i]+anw2[i]-10;
				anw1[i]=l;
				anw1[i+1]++;
			    continue;
			}
	}
	for(i=250;i>=0;i--)
			if(anw1[i]!=0)
			{
				for(j=i;j>=0;j--)
					cout<<anw1[j];
				goto lable;
			}
	cout<<"0"<<endl;
lable:return 0;
}
