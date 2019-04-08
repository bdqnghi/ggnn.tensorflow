int main()
{
	int a=0,b=0,c=0,d=0,k=10;
	char name[6]=" zqsl";
	int weight[5]={0};
	int C1=0,C2=0,C3=0;
    int i, j;
	for(a=1;a<=5;a++)
		for(b=1;b<=5;b++)
			for(c=1;c<=5;c++)
				for(d=1;d<=5;d++)
				{
						C1=(a+b==c+d);
	                    C2=(a+d) > (b+c);
	                    C3=(a+c) < b;
					if(a!=b && a!=c && a!=d&& b!=c && b!=d && c!=d && c !=d && C1 && C2 && C3)
					{
					weight[1]=a;
					weight[2]=b;
					weight[3]=c;
					weight[4]=d;
					}
				
				}
	int a1=0;
	char a2=' ';
	for(i=0;i<=2;i++)
		for(j=1;j<=3-i;j++)
		{
			if(weight[j]<weight[j+1])
			{
				a1=weight[j];
				weight[j]=weight[j+1];
				weight[j+1]=a1;
				
				a2=name[j];
				name[j]=name[j+1];
				name[j+1]=a2;
			}
		
		}
		for(i=1;i<=4;i++)
		printf("%c %d\n",name[i],weight[i]*10);	
		
		return 0;

}

