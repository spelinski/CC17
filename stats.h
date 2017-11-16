#ifndef STATS_H
#define STATS_H
#include <array>
#include <vector>
#include <algorithm>

double sum(std::array<double,9> my_array){
	return std::accumulate(my_array.begin(),my_array.end(), 0.0);
};

double sum(std::vector<double> my_vector){
	return std::accumulate(my_vector.begin(),my_vector.end(), 0.0);
};

double mean(std::array<double,9> my_array){
	return sum(my_array)/my_array.size();
};

double mean(std::vector<double> my_vector){
	return sum(my_vector)/my_vector.size();
};

double median(std::array<double,9> my_array){
	return 0;
};

double median(std::vector<double> my_vector){
	return 0;
};

double variance(std::array<double,9> my_array){
	double m = mean(my_array);
	double square_sum = 0;
	for (auto& n: my_array)
	{
		square_sum += (n-m)*(n-m);
	}
	return square_sum/my_array.size();
};

double variance(std::vector<double> my_vector){
	double m = mean(my_vector);
	double square_sum = 0;
	for (auto& n: my_vector)
	{
		square_sum += (n-m)*(n-m);
	}
	return square_sum/my_vector.size();
};

double stddev(std::array<double,9> my_array){
	return 0;
};

double stddev(std::vector<double> my_vector){
	return 0;
};

std::array<double,9> zscore(std::array<double,9> my_array){
	std::array<double, 9> a= {1.5,4.0,7.0,9.0,12.3,34.0,52.0,18.1,29.0};
	return a;
};

std::vector<double> zscore(std::vector<double> my_vector){
	std::array<double, 9> a= {1.5,4.0,7.0,9.0,12.3,34.0,52.0,18.1,29.0};
    std::vector<double> v(a.begin(), a.end());
	return v;
};

#endif //STATS_H
