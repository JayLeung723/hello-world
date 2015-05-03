#include <iostream>

bool 
isPalindrome(char *txt)
{
	bool res = false;
	unsigned len = strlen(txt);
	if(len == 0)
	{
		std::cout << "empty string, not a palindrome certainly\n";
		return res;
	}

	if(len == 1)
	{
		res = true;
		return res;
	}
	
	unsigned mid = (len / 2);
	bool isEven = ((len % 2) == 0);
	len -= 1;
	int i = 0;
	char *mapper = NULL;
	while( *(txt + i) != '\0' )
	{
		mapper = (txt + (len - i));
		if(*(txt + i) != *mapper)
		{
			break;
		}
		if((isEven && (i+1) == mid) || (!isEven && i == mid))
		{
			res = true;
			break;
		}
		i++;
	}

	return res;
}

int 
main(int argc, char *argv[])
{
	if(argc < 2)
	{
		std::cout << "please at least input 2 args..\n";
		return -1;
	}

	char *arg = argv[1];
	bool isPld = isPalindrome(arg);
	std::cout << "your input text is palindrome? " << (isPld ? "true" : "false") << std::endl;
	return 0;
}
