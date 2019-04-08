int main(){
	int all,i,p,day,o,count;
	char name[101][101],prename[101][101];
	count=0;
	scanf("%d",&all);
	for(i=1;i<=all;i++){scanf("\n");for(p=1;p<=all;p++){scanf("%c",&name[i][p]);}}
	scanf("%d",&day);
	for(o=1;o<day;o++){for(i=1;i<=all;i++){for(p=1;p<=all;p++){prename[i][p]=name[i][p];}}
	for(i=1;i<=all;i++){for(p=1;p<=all;p++){if(name[i][p]=='.'){if(prename[i][p+1]=='@'||prename[i][p-1]=='@'||prename[i+1][p]=='@'||prename[i-1][p]=='@'){name[i][p]='@';}}}}}
	for(i=1;i<=all;i++){for(p=1;p<=all;p++){if(name[i][p]=='@'){count++;}}}
	printf("%d",count);
return 0;
}