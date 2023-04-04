#include <iostream>

using namespace std;

int main()
{
    int i, j, n, a[100][100],b[100],c[100], aux, k=1;

    cout<<"Number of rows/columns = "; 
    cin>>n;

    for (i = 1; i <=n; i++)
    {
        for (j = 1; j <=n; j++)
        {
            cout<<"a["<<i<<"]["<<j<<"] = "; 
            cin>>a[i][j];
        }
    }

    for (i = 1; i <=n; i++)
    {
        for (j = 1; j <=n; j++)
        {
            cout<<a[i][j]<<" "; 
        }
        cout<<"\n";
    }

    for(i=1; i<=n; i++)  
    {
        c[k++]=a[i][i];
    }
    k=1;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i+j==n+1)
            {
                b[k++]=a[i][j]; 
            }
        }
    }

    for(i=1; i<n; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            if(c[i]<c[j])   
            {
                aux=c[i];
                c[i]=c[j];
                c[j]=aux;
            }
        }
    }

    for(i=1; i<n; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            if(b[i]<b[j])   
            {
                aux=b[i];
                b[i]=b[j];
                b[j]=aux;
            }
        }
    }

    cout<<"\n";
    k=1;
    for(i=1; i<=n; i++) 
    {
        a[i][i]=c[k++];
    }
    k=1;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i+j==n+1)
            {
                a[i][j]=b[k++];
            }
         }
     }

     for(i=1; i<=n; i++)      
     {
        for(j=1; j<=n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
     }

    return 0;
}
