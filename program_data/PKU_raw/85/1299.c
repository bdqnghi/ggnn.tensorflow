int main()
{
    int c;
    int j;
    int i;
    int n;

    int t[100][20];
    char s[100][20];
    scanf ("%d",&n);
    for (i=0;i<n;i++){
        scanf ("%s",s[i]);
    }
    for (i=0;i<n;i++){
        for (j=0;s[i][j]!='\0';j++){
            t[i][j]=s[i][j];
        }
    }
    for (i=0;i<n;i++){
        if (t[i][0]>=48&&t[i][0]<=57){
            printf ("no\n");
            
        }else {
            for (j=0;s[i][j]!=0;j++){
                if (t[i][j]>=32&&t[i][j]<=47){
                    c=1;
                    break;
               } else if (t[i][j]>=58&&t[i][j]<=64){
                    c=1;
                    break;
                }else if (t[i][j]>=91&&t[i][j]<=94){
                    c=1;
                    break;
                }else if (t[i][j]>=123&&t[i][j]<=126){
                    c=1;
                    break;
                }else if (t[i][j]==96){
                    c=1;
                    break;
                    
               }else {
                    c=0;
               }
            
            }
            if (c==1){
                printf ("no\n");
            }else {
                printf ("yes\n");
            }
        }
    }
	

	
	return 0;
}
