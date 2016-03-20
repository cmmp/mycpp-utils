#pragma once

#include<algorithm>
#include<vector>

namespace MyCppUtils
{
	class Utils {

	public:

		template<typename T>
		static T sampleQuantile(const std::vector<T> &samples, double quantile_probability) {

			std::vector<T> vec_copy = samples;
			std::sort(vec_copy.begin(), vec_copy.end());

			// get the index considering the quantile probability
			int index = static_cast<int>(std::round(quantile_probability * vec_copy.size()));

			return vec_copy[index];
		}

	};
}