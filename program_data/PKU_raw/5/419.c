int f(char x,char y)
{
    if(x==y) return 1;
   else return 0;
}

int main()
{
	double r,x;
	scanf("%lf",&r);
	char str1[1000],str2[1000];
	scanf("%s\n",str1);
	scanf("%s",str2);
	int len1,len2;
	int i,count=0;
	len1=strlen(str1);
	len2=strlen(str2);
	if(len1!=len2){
		printf("error");
		return 0;
	}
	for(i=0;str1[i]!=0;i++){
		if((str1[i]!='A' && str1[i]!='C' && str1[i]!='G' && str1[i]!='T') || (str2[i]!='A' && str2[i]!='C' && str2[i]!='G' && str2[i]!='T')){
			printf("error");
			return 0;
		}
	}
	for(i=0;str1[i]!=0;i++){
	     if(f(str1[i],str2[i])==1){
				count++;
			}
		}
	x=1.0*count/len1;
	if(x>r){
		printf("yes");
	}
	else{
		printf("no");
	}
	return 0;
}
