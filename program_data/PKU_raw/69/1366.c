int max(int x, int y)
{
	if(x>=y) return x;
	else return y;
}
int trans(char x) 
{ 
	int y; 
    int s[10]={'0','1','2','3','4','5','6','7','8','9'}; 
    int i; 
    for(i=0;i<10;i++) 
	{
		if(x==s[i]) 
		{ 
			y=i; 
			break; 
		} 
	} 
    return y; 
} 
int main()
{
	char a[251]={'\0'},b[251]={'\0'};
	int A[250]={0},B[250]={0},C[251]={0};
	int i,j=0,x,y,z,count=0;
	scanf("%s %s",a,b);
	for(i=250;i>=0;i--)
	{
		if(a[i]!='\0')
		{
			x=i;
			break;
		}
	}
	for(i=250;i>=0;i--)
	{
		if(b[i]!='\0')
		{
			y=i;
			break;
		}
	}
	z=max(x,y);
	for(i=x;i>=0;i--)
	{
		A[j]=trans(a[i]);
		j++;
	}
	j=0;
	for(i=y;i>=0;i--)
	{
		B[j]=trans(b[i]);
		j++;
	}
	for(i=0;i<=z;i++)
	{
		C[i]+=A[i]+B[i];
		if(C[i]>=10)
		{
			C[i]=C[i]-10;
		    C[i+1]+=1;
		}
	}
	for(i=0;i<=z+1;i++)
	{
		if(C[i]!=0)
		{
			count++;
			break;
		}
	}
	if(count==1)	
		for(i=z+1;i>=0;i--)
	{
		if(C[i]!=0)
		{
			for(j=i;j>=0;j--)
		    printf("%d",C[j]);
			break;
		}
	}
	else
		printf("0");
	return 0;
}
