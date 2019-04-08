	struct bac
{
	int num;
	int d;
	char a[5];
};
int main()
{
	struct bac abb[260];
    struct bac temp; 
	int i,j,b,k,len,n;
	char str[500],dd[6]={0};
	scanf("%d",&n);
	getchar();
	gets(str);
	len=strlen(str);
	b=len-n;
	for(i=0;i<260;i++){
		abb[i].d=1;
		for(j=0;j<5;j++)
			abb[i].a[j]='\0';
	}
	for(i=0;i<=b;i++){
		k=i;
		for(j=0;j<n;j++){
			abb[i].a[j]=str[k];
			k++;
		}
	//	abb[i].a[j+1]='\0';
	}
	for(i=0;i<b;i++){
		abb[i].d=0;
		for(j=i+1;j<=b;j++){
			if(strcmp(abb[i].a,abb[j].a)==0){
				abb[i].d++;
			}
		}
	}
	for(i=0;i<b;i++){
		for(j=0;j<b-1-i;j++){
			if(abb[j].d<abb[j+1].d){
				temp=abb[j];
				abb[j]=abb[j+1];
				abb[j+1]=temp;
				
			}
		}
	}
	if(abb[0].d>0){
		printf("%d\n",abb[0].d+1);
		for(i=0;i<b;i++)
			if (abb[i].d==abb[0].d)printf("%s\n",abb[i].a);
	}
	else printf("NO");
	return 0;
}