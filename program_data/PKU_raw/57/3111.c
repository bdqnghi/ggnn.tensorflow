int main()
{
    int n,i,j,result,m,k;
    char zfc[50],bz[50],z[50];
    char sz[4]="ing";
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",zfc);
        m=strlen(zfc);
		int p=0;
		int q=0;
        for(k=m-3;k<m;k++){
           bz[p]=zfc[k];
		   p++;
		}bz[p]='\0';
		result=strcmp(bz,sz);
        if(result==0)
        {
           for(j=0;j<m-3;j++)
           {
               z[q]=zfc[j];  
               q++;
		   }z[q]='\0';
           printf("%s\n",z);
		}
        else 
        {
           for(j=0;j<m-2;j++)
           {
               z[q]=zfc[j];  
               q++;
		   }z[q]='\0';
           printf("%s\n",z);
		}
    }
    return 0;
}