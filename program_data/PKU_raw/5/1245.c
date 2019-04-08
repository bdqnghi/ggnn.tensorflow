int main(){
	int i,len,sum=0,e=0;
	float n;
	scanf("%f",&n);
	char a[600],b[600];
	scanf("%s",&a);
	scanf("%s",&b);
	len = strlen(a);
	if(strlen(a)!=strlen(b)) printf("error");
	else{
		for(i=0;i<len;i++){
			if(a[i]!=65 && a[i]!=71 && a[i]!=67 && a[i]!=84){printf("error");
            e=1;
			break;}
			if(b[i]!=65 && b[i]!=71 && b[i]!=67 && b[i]!=84){printf("error");
            e=1;
			break;
			}
		}
		if (e==0){
			for(i=0;i<len;i++)
			{if(a[i]==b[i]) sum++;
			}
			if (sum*1.0/len>n) {
			printf("yes");}
			else printf("no");
		}
	}

return 0;
}
