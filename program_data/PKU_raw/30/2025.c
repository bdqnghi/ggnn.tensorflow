int main()
{
	int n,i,k=0,p,s,d;
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		if(i%7!=0){
			d=0;
			for(p=i;p>0;p=p/10)
			{
				if((p-7)%10!=0)
					continue;
				if((p-7)%10 == 0){
				d=1;
				break;
				}
			}
		if(d!=1){
			s=i*i;	
			k+=s;
			}
		}
	}
	printf("%d",k);
	return 0;
}

