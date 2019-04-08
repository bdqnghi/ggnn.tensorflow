struct ma{
	char str[505];
	int f;
};

int main()
{   struct ma stu[505];
    struct ma temp;
    char str1[505];
	int i,j=0,m=0,a,b=0,n,l,k,t,flag=0;
	scanf("%d\n",&n);
    gets(str1);
    l=strlen(str1);
	for(i=0;i<=l-n;i++){
		stu[i].f=0;
		for(j=i,k=0;j<i+n;j++,k++){
			stu[i].str[k]=str1[j];
		}
		stu[i].str[n]='\0';
		for(t=0;t<i;t++){
			if(strcmp(stu[t].str,stu[i].str)==0)
				flag=1;
		}
		if(flag==0){
		for(a=0;a<l;a++){
		if(str1[a]==stu[i].str[b]){
		   b=b+1;
			}
		else{	
			if(b!=0)
				a=a-1;
			b=0;
		}
		if(b==n){
		stu[i].f++;
		b=0;
		a=a-n+1;
		}
		}
		}
	b=0;
	flag=0;
	} 
	for(j=1;j<l-n+1;j++){
		for(i=0;i<l-n+1-j;i++){
			if(stu[i].f<stu[i+1].f){
				temp=stu[i];
				stu[i]=stu[i+1];
				stu[i+1]=temp;
			}
		}
	}
  if(stu[0].f==1)
	  printf("NO");
  else{
	printf("%d\n",stu[0].f);
	printf("%s",stu[0].str);
		for(j=1;j<l-n+1;j++){
			if(stu[j].f==stu[0].f)
				printf("\n%s",stu[j].str);
			else
				break;
		}
		}



	return 0;
}
