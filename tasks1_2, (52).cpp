#include <iostream>
#include <cmath>
using namespace std;

// x^3 + 4x^2 + x - 6 = 0, [0,2]

double pol_value(double x){
    return pow(x, 3) + 4*pow(x,2) + x - 6;
}

double math_func(double eps){
    double a = 0.0, b = 2.0;
    double ans_0 = a, ans = -(-12/(pol_value(2)+6)); 
    while ((ans_0 - ans >= eps) || (ans_0 - ans <= -eps)){
        ans_0 = ans;
        ans = ans_0 - (pol_value(ans_0) / (pol_value(b) - pol_value(ans_0)))*(b - ans_0);
    }
    return ans;
}

int main()
{
    double eps,ans;
    cin >> eps;
    ans = math_func(eps);
    cout << '\n' << ans;
}
