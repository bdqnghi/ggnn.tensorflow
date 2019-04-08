
int main()
{
	int i,j,a,h=0,k=0,m=0;
	char str[500];
	gets(str);
	a=strlen(str);
	for(j=1;j<(a-1);j++){
		for(i=0;(i+j)<a;i++){
			if((j-1)%2==0){
				for(k=0;k<=(j-1)/2;k++){
					if(str[i+k]!=str[i+j-k])
						h=1;
				}
			}
			else{
               for(k=0;k<=j/2;k++){
					if(str[i+k]!=str[i+j-k])
						h=1;
			   }
			}
			if(h==0){
			for(h=0;h<j;h++)
				printf("%c",str[i+h]);
				printf("%c\n",str[i+j]);
			}
			h=0;
		}
	}

	return 0;
}