int main()
{ 
    int i,l,n;
    scanf("%d",&n);
    char c[2000],*p;
    for(i=0;i<n;i++){
        scanf("%s",c);
        l=strlen(c);
        p=c;
        for(p=c;p<c+l;p++){
             if(*p=='A'){printf("T");}
             if(*p=='T'){printf("A");}
             if(*p=='G'){printf("C");}
             if(*p=='C'){printf("G");}
        }
        printf("\n");
    }
	return 0;
}