int main()
{	int i,j;
	char d,a[100][100]={0},b[100]={0},c[100]={0};
	j=0;for(i=0;;){d=getchar();if(d=='\n')break;else if((d>64&&d<91)||(d>96&&d<123)){*(a[j]+i)=d;i++;}else {i=0;j++;}}
	for(i=0;;){d=getchar();if(d=='\n')break;if((d>64&&d<91)||(d>96&&d<123)){*(b+i)=d;i++;}}
	for(i=0;;){d=getchar();if(d=='\n')break;if((d>64&&d<91)||(d>96&&d<123)){*(c+i)=d;i++;}}
	if(strcmp(a[0],b)==0)printf("%s",c);else printf("%s",a[0]);
	for(j=1;;j++){if(*a[j]==0){printf("\n");break;}else {printf(" ");if(strcmp(a[j],b)==0)printf("%s",c);else printf("%s",a[j]);}}
    return 0;}
