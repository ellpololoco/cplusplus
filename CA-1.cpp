#include<iostream>
using namespace std;

int main()
{
    int array[100], pos, i, n;

    cout<<("Enter size of array \n");
    cin>>n;
    for (i=0;i<n;i++)
    cin>>array[i];
    cout<<("Enter the location to delete element\n");
    cin>>pos;
    if (pos>=n+1)
    cout<<("Deletion not possible.\n");
    else
    {
        for (i=pos-1;i<n-1;i++)
        array[i] = array[i+1];

        cout<<"Deleted array -\n";
        for(i=0;i<n-1;i++)
        cout<<"\n"<<array[i];
    }
    return 0;
}
