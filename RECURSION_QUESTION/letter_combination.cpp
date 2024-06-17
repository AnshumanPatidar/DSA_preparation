#include <iostream>
#include<vector>
using namespace std;


void solve(string digit , int index , vector<string>& ans , string mapping[] , string output)
{
    if(index >= digit.length())
    {
        ans.push_back(output);
        return ;
    }

    int number = digit[index]- '0';
    string value = mapping[number];

    for(int i = 0 ; i < value.length(); i++)
    {
        output.push_back(value[i]);
        solve(digit, index + 1, ans , mapping ,output);
        output.pop_back();
    }
}
int main()
{
    string digits = "23";
    vector<string> ans;
    string output = "" ;

    int index;
    string mapping[4] = { "" , "" , "abc" , "def"}; 
    solve(digits , index , ans , mapping , output);

    for(int i = 0 ; i < sizeof(ans) ; i++)
    {
        cout<< ans[i] << " ";
    }

    return 0;
}