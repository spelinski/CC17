#include "stats.h" // create this file
#include <array>
#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
 
int main()
{
    std::array<double, 9> a= {1.5,4.0,7.0,9.0,12.3,34.0,52.0,18.1,29.0};
    std::vector<double> v(a.begin(), a.end());
 
    std::cout << sum(a) << " " << sum(v) << "\n";
    if((sum(a) == sum(v)) and (sum(a) == 166.9))
    {
		std::cout << "PASSED\n";
	}
	else
	{
		std::cout << "FAILED\n";
	}
	
    std::cout << mean(a) << " " << mean(v) << "\n";
    if((mean(a) == mean(v)) && (floor(mean(a)) == 18))
	{
		std::cout << "PASSED\n";
	}
	else
	{
		std::cout << "FAILED\n";
	}
	
    std::cout << median(a) << " " << median(v) << "\n";
    if((median(a) == median(v)) && (median(a) == 12.3))
    {
		std::cout << "PASSED\n";
	}
	else
	{
		std::cout << "FAILED\n";
	}
	
    std::cout << variance(a) << " " << variance(v) << "\n";
    if((variance(a) == variance(v)) && (floor(variance(a)) == 248))
    {
		std::cout << "PASSED\n";
	}
	else
	{
		std::cout << "FAILED\n";
	}
	
    std::cout << stddev(a) << " " << stddev(v) << "\n";
 
    auto new_a = zscore(a);
    auto new_v = zscore(v);
 
    std::copy(new_a.begin(), new_a.end(), std::ostream_iterator<double>(std::cout, " "));
    std::cout << "\n";
    std::copy(new_v.begin(), new_v.end(), std::ostream_iterator<double>(std::cout, " "));
    std::cout << "\n";
}
