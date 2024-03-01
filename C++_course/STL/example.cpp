#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v(5);
    for(int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
        if( i == v.size() -1)
        {
            cout << "You reached the limit" << endl;
            cout << "If you want to add elemnts press i key, and press any key to exit : ";
            char press;
            cin >> press;
            if(press == 'i')
            {
                cout << "please Enter the number of elemnts you want to add : ";
                int n;
                cin >> n;
                v.resize(v.size() + n);
            }
            else
            {
                break;
            }
        }
    }

    vector<int>::iterator it = v.begin();

    for(;it != v.end(); it++)
    {
        cout << *it << std::endl;
    }

    return 0;
}