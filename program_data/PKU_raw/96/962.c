
 main()
{
	int num[101]={0},digit,ans[100],left,head,tail,answer_isnt_zero=0;
	for (int i=0;i<100;i++)
		ans[i]=-1;
	char ch[101];
	scanf("%s",ch);
	digit=strlen(ch);
	for (int i=0;i<digit;i++)
		num[i]=(int)ch[i]-48;
	for (int i=0;i<digit;i++){
		ans[i]=num[i]/13;
		num[i+1]+=(num[i]%13)*10;
	}
	for (tail=99;ans[tail]==-1;tail--)
		;	
	for (head=0;ans[head]==0;head++)
		;
	for (int i=head;i<=tail;i++){
		printf("%1d",ans[i]);
		answer_isnt_zero=1;
	}
	if (!answer_isnt_zero)
		printf("0");
	printf("\n");
	printf("%d\n",num[digit]/10);
}