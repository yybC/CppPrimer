#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> vec1{0, 1, 1, 2};
    vector<int> vec2{0, 1, 1, 2, 3, 5, 8};

    auto size = vec1.size() < vec2.size() ? vec1.size() : vec2.size();
    decltype(iv1.size()) idx;
	for (idx = 0; idx != size;++idx)
	{
		if (iv1[idx]!=iv2[idx])
		{
			cout << "no" << endl;
			break;
		}
	}
	if (idx==size)
	{
		cout << "yes" << endl;
	}
    return 0;
}
