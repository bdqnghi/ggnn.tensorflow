int main()
{
char zfc[1000],tmp;
int n,i,t,e,f;

scanf("%d",&n);
for(i=0;i<n;i++){

scanf("%s",zfc);
for(t=0;zfc[t]!='\0';t++){f=0;
	for(e=0;1;e++){
		if(zfc[t]==zfc[e]&&t!=e){
		break;}
		else if(e==strlen(zfc)){
		printf("%c\n",zfc[t]);
		f=1;
		break;
		}
		
	}
if(f==1){break;}
}
if(f==0){
printf("no\n");}

}

	return 0;
}
