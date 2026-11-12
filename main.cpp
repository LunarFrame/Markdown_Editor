#include <iostream> // Standard C++ Library
#include <fstream> // To read,write,edit library


/*
We create an object named filePath to store the string in, user input for the path of the file, getline reads the user inputs from cin and stores it into filePath. With ifstream we acces the object,
we say reading markdown file, then we open filepath where we stored it we store everything in content if it fails the application closes if it works content gets displayed.
*/

int main()
{
    std::string filePath;
    std::cout << "Type file path for markdown file \n";
    std::getline (std::cin, filePath);
    std::fstream file;
    std:: cout << "Reading markdown file \n";
    file.open(filePath);
    std::string content;

    if (!file.is_open()) {
        std::cout << "\nCould not find file";
        return 1;
    }

        if (file.is_open()) {
        // Read each line from the file and store it in the
        // 'line' variable.
        while (getline(file, content)) {
        std:: cout << content << "\n";
        }

    return 0;

        } 
   file << content;



    }
