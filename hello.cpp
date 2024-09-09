#include <bits/stdc++.h>
#define printA2(A, n, m)  {cout<<"-->"<<#A<<"=\n";for(int i = 0; i < n; i++){for(int j = 0; j < m; j++){cout<<A[i][j]<<" ";}cout<<"\n";}cout<<"\n";}
#define printA(A, n)      {cout<<"-->"<<#A<<"=(";for(int i = 0; i < n; i++)cout<<A[i]<<" ";cout<<")\n";}
#define printv(args...)    {string sss(#args);sss+=',';cout<<"-->";debugger::call(sss.begin(), sss.end(), args);cout<<"\n";}
#define forloop(i, x,  n) for(int i = x; i < n; i++)
#define revloop(i, x,  n) for(int i = x; i >= 0; i--)
#define cinvect(arr, n) for(int i = 0; i < n; i++){int temp; cin >> temp; arr.push_back(temp);}
#define cinset(arr, n) for(int i = 0; i < n; i++){ int temp; cin >> temp; arr.insert(temp);}
#define mii map<int, int>
#define mll map<ll, ll>
#define mli map<ll, int>
#define mil map<int, ll>
#define mls map<ll, string>
#define msl map<string, ll>
#define mis map<int, string>
#define msi map<string, int>
#define mss map<string, string>
#define vi vector<int>
#define vl vector<ll>
#define br "\n"
#define mpii unordered_map<int,int>
#define mpi unordered_map<int>
using namespace std;

struct debugger
{
    typedef string::iterator si;
    static void call(si it, si ed) {}
    template<typename T, typename ... aT>
    static void call(si it, si ed, T a, aT... rest)
    {
        string b;
        for(; *it!=','; ++it)
        {
            if(*it!=' ')
            {
                b+=*it;
            }
        }
        cout << b << "=" << a << " ";
        call(++it, ed, rest...);
    }
};

void vout(std::vector<int> const &input)
{
    std::cout<<"[";
    for (auto const &i: input)
    {

        std::cout << i << " ";
    }
    std::cout<<"]";
}

int countDigit(int n)
{
   if(n == 0)
     return 1;
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}

/***********************************************************************/

int main()
{
 int n;
 cin>>n;

 for(int i=0;i<=n;i++)
 {
     cout << i << endl;
 }
}

