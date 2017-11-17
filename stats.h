#include <algorithm>
template<class c>
double sum(c a)
{
	return std::accumulate(a.begin(),a.end(),0.0);
};

template<class c>
double mean(c a)
{
	return sum(a)/a.size();
};

template<class c>
double median(c a)
{
	std::nth_element(a.begin(), a.begin()+(a.size()/2), a.end());
	return a[a.size()/2];
};
template<class c>
double variance(c a)
{
	auto m=mean(a),s=0.0;
	for (auto& n: a)
	{
		s += (n-m)*(n-m);
	}
	return s/a.size();
};

template<class c>
double stddev(c a)
{
	return sqrt(variance(a));
};

template<class c> 
c zscore(c a)
{
	auto r = a;
	auto m=mean(a),s=stddev(a),i=0.0;
	for(auto& n: a)
	{
		r[i] = (n-m)/s;i++;
	}
	return r;
};
