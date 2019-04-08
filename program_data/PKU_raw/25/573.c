void main()
{
	char a[105]={"1"},temp;
	int s,b[105],i,j,k;
	scanf("%d",&s);
	while(s--){
		for(i=0;a[i]!=0;i++){
			b[i]=(a[i]-'0')*2;
		}
		for(j=0;j<i;j++){
			if(j==i-1&&b[j]>=10){
				b[j]-=10;
				b[j+1]=1;
				i++;
				break;
			}
			if(b[j]>=10){
				b[j]-=10;
				b[j+1]++;
			}
		}
		for(j=0;j<i;j++)a[j]=b[j]+'0';
		a[j]=0;
	}
	for(j=0,k=i-1;j<k;j++,k--){
		temp=a[j];
		a[j]=a[k];
		a[k]=temp;
		}
	puts(a);
}