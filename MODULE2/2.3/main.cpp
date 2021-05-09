
#include <iostream>
#include <cstring>

class tolowr {
private:
	char* name;
public:
	//Using Constructor
	tolowr(const char* s = nullptr)
		:name{ nullptr } {
		if (s == nullptr) {
			name = new char[1];
			*name = '\0';
		}
		else {
			name = new char[strlen(s) + 1];
			strcpy(name, s);
		}
	}


	//making  string lower
	const char* tolower_fun() {
		char* buff = new char[strlen(name) + 1];
		strcpy(buff, name);
		for (size_t i = 0; i < strlen(buff); ++i) {
			name[i] = tolower(buff[i]);
		}
		return name;
	}

	//display method
	void display()
	{
	    std::cout << "Given String: " << name << std::endl;
	    std::cout << "Lowered string: " << tolower_fun() << std::endl;
	}

	//Destructor
	~tolowr(){
	    std::cout << "Destructor has been called" << std::endl;
        delete [] name;
    }
};


int main() {
    tolowr str{"KIRTAN"};
    str.display();
	return 0;
}
