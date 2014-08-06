#include <iostream>
#include <vector>

int main(int argc, char *argv[])
{
	if(argc < 2)
	{
		std::cout << "usage: sec nums\n";
		return -1;
	}
	
	std::vector<int> vec;
	
	for(int i=1; i<argc; i++)
		vec.push_back(atoi(argv[i]));
	
	typedef std::vector<int>::size_type vector_size;
	vector_size size = vec.size();
	//for(vector_size i=0; i<size; i+=2)
	//{
	//	if((i+1) == size && (size % 2) > 0)
	//	{
	//		std::cout << "lonely one: " << vec[i] << std::endl;
	//		break;
	//	}
	//	else
	//		std::cout << vec[i] << " + " << vec[i+1] << " = " << vec[i] + vec[i+1] << std::endl;
	//}



	return 0;
}
