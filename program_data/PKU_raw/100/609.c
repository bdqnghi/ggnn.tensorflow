int main()
{
	int zimu[26]={0};
	int i,a,z;
	int t=0;
	a='a';
	z='z';
	char str[301];
	gets(str);
        for (i=0;i<strlen(str);i++){
		if ((str[i]>=a)||(str[i]<=z)){
			zimu[str[i]-a]++;
		}
	}
		for (i=0;i<26;i++){
		   if (zimu[i]>0){
			   printf("%c=%d\n",a+i,zimu[i]);
			   t++;
			  }
		}
		if (t==0){
			printf("No\n");
		}
    return 0;
}