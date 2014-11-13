#include <iostream>

#if !defined(__APPLE__)
#include <malloc.h>
#endif

using namespace std;

void two(int* pData,int Count)
{
        int iTemp;
        for(int i=1; i<Count; i++)
        {
                for (int j=Count-1; j>=1; j--)
                {
                        if (pData[j]<pData[j-1])
                        {
                                iTemp=pData[j-1];
                                pData[j-1]=pData[j];
                                pData[j]=iTemp;
                        }
                }
        }
}
int main()
{
        int*a;
        int o,i;

        cout<<"几个数排序:";
        cin>>o;
        if(o>10){cout<<"过多";}else{
                a=(int*)malloc(o*sizeof(int));

                for(i=0;i<o;++i)
                {

                        cout<<"请输入第"<<i+1<<"个数字:"<<endl;
                        cin>>a[i];
                }

                two(a,o);
                for (i=0;i<o;i++)
                        cout<<a[i]<<" ";
                cout<<endl;
        }
}
