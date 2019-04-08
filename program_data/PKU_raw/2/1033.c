

int main(int argc, char* argv[])
{
	int m,i,j,len,max;
	int id[1000],b[26]={0};
	char a[100][27],name;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d %s",&id[i],a[i]);
		len=strlen(a[i]);
        for(j=0;j<len;j++){
			b[a[i][j]-'A']++;
		}
	}//??????????????????????????
	max=b[0];name='A';
	for(j=1;j<26;j++){
		if(b[j]>max){
		max=b[j];
		name=j+'A';
		}
	}
	printf("%c\n%d\n",name,max);//????????????????
	for(i=0;i<m;i++){
		len=strlen(a[i]);
		for(j=0;j<len;j++){
		if(a[i][j]==name)
		{strcpy(a[i],"shuchu");
		break;}//????????????
		}
	}
	for(i=0;i<m;i++){
	if(strcmp(a[i],"shuchu")==0)
		printf("%d\n",id[i]);//???????????
	}


	return 0;
}

