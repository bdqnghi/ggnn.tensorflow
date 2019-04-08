int main()
{
    int n,a[100],i,b=0,c=0,d=0,e=0;
    double per1=0,per2=0,per3=0,per4=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)

scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {   

if(a[i]>0&&a[i]<19)


b++;

if(a[i]>18&&a[i]<36)


c++;

if(a[i]>35&&a[i]<61)


d++;

if(a[i]>60)


e++;
    }
    per1=(double)b/n*100;
    per2=(double)c/n*100;
    per3=(double)d/n*100;
    per4=(double)e/n*100;
    printf("1-18: %.2lf%\n",per1);
    printf("19-35: %.2lf%\n",per2);
    printf("36-60: %.2lf%\n",per3);
    printf("60??: %.2lf%\n",per4);
    return 0;
} 
