#include <iostream>
#include <vector>
using namespace std;
int min(vector<vector<int>> array)
{
    int min=array[0][0];
    for(int a=0;a<4;a++)
    {
        for(int b=0;b<3;b++)
        {
            if(array[a][b]<min)
            {
                min=array[a][b];
            }
        }
    }
    return min;
}
int main()
{
    vector<vector<int>> array(4);
    for(int a=0;a<4;a++)
    array[a]=vector<int>(3);
    
    for(int a=0;a<4;a++)
    {
        for(int b=0;b<3;b++)
        {
            cin>>array[a][b];
        }
    }
    cout<<"min:"<<min(array)<<endl;
}
