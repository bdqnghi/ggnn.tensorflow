
int main()
{
	char s1[100],s2[100],s3[100],copy[100][100];
	gets(s1);
	gets(s2);
	gets(s3);

	int i,j,k;
	j=k=0;
    for (i=0;i<strlen(s1);i++){
		copy[j][k]=s1[i];
		if (s1[i+1]==' '||s1[i+1]=='\0'){
			copy[j][k+1]='\0';
			k=0;
			j++;
			i++;
			continue;
		}
		k++;
	}

	for (k=0;k<j;k++){
		if ((strcmp(copy[k],s2))==0){
			strcpy(copy[k],s3);
		}
	}
	printf("%s",copy[0]);
	for (k=1;k<j;k++){
		printf (" %s",copy[k]);
	}

	return 0;
}

