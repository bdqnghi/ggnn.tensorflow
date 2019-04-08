int main(){
	double r,k=0,p;
	int i,q=1;
	char s[600],s1[600];
	scanf("%lf\n",&r);
	scanf("%s",s);
	scanf("%s",s1);
for(i=0;i<strlen(s);i++)
	{
	if((s[i]!='A'&&s[i]!='T'&&s[i]!='C'&&s[i]!='G'&&s[i]!='A')||(s1[i]!='T'&&s1[i]!='C'&&s1[i]!='G'&&s1[i]!='A')){
			printf("error");
               q=0;
			   break;
	}
}
if(q==1){
    for(i=0;i<strlen(s);i++)
	{
		if(s[i]==s1[i])
			k++;
	}
	p=1.0*k/strlen(s);
	if(p>r)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
}
  return 0;
}
