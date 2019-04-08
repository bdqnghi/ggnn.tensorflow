int main(int argc, char* argv[])
{   int i=0;
	char a[255],b[255];
	gets(a);
	gets(b);
	for(i=0;a[i]&&b[i];i++){
		if(a[i]>='a'&&a[i]<='z')
	   a[i]=a[i]-32;
	 if(b[i]>='a'&&b[i]<='z')
		 b[i]=b[i]-32;
	 if(a[i]>b[i])
	 {printf(">");
	  break;
	 }
	 if(a[i]<b[i])
	 {printf("<");
	  break;
	 }
	}
	if(!a[i]&&!b[i])
	  printf("=");
	return 0;
}
