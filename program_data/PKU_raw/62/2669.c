int main()
{
 	char zfc[1000],s[1000];
 	int length,i,num=0;
 	gets(zfc);
 	length=strlen(zfc);
 	for(i=0;i<length;i++){
		if(i==0){
			s[num]=zfc[i];
			num++;
			}
		else{
			if(zfc[i]!=' '||(zfc[i]==' '&&zfc[i-1]!=' '))
			{
				s[num]=zfc[i];
				num++;
				}
			}
		}
	for(i=0;i<num;i++){
		printf("%c",s[i]);
		}
    return 0;
}