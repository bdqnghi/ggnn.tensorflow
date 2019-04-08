
char a[1000]={' '},b[1000]={' '};

int main()
{
	scanf("%s %s",a,b);
	int len;
	int wall,curr;
	len=strlen(a);
	for(wall=len-1;wall>0;wall--){
		for(curr=0;curr<wall;curr++){
			if(a[curr]>a[curr+1]){
				char temp;
				temp=a[curr];a[curr]=a[curr+1];a[curr+1]=temp;
			}
		}
	}
	len=strlen(b);
	for(wall=len-1;wall>0;wall--){
		for(curr=0;curr<wall;curr++){
			if(b[curr]>b[curr+1]){
				char temp;
				temp=b[curr];b[curr]=b[curr+1];b[curr+1]=temp;
			}
		}
	}
	if(strcmp(a,b)==0)printf("YES");
	else printf("NO");
	return 0;
}
