
int reverse(int num);

void main()
{
	int n,t;
	for(t=0;t<6;t++){
		scanf("%d",&n);
		printf("%d\n",reverse(n));
	}
}

int reverse(int num)
{
	int a[10],i,j,output=0;
	for(i=0;i<10;i++){
		a[i]=(int)(num/pow(10,i))%10;
	}
	for(i=9,j=0;i>=0;i--){
		if(a[i]==0){
			j++;
		}
		else break;
	}

	for(i=0;i<10;i++){
		output+=a[i]*pow(10,(9-j-i));
	}
	return output;
}
