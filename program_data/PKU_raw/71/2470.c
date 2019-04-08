int main()
{
	int  y[200],m,s=0,n,i,p=0,a[200],b[200],q;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	scanf("%d %d %d",&y[i],&a[i],&b[i]);
	}
for(i=0;i<n;i++){
		
			for(m=1;m<a[i];m++)
			{
				if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
				{
					s+=31;
				}
				else if(m==2)
				{

                    if((y[i]%400==0)||((y[i]%100!=0)&&(y[i]%4==0)))
					{
						s+=29;
					}
					else
					{
						s+=28;
					}
				}
				else
				{
					s+=30;
				}
			}
for(m=1;m<b[i];m++)
			{
				if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
				{
					p+=31;
				}
				else if(m==2)
				{

                    if((y[i]%400==0)||((y[i]%100!=0)&&(y[i]%4==0)))
					{
						p+=29;
					}
					else
					{
						p+=28;
					}
				}
				else
				{
					p+=30;
				}
}
q=s-p;
if(q%7==0){
	printf("YES\n");
}
else{
	printf("NO\n");
}
	s=0;p=0;
}
	return 0;
}


	

	


	

	
