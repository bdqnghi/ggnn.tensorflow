int same(char*p,char*q){
	int a,b;
		for(a=0;*(q+a)!='\0';){
			for(b=0;*(q+a+b)==*(p+b);b++)
			{
				if (*(p+b+1)=='\0')
				{
					return a;
				}
			}
			a++;
		}
		return 0;
}

int main(){
	char w[2000];//??
	char s[200];
	scanf("%s %s",s,w);
	printf("%d",same(s,w));
	return 0;
}
