int main()
{
	int i,j,k,t,a,b,c,num[3];
	char f[3]={'A','B','C'};
	char p;
	for(a=1;a<4;a++)
		for(b=1;b<4;b++)
			if(a!=b){
				c=6-a-b;
				i=(b>a)+(c==a);
				j=(a>b)+(a>c);
				k=(c>b)+(b>a);
				if(a+i==3&&b+j==3&&c+k==3){
					num[0]=a;
					num[1]=b;
					num[2]=c;
					for(i=1;i<3;i++)
						for(j=0;j<3-i;j++)
							if(num[j]>num[j+1]){
								t=num[j];
								num[j]=num[j+1];
								num[j+1]=t;
								p=f[j];
								f[j]=f[j+1];
								f[j+1]=p;}}}
	for(i=0;i<3;i++)
		cout<<f[i];
	return 0;
}
