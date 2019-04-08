int reverse(int digit);
int main()
{
	int i;
	int s;
	int t;
	for(i=0;i<6;i++)
	{
		scanf("%d",&s);
		t=reverse(s);
		printf("%d\n",t);
	}
	
	return 0;
}
int reverse(int digit)
{
	int result;
	int n[MAX],i,count;
	if(digit==0)
		return result=0;
	else if(digit==-0)
		return result=0;
	else if(digit>0)
	{
        i=count=0;
		while(digit>=1)
		{
			n[i]=digit%10;
			digit=digit/10;
			i++;
			count++;
		}
		result=0;
		for(i=0;i<count;i++)
		{
			result+=n[i]*(int)pow((double)10,(count-i-1));
		}
		return result;
	}
	else 
	{
		digit=abs(digit);
		i=count=0;
		while(digit>=1)
		{
			n[i]=digit%10;
			digit=digit/10;
			i++;
			count++;
		}
		result=0;
		for(i=0;i<count;i++)
		{
			result+=n[i]*(int)pow((double)10,(count-i-1));
		}
		result=-result;
		return result;
	}
}





		
		


