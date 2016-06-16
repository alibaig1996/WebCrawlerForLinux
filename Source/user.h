#ifndef USER
#define USER

#include <iostream>
#include <fstream>
#include <string>
#include <queue>
#include <unistd.h>
#include <cstdlib>

#include <SFML/Network/Http.hpp>

// URL parser class
class url{
    private:
        std::string address; // Variable to store address of webpage
    public:
        // Default constructor
        url() : address("") {}
        // One argument constructor. Termination character added to string to facilitate class functions
        url(std::string s) : address(s + '\0') {}

        std::string protocol(); // Function to get protocol of URL (http, https, file etc)
        std::string host(); // Function to get hostname of URL (www.xyz.com etc)
        std::string path(); // Function to get path of the URL (/absd/123.htm etc)
        void print() { std::cout << address << std::endl; } // Function to print address

};

// Class for maintaining a web crawling session
class session{
    private:

        // Queue maintains list of webpages to crawl
        std::queue<std::string> list;
        // Counter variable to ensure limited number of webpages are crawled
        static int count;
    public:
        session(std::string s = "") { list.push(s); } // Constructor

        bool check_html(); // Member function to check if current webpage is of html format

        void stringsearch(std::string); // Member function searches for hyperlinks and matchng words

};

#endif // USER

