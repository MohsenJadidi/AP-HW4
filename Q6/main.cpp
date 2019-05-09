#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<functional>
#include<numeric>
#include<unordered_set>

template<typename T>
void Display(const T& vec);

int main()
{
    std::vector<int> vec{1, 2, 3, 4, 5, 4, 3, 2, 1};

    std::cout << "Orginal vectror      : ";
    Display(vec);   
    
    /* Part A */
    std::cout << "## Part A ##\n";
    std::vector <int>::iterator pend; 
    pend = std::remove(vec.begin(), vec.end(), 2);
    std::cout << "After remove \t     : ";
    Display(vec);

    vec.erase(pend, vec.end());
    std::cout << "After remove & erase : ";
    Display(vec);
    
    /* Part B */
    std::cout << "\n## Part B ##\n";
    std::vector<int> result(vec.size());
    std::transform(vec.begin(), vec.end(), result.begin(),std::bind(std::multiplies<int>(), std::placeholders::_1, 2));
    std::cout << "After Multiply by 2  : ";
    Display(result);

    /* Part C */
    std::cout << "\n## Part C ##\n";
    int sum{std::accumulate(vec.begin(), vec.end(), 0)};
    double average{static_cast<double>(sum)/vec.size()};
    std::cout << "Average = " << average ;
    std::cout << " , vector : ";
    Display(vec);
    std::sort(vec.begin(), vec.end(), [&average](const int& a , const int&b){return std::abs(a - average) < std::abs(b - average); });
    std::cout << "After sort(distance from avg) : ";
    Display(vec);

    /* Part D */
    std::cout << "\n## Part D ##\n";
    std::cout << "vector : ";
    Display(vec);

/*  std::sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(), vec.end()), vec.end() );
*/
    std::unordered_set<int> s;
	auto end = std::copy_if(vec.begin(), vec.end(), vec.begin(),
							[&s](int const &i) {
								return s.insert(i).second;
							});

	vec.erase(end, vec.end());
    std::cout << "After remove duplicates : ";
    Display(vec);

    /* Part E */
    std::cout << "\n## Part E ##\n";
    std::set <int> set(vec.begin(), vec.end()); 
    std::cout << "set : ";
    Display(set);
/*
    auto first_to_erase{ std::remove_if(set.begin(), set.end(), [](int x){ return x > 3; }) };
    set.erase(first_to_erase, set.end());                     
*/
    auto it = set.upper_bound(3);
    //Erasing
    set.erase(set.begin(),it);
    std::cout << "New set : ";
    Display(set);

    return 0;
}

template<typename T>
void Display(const T& vec)
{
    for(auto iter{vec.begin()}; iter != vec.end(); ++iter)
        std::cout << *iter << " ";
    std::cout << std::endl;   
}
