int main(int argc, char* argv[])
{
	char s1[251], s2[251];
	int j, k, a, b, c[252]={0};
	scanf("%s %s", s1, s2);
	a = strlen(s1);
	b = strlen(s2);
	int l=0;
	while(a>0||b>0){
		j = (a>0) ? s1[--a]-'0' : 0 ;
		k = (b>0) ? s2[--b]-'0' : 0 ;
		c[l] += j+k;
		c[l+1]=c[l]/10;
		c[l]=c[l]%10;
		l++;
	}
	while(c[l]==0 && l>0)
		l--;
	for(j=l; j>=0; j--)
		printf("%d",c[j]);
	printf("\n");
	return 0;
}