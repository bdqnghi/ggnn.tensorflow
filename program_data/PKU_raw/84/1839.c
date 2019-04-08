int main()
{
	int n,i,a,b,max=0,sec;
	int number[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&number[i]);
		if(number[i]>max){
			max=number[i];
		}
	}
		a=max;
		sec=max;
		for(i=0;i<n;i++){
			if((a-number[i])<sec&&(a-number[i]>0)){
					sec=a-number[i];
			}
		}
	
		b=a-sec;
		printf("%d\n",a);
		printf("%d\n",b);
		return 0;
	}