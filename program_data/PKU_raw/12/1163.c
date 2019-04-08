
int main(int argc, char* argv[])
{
	int s[16]={0};
	while(1){
		int i,j,count=0,flag=0;
		for(i=0;;i++){
			scanf("%d",&s[i]);
			if(s[i]==-1)
			{
				flag=1;
				break;
			}
			if(s[i]==0)
				break;
			count++;
		}
		if(flag)
			break;
		int num=0;
	
		for(i=0;i<count;i++){
			for(j=i;j<count;j++){
				if(s[i]==s[j]*2||s[j]==s[i]*2)
					num++;
			}
		}
		printf("%d\n",num);
	}
	return 0;
}

