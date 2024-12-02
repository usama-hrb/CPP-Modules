
#include "segIsForLosers.hpp"

void	replace(std::string& str, const std::string& s1, const std::string& s2)
{
	size_t	pos = 0;
	while ((pos = str.find(s1, pos)) != std::string::npos)
	{
		if (s1.empty())
			break;
		str.erase(pos, s1.length());
		str.insert(pos, s2);
		pos += s2.length();
	}
}