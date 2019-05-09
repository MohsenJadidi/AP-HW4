#include<iostream>
#include<memory>
#include<vector>
#include<string>


template<typename T>
void Display(const std::vector<std::unique_ptr<T>> &vec);


int main()
{
    const size_t n {1000}; // Array size
    std::vector < std::unique_ptr<std::string> >vec{};

    std::cout << "## Push_back ##\n" ;
    std::cout << "Capacity\tSize\n";

    /* PART 1 */

    /*
    for (size_t i{}; i < n; ++i)
    {
        std::string temp = "Str" + std::to_string(i);
        vec.push_back(std::make_unique<std::string>(temp));
        Display(vec);
    }
    */
    /* PART 2 */

	vec.reserve(n);

	for (size_t i{}; i < n; ++i)
	{
        std::string temp = "Str" + std::to_string(i);
        vec.push_back(std::make_unique<std::string>(temp));
        Display(vec);
	}
	
    
    return 0;
}

template<typename T>
void Display(const std::vector<std::unique_ptr<T>> &vec)
{
    std::cout << vec.capacity() << "\t\t" << vec.size() << std::endl;
}