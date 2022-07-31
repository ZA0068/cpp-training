#include <header/standards.hpp>

using std::string;
using std::vector;
using std::cout;

namespace Hard
{
    bool cons(vector<int>);
    bool isValidHexCode(string);
    bool canPlay(vector<string>, string);

    char firstRepeat(string);
    
    int findOdd(vector<int>);
    int countOnes(vector<int>);
    int letterDistance(string, string);
    int primeNumbers(int);
    int sharedLetters(string, string);

    string firstNonRepeatedCharacter(string);
    string mysteryFunc(string);
    string toSnakeCase(string);
    string toCamelCase(string);
    string tweakLetters(string, vector<int>);
    vector<string> makeBox(int);
}