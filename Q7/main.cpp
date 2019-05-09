#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<numeric>
#include<cmath>
#include<ctime>
#include<unordered_set>

void Display(const std::vector<int>& vec);

int main()
{
	std::srand(unsigned(std::time(0)));

	const size_t N{50};
    int a[N]{};
    int b[N]{};
    int c[N]{};
    // Array a
	std::vector<int> v1{a, a+N};
    std::cout << "v1 : " ;
    Display(v1);
    /*for(size_t i{}; i < N; i++)
    { 
        b[i] = (rand()%N)+1; 
    }*/
    // Array b
    std::vector<int> v2{b, b+N};
    std::generate(v2.begin(), v2.end(), []() { return ((rand() % 50) + 1);});
    std::cout << "v2 : " ;
    Display(v2);
    std::unordered_set<int> s;
	auto end = std::copy_if(v2.begin(), v2.end(), v2.begin(),
							[&s](int const &i) {
								return s.insert(i).second;
							});
    v2.erase(end, v2.end());
    std::cout << "After remove duplicates : ";
    Display(v2);
	//std::generate(v.begin(), v.end(), std::rand);
	//std::cout << "create container :" << std::endl;

    std::vector<int> v3{c, c+N};
    std::iota(v3.begin(), v3.end(), 1);
    std::random_shuffle(v3.begin(), v3.end());
    std::cout << "v3 : " ;
    Display(v3);

    std::vector<int> result{};
    std::transform(v2.begin(), v2.end(), v3.begin(),std::back_inserter(result), 
                    [](const int& a , const int& b) { return (a*a - b*b);});

    std::cout << "result : " ;
    Display(result);
    //std::mt19937 rng(std::random_device{}());
    //std::shuffle(begin(v3), end(v3), rng);
    
    return 0;
}

void Display(const std::vector<int>& vec)
{
    for(auto iter{vec.begin()}; iter != vec.end(); ++iter)
        std::cout << *iter << " ";
    std::cout << std::endl;   
}