int main(int argc, char* argv[])
{
	char s1[255],s2[255];
	int i,j,a,b,k;
	scanf("%s %s",s1,s2);
	a=strlen(s1);
	b=strlen(s2);
	for(i=0;i<=(b-a);i++){
		for(j=i,k=0;j<i+a;j++){
			if(s1[k]==s2[j]){
				k++;}
		}
		if(k==a){printf("%d",i);
break;
		}
	}
			
	return 0;
}





