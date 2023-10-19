/*

    If statements

    Note here that I am using the C++ cout to write to the console. You can use printf if you prefer,
    but I want to start moving towards C++ and away from C where there are advantages

*/ 

#include <iostream>

// The fuly qualified name for cout is actually std::cout
// :: is known as the "scoping operator" - more on this later
// std is known as a "namespace" - it is a prefix that helps us avoid replicating names
// The standard C++ library uses std:: prefix for many of it's functions
// It is tedious to write this every time, so we make the default namespace std
using namespace std;

int main()
{
    //Some constants 
    const int high = 100, low = 10;

    // start filling the tank 
    int level = 5;

    //Read the keyboad to get the level
    //Repeat until a valid value has been added
    do {
        cout << "Please enter a level (between 0 and 100)" << endl;
        cin >> level;
    } while ((level < 0) || (level > 100));
    
    if (level == 0)
    {
        cout << "Tank is empty sadge" << endl;
    }

    if ((level <= low) || (~level == 0)) // check the level also noticed that in this addition if you put in 0 then you would get both if statement running at the same time which is not incorrect you would need to refill your tank cause its completly empty but i couldnt stop it from running both
    {
        cout << "Tank needs filling" << endl;
    }

    if (level > low)                       // monitor the level
    {
        cout << "Tank has sufficient fuel for now" << endl;
    }

    if (level == high)                       // monitor the level
    {
        cout << "Tank is full" << endl;
    }

}
