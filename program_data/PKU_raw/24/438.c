void main()
{
	int i,j,k,p;
	char s[1000],b[1000][50];
	char *m,*r;
	gets(s);
	for(m=s,j=0;*m!='\0';){
		for(r=m,i=0;*r!=' '&&*r!='\0';r++,i++)
			*(*(b+j)+i)=*r;
		*(*(b+j)+i)='\0';
		j++;
		m=r;
	    if(*m==' ') m++;
	}
	for(i=0;i<j;i++){
		for(k=0,p=0;k<j;k++){
			if(strlen(*(b+i))>=strlen(*(b+k)))
				p++;
		}
		if(p==j){ printf("%s\n",*(b+i));break;}
	}
	for(i=0;i<j;i++){
		for(k=0,p=0;k<j;k++){
			if(strlen(*(b+i))<=strlen(*(b+k)))
				p++;
		}
		if(p==j){ printf("%s\n",*(b+i));break;}
	}
}


		



