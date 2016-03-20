#include<iostream>
#include<vector>

#include "MyCppUtils.h"

#define BOOST_TEST_MAIN
#define BOOST_TEST_MODULE TestMyCppUtils

#include <boost/test/unit_test.hpp>
#include <boost/test/floating_point_comparison.hpp>

BOOST_AUTO_TEST_CASE(test_sample_quantile)
{

	double eps = 1e-5;

	double vals[] = { -1.7690062,  1.8395634,  0.1471367 , 0.9166575, -1.3735382 ,-1.2922401, -0.8019666, -2.0271023,  0.3679942, -0.2203661,
		-0.6833688 ,-0.4724519 ,-1.1511077, -0.5498765, -0.3319151, -1.4608938, -1.6329929 ,-0.4759542,  0.5382961,  0.9091339,
		-0.1960731  ,1.9935024, -0.9178812 , 2.3128425 , 0.4423744,  0.6392177,  0.3017261 , 0.4612829 ,-0.5414020  ,1.4440446 };

	std::vector<double> v;
	for (int i = 0; i < 30; i++) v.push_back(vals[i]);

	double q = MyCppUtils::Utils::sampleQuantile(v, 0.25); 

	BOOST_CHECK_CLOSE(q, -0.8019666, 0.001); // 0.001% closeness required
}

