

int main()
{
	int n,p,num[255];
	char ch,boy;
	num[0]=0;
	scanf("%c",&boy);
	for(n=p=1;p>0;n++){
		scanf("%c",&ch);
		if(ch==boy){
			num[p]=n;
			p++;
		}
		else{
			printf("%d %d\n",num[p-1],n);
			p--;
		}
	}
	return 0;
}
