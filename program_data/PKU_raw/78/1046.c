int main()
{
	int a,b,c,d,i,j;
	int age[4];
	char name[5]={'z','q','s','l'};

	for(a=10;a<=50;a+=10)
	{
		for(b=10;b<=50;b+=10)
		{
			for(c=10;c<=50;c+=10)
			{
				d=a+b-c;
				if(((a+d)>(b+c))&&((a+c)<b)&&(d<=50))
				{
					age[0]=a;
					age[1]=b;
					age[2]=c;
					age[3]=d;
				}
			}
		}
	}
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=2;j++)
		{
			if(age[j]<age[j+1])
			{
				swap(age[j],age[j+1]);
			    swap(name[j],name[j+1]);
			}
		}
	}
	for(i=0;i<4;i++)
		cout<<name[i]<<" "<<age[i]<<endl;
	return 0;
}