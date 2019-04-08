int main()
{
    int a[300],max,min=-1,i,j,temp;
    char c;
    i=0;
    while (c!='\n')
     {scanf("%d%c",&a[i],&c);
     i++;}
     max=a[0];
     for(j=1;j<i;j++)
        {if(a[j]<max&&a[j]>min)min=a[j];
        if(a[j]>max) min=max ,max=a[j];}
    if(min==-1)printf("No");
    else printf("%d",min);

}