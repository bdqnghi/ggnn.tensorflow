int main(){
	int i,x=0;
	double n;
	char su[500],zu[500];
	scanf("%lf %s %s",&n,su,zu);
if(strlen(su)!=strlen(zu))
{printf("error");return 0;}
for(i=0;i<strlen(su);i++){
if((su[i]!='A' && su[i]!='T' && su[i]!='G' && su[i]!='C') || (zu[i]!='A' && zu[i]!='T' && zu[i]!='G' && zu[i]!='C'))
{printf("error");return 0;}
if(su[i]==zu[i])
x++;
}
if(x/(1.0*strlen(su))>n)
{printf("yes");return 0;}
printf("no");
	return 0;
}