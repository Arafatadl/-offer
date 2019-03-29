#include<stdio.h>
#include<string.h>
main()
{
    char a[10][50];
    int n,i,j,l,m;
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%s",&a[i]);
        for(i=0;i<n;i++){
            l=strlen(a[i]);m=0;
            if((a[i][0]>='a'&&a[i][0]<='z')||
               (a[i][0]>='A'&&a[i][0]<='Z')||a[i][0]=='_')
            {
                m=1;
                for(j=1;j<l;j++)
                    if((a[i][j]>='a'&&a[i][j]<='z')||(a[i][j]>='A'
                                                      &&a[i][j]<='Z')||(a[i][j]>='0'&&a[i][j]<='9')||a[i][j]=='_')
                        m++;
            }
            if(m==l)
                printf("yes\n");
            else
                printf("no\n");
        }
    }
}
/**4
#include<stdio.h>
#include<string.h>
main()
{
    int t,i,j,k,l,m,l1,m1;
    char a[100][100],b[100][100];
    {
        scanf("%d",&t);
        for(i=0;i<t;i++)
            scanf("%s %s",&a[i],&b[i]);
        for(i=0;i<t;i++)
        {
            l=strlen(a[i]);
            m=strlen(b[i]);
            l1=0;m1=0;
            while(m!=m1)
            {
                if(a[i][l1]==b[i][m1])
                    l1++;
                m1++;
            }
            if(l1==l)printf("YES\n");
            else printf("NO\n");
        }
        printf("\n\n");
    }
}
 **/