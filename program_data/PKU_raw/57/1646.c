int main(int argc, char* argv[])
{   int n,i;
    scanf("%d",&n);
	for(i=0;i<n;i++){
		char s[100];
		int k;
		scanf("%s",s);
		k=strlen(s);
		char s1[4],s2[3];
		s1[0]=s[k-3];s1[1]=s[k-2];s1[2]=s[k-1];s1[3]='\0';
		s2[0]=s[k-2];s2[1]=s[k-1];s2[2]='\0';
		if(strcmp(s1,"ing")==0){
			char s3[100];
			int j;
			for(j=0;j<k-3;j++){
				s3[j]=s[j];
			}
			s3[k-3]='\0';
			printf("%s\n",s3);
		}
		else if((strcmp(s2,"ly")==0)||(strcmp(s2,"er")==0)){
			char s4[100];
			int h;
			for(h=0;h<k-2;h++){
				s4[h]=s[h];
			}
			s4[k-2]='\0';
			printf("%s\n",s4);
		}
	}
	return 0;
}

