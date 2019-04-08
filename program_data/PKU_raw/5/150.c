
int main()
{
	char z[2][650];
	double res;
	scanf("%lf",&res);
	scanf("%s",z[0]);
	scanf("%s",z[1]);
	int n=strlen(z[0]);
	int n2=strlen(z[1]);
	res=res*1.0*n;
	int h=0,refer=0;
	for(int i=0;i<n;i++)
	{
		if(z[0][i]!='A' && z[0][i]!='T' && z[0][i]!='G' && z[0][i]!='C') 
		{
			printf("error");
			refer=1;
			break;
		}
		 else if(z[1][i]!='A' && z[1][i]!='T' && z[1][i]!='G' && z[1][i]!='C')
		{
			printf("error");
			refer=1;
			break;
		}
		else if(z[0][i]==z[1][i])
		{
			h++;
		}
	}
	if(refer==0){
		if(n!=n2) printf("error");
		else if(h>=res)
		{
			printf("yes");
		}
		else
		{
			printf("no");
		}
	}
	return 0;
}
